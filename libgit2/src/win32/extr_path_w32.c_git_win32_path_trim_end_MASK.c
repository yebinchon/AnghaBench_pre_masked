
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ FUNC_0 (int) ;

size_t FUNC_1(wchar_t *VAR_0, size_t VAR_1)
{
 while (1) {
  if (!VAR_1 || VAR_0[VAR_1 - 1] != L'\\')
   break;





  if (VAR_1 == 3 && FUNC_0(VAR_0[0]) && VAR_0[1] == ':')
   break;

  VAR_1--;
 }

 VAR_0[VAR_1] = L'\0';

 return VAR_1;
}
