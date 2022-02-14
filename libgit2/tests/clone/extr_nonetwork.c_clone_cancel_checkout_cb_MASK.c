
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_diff_file ;
typedef int const* git_checkout_notify_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(
 git_checkout_notify_t VAR_0,
 const char *VAR_1,
 const git_diff_file *VAR_2,
 const git_diff_file *VAR_3,
 const git_diff_file *VAR_4,
 void *VAR_5)
{
 const char *VAR_6 = VAR_5;
 FUNC_0(VAR_0); FUNC_0(VAR_2); FUNC_0(VAR_3); FUNC_0(VAR_4);
 if (!FUNC_1(VAR_1, VAR_6))
  return -12345;
 return 0;
}
