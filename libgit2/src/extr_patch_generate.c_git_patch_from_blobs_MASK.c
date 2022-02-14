
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_patch ;
typedef int git_diff_options ;
typedef int git_diff_file_content_src ;
typedef int git_blob ;


 int FUNC_0 (int const*,char const*) ;
 int FUNC_1 (int **,int *,int *,int const*) ;

int FUNC_2(
 git_patch **VAR_0,
 const git_blob *VAR_1,
 const char *VAR_2,
 const git_blob *VAR_3,
 const char *VAR_4,
 const git_diff_options *VAR_5)
{
 git_diff_file_content_src VAR_6 =
  FUNC_0(VAR_1, VAR_2);
 git_diff_file_content_src VAR_7 =
  FUNC_0(VAR_3, VAR_4);
 return FUNC_1(VAR_0, &VAR_6, &VAR_7, VAR_5);
}
