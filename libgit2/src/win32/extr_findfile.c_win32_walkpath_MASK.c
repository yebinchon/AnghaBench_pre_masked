
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static wchar_t* FUNC_1(wchar_t *VAR_0, wchar_t *VAR_1, size_t VAR_2)
{
 wchar_t VAR_3, *VAR_4 = VAR_0;

 FUNC_0(VAR_0 && VAR_1 && VAR_2);

 VAR_3 = (*VAR_0 == L'"') ? *VAR_0++ : L';';

 for (VAR_2--; *VAR_0 && *VAR_0 != VAR_3 && VAR_2; VAR_2--)
  *VAR_1++ = *VAR_0++;

 *VAR_1 = L'\0';

 while (*VAR_0 == VAR_3 || *VAR_0 == L';')
  VAR_0++;

 return (VAR_0 != VAR_4) ? VAR_0 : ((void*)0);
}
