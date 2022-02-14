
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_merge_file_result ;
typedef int git_merge_file_options ;
typedef int git_merge_file_input ;


 int FUNC_0 (int *,int const*,int const*,int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int *,int const*,int const*,int const*,int const*) ;

__attribute__((used)) static int FUNC_3(
 git_merge_file_result *VAR_0,
 const git_merge_file_input *VAR_1,
 const git_merge_file_input *VAR_2,
 const git_merge_file_input *VAR_3,
 const git_merge_file_options *VAR_4)
{
 if (FUNC_1(VAR_1) ||
  FUNC_1(VAR_2) ||
  FUNC_1(VAR_3))
  return FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4);

 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
