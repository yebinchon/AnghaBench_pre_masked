
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int git_win32_path ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char*,size_t,int *) ;

int FUNC_3(char *VAR_5, size_t VAR_6)
{
 git_win32_path VAR_7;
 wchar_t *VAR_8 = FUNC_1(VAR_7, VAR_3);

 if (!VAR_8)
  return -1;


 if (FUNC_2(VAR_5, VAR_6, VAR_8) < 0) {
  DWORD VAR_9 = FUNC_0();

  if (VAR_9 == VAR_2)
   VAR_4 = VAR_1;
  else
   VAR_4 = VAR_0;

  return -1;
 }

 return 0;
}
