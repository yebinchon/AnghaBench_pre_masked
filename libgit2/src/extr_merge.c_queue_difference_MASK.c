
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_diff_find_data {int diff_list; int df_data; } ;
typedef int git_index_entry ;


 scalar_t__ FUNC_0 (int const*,int const*) ;
 int FUNC_1 (int ,int *,int const**) ;
 int FUNC_2 (int ,int const**) ;

__attribute__((used)) static int FUNC_3(const git_index_entry **VAR_0, void *VAR_1)
{
 struct merge_diff_find_data *VAR_2 = VAR_1;
 bool VAR_3 = 0;
 size_t VAR_4;

 if (!VAR_0[0] || !VAR_0[1] || !VAR_0[2]) {
  VAR_3 = 1;
 } else {
  for (VAR_4 = 1; VAR_4 < 3; VAR_4++) {
   if (FUNC_0(VAR_0[0], VAR_0[VAR_4]) != 0) {
    VAR_3 = 1;
    break;
   }
  }
 }

 return VAR_3 ?
  FUNC_1(
   VAR_2->diff_list, &VAR_2->df_data, VAR_0) :
  FUNC_2(VAR_2->diff_list, VAR_0);
}
