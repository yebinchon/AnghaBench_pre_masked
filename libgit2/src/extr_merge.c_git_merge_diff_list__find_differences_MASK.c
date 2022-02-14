
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_diff_find_data {int * member_0; } ;
typedef int git_merge_diff_list ;
typedef int git_iterator ;


 int FUNC_0 (int **,int,int ,struct merge_diff_find_data*) ;
 int VAR_0 ;

int FUNC_1(
 git_merge_diff_list *VAR_1,
 git_iterator *VAR_2,
 git_iterator *VAR_3,
 git_iterator *VAR_4)
{
 git_iterator *VAR_5[3] = { VAR_2, VAR_3, VAR_4 };
 struct merge_diff_find_data VAR_6 = { VAR_1 };

 return FUNC_0(VAR_5, 3, VAR_0, &VAR_6);
}
