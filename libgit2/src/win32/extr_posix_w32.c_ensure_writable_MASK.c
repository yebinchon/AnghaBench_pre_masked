
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(wchar_t *VAR_3)
{
 DWORD VAR_4;

 if ((VAR_4 = FUNC_0(VAR_3)) == VAR_2)
  goto on_error;

 if ((VAR_4 & VAR_0) == 0)
  return 0;

 if (!FUNC_1(VAR_3, (VAR_4 & ~VAR_0)))
  goto on_error;

 return VAR_1;

on_error:
 FUNC_2();
 return -1;
}
