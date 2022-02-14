
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int git_win32_path ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,char const*) ;

int FUNC_2(const char* VAR_1, mode_t VAR_2)
{
 git_win32_path VAR_3;

 if (FUNC_1(VAR_3, VAR_1) < 0)
  return -1;

 return FUNC_0(VAR_3, VAR_2 & VAR_0);
}
