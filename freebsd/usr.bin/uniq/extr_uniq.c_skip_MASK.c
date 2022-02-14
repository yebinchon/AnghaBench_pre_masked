
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static wchar_t *
FUNC_1(wchar_t *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0; *VAR_2 != L'\0' && VAR_4++ != VAR_1; ) {
  while (FUNC_0(*VAR_2))
   VAR_2++;
  while (*VAR_2 != L'\0' && !FUNC_0(*VAR_2))
   VAR_2++;
 }
 for (VAR_3 = VAR_0; VAR_3-- && *VAR_2 != L'\0'; ++VAR_2)
  ;
 return(VAR_2);
}
