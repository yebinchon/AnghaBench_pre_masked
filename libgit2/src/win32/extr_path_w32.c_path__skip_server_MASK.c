
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static wchar_t *FUNC_1(wchar_t *VAR_0)
{
 wchar_t *VAR_1;

 for (VAR_1 = VAR_0; *VAR_1; VAR_1++) {
  if (FUNC_0(*VAR_1))
   return VAR_1 + 1;
 }

 return VAR_1;
}
