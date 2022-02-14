
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_win32_path ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char const*) ;

int FUNC_2(bool *VAR_2, const char *VAR_3)
{
 git_win32_path VAR_4;
 DWORD VAR_5;

 if (FUNC_1(VAR_4, VAR_3) < 0)
  return -1;

 VAR_5 = FUNC_0(VAR_4);


 if (VAR_5 == VAR_1)
  return -1;

 *VAR_2 = (VAR_5 & VAR_0) ? 1 : 0;
 return 0;
}
