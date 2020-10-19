#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
        int sum;
        vector<int> sum1;
        for(int i =0 ; i < nums.size() ; i++)
        {
            if(i == 0){
                    sum = nums[0];
                    sum1.push_back(sum);
            }
            else
            {
                sum +=nums[i];
                sum1.push_back(sum);
            }
        }
        return sum1;
    }
int main()
{
    vector<int> num = {1,2,3,4,5};
    vector<int>res = runningSum(num);
    for(auto beg = res.begin();beg != res.end();*beg++)
    {
        cout<<*beg<<endl;
    }
}
