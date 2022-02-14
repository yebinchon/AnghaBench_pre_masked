
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const git_merge_file_options ;


 int const VAR_0 ;
 int FUNC_0 (int const*,int const*,int) ;

__attribute__((used)) static void FUNC_1(
 git_merge_file_options *VAR_1,
 const git_merge_file_options *VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_1, VAR_2, sizeof(git_merge_file_options));
 else {
  git_merge_file_options VAR_3 = VAR_0;
  FUNC_0(VAR_1, &VAR_3, sizeof(git_merge_file_options));
 }
}
