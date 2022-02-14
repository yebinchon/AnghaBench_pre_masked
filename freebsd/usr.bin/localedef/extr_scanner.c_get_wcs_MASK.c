
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int * FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;

wchar_t *
FUNC_2(void)
{
 wchar_t *VAR_3 = VAR_1;
 VAR_0 = 0;
 VAR_1 = ((void*)0);
 VAR_2 = 0;
 if (VAR_3 == ((void*)0)) {
  if ((VAR_3 = FUNC_0(L"")) == ((void*)0)) {
   FUNC_1("out of memory");
  }
 }
 return (VAR_3);
}
