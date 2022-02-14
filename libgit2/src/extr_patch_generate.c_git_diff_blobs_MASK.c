
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
 int FUNC_1 (int *,int *,int const*,int ,int ,int ,int ,void*) ;

int FUNC_2(
 const git_blob *VAR_0,
 const char *VAR_1,
 const git_blob *VAR_2,
 const char *VAR_3,
 const git_diff_options *VAR_4,
 git_diff_file_cb VAR_5,
 git_diff_binary_cb VAR_6,
 git_diff_hunk_cb VAR_7,
 git_diff_line_cb VAR_8,
 void *VAR_9)
{
 git_diff_file_content_src VAR_10 =
  FUNC_0(VAR_0, VAR_1);
 git_diff_file_content_src VAR_11 =
  FUNC_0(VAR_2, VAR_3);
 return FUNC_1(
  &VAR_10, &VAR_11, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
