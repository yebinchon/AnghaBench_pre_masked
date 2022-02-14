
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_merge_options ;
typedef int git_merge_file_options ;
typedef int git_merge_diff_list ;
typedef int git_merge_diff ;


 int FUNC_0 (int*,int *,int const*,int const*,int const*) ;
 int FUNC_1 (int*,int *,int const*) ;
 int FUNC_2 (int*,int *,int const*) ;
 int FUNC_3 (int*,int *,int const*) ;

__attribute__((used)) static int FUNC_4(
 int *VAR_0,
 git_merge_diff_list *VAR_1,
 const git_merge_diff *VAR_2,
 const git_merge_options *VAR_3,
 const git_merge_file_options *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;

 *VAR_0 = 0;

 if ((VAR_6 = FUNC_3(
   &VAR_5, VAR_1, VAR_2)) < 0)
  goto done;

 if (!VAR_5 && (VAR_6 = FUNC_1(
   &VAR_5, VAR_1, VAR_2)) < 0)
  goto done;

 if (!VAR_5 && (VAR_6 = FUNC_2(
   &VAR_5, VAR_1, VAR_2)) < 0)
  goto done;

 if (!VAR_5 && (VAR_6 = FUNC_0(
   &VAR_5, VAR_1, VAR_2, VAR_3, VAR_4)) < 0)
  goto done;

 *VAR_0 = VAR_5;

done:
 return VAR_6;
}
