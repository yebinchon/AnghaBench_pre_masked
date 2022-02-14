
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (int ) ;

wchar_t *
FUNC_1(wchar_t *VAR_0, const wchar_t *VAR_1, size_t VAR_2)
{
 wchar_t *VAR_3 = VAR_0;

 VAR_2++;
 while (--VAR_2 > 0 && (*VAR_0++ = FUNC_0(*VAR_1++)) != 0)
  continue;
 if (VAR_2 > 0)
  while (--VAR_2 > 0)
   *VAR_0++ = 0;
 return (VAR_3);
}
