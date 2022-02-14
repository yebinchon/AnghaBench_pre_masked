
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_patch ;
typedef int git_diff_options ;
typedef int git_diff_file_content_src ;


 int FUNC_0 (void const*,size_t,char const*) ;
 int FUNC_1 (int **,int *,int *,int const*) ;

int FUNC_2(
 git_patch **VAR_0,
 const void *VAR_1,
 size_t VAR_2,
 const char *VAR_3,
 const void *VAR_4,
 size_t VAR_5,
 const char *VAR_6,
 const git_diff_options *VAR_7)
{
 git_diff_file_content_src VAR_8 =
  FUNC_0(VAR_1, VAR_2, VAR_3);
 git_diff_file_content_src VAR_9 =
  FUNC_0(VAR_4, VAR_5, VAR_6);
 return FUNC_1(VAR_0, &VAR_8, &VAR_9, VAR_7);
}
