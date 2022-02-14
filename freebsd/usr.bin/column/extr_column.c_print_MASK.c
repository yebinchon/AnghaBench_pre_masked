
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (char*,int *) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_2;
 wchar_t **VAR_3;

 for (VAR_2 = VAR_0, VAR_3 = VAR_1; VAR_2--; ++VAR_3)
  (void)FUNC_0(L"%ls\n", *VAR_3);
}
