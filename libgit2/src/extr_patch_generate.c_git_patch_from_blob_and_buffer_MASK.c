
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_patch ;
typedef int git_diff_options ;
typedef int git_diff_file_content_src ;
typedef int git_blob ;


 int FUNC_0 (int const*,char const*) ;
 int FUNC_1 (void const*,size_t,char const*) ;
 int FUNC_2 (int **,int *,int *,int const*) ;

int FUNC_3(
 git_patch **VAR_0,
 const git_blob *VAR_1,
 const char *VAR_2,
 const void *VAR_3,
 size_t VAR_4,
 const char *VAR_5,
 const git_diff_options *VAR_6)
{
 git_diff_file_content_src VAR_7 =
  FUNC_0(VAR_1, VAR_2);
 git_diff_file_content_src VAR_8 =
  FUNC_1(VAR_3, VAR_4, VAR_5);
 return FUNC_2(VAR_0, &VAR_7, &VAR_8, VAR_6);
}
