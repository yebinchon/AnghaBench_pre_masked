
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_diff_options ;
typedef int git_diff_line_cb ;
typedef int git_diff_hunk_cb ;
typedef int git_diff_file_content_src ;
typedef int git_diff_file_cb ;
typedef int git_diff_binary_cb ;
typedef int git_blob ;


 int FUNC_0 (int const*,char const*) ;
 int FUNC_1 (char const*,size_t,char const*) ;
 int FUNC_2 (int *,int *,int const*,int ,int ,int ,int ,void*) ;

int FUNC_3(
 const git_blob *VAR_0,
 const char *VAR_1,
 const char *VAR_2,
 size_t VAR_3,
 const char *VAR_4,
 const git_diff_options *VAR_5,
 git_diff_file_cb VAR_6,
 git_diff_binary_cb VAR_7,
 git_diff_hunk_cb VAR_8,
 git_diff_line_cb VAR_9,
 void *VAR_10)
{
 git_diff_file_content_src VAR_11 =
  FUNC_0(VAR_0, VAR_1);
 git_diff_file_content_src VAR_12 =
  FUNC_1(VAR_2, VAR_3, VAR_4);
 return FUNC_2(
  &VAR_11, &VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
