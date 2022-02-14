
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_describe_format_options ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_2(
 git_describe_format_options *VAR_1,
 const git_describe_format_options *VAR_2)
{
 if (!VAR_2) {
  FUNC_0(VAR_1, VAR_0);
  return 0;
 }

 FUNC_1(VAR_1, VAR_2, sizeof(git_describe_format_options));
 return 0;
}
