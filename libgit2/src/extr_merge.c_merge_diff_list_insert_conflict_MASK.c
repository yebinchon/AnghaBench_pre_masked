
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_diff_df_data {int dummy; } ;
struct TYPE_4__ {int conflicts; } ;
typedef TYPE_1__ git_merge_diff_list ;
typedef int git_merge_diff ;
typedef int git_index_entry ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct merge_diff_df_data*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int const**) ;

__attribute__((used)) static int FUNC_4(
 git_merge_diff_list *VAR_0,
 struct merge_diff_df_data *VAR_1,
 const git_index_entry *VAR_2[3])
{
 git_merge_diff *VAR_3;

 if ((VAR_3 = FUNC_3(VAR_0, VAR_2)) == ((void*)0) ||
  FUNC_2(VAR_3) < 0 ||
  FUNC_1(VAR_1, VAR_3) < 0 ||
  FUNC_0(&VAR_0->conflicts, VAR_3) < 0)
  return -1;

 return 0;
}
