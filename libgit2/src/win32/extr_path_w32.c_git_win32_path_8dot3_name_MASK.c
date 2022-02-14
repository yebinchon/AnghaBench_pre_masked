
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int* git_win32_path ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,int*) ;
 scalar_t__ FUNC_3 (int*,char const*) ;

char *FUNC_4(const char *VAR_1)
{
 git_win32_path VAR_2, VAR_3;
 wchar_t *VAR_4;
 char *VAR_5;
 int VAR_6, VAR_7 = 1;

 if (FUNC_3(VAR_2, VAR_1) < 0)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_0);

 while (VAR_6 && VAR_3[VAR_6-1] == L'\\')
  VAR_3[--VAR_6] = L'\0';

 if (VAR_6 == 0 || VAR_6 >= VAR_0)
  return ((void*)0);

 for (VAR_4 = VAR_3 + (VAR_6 - 1);
  VAR_4 > VAR_3 && *(VAR_4-1) != '/' && *(VAR_4-1) != '\\';
  VAR_4--)
  VAR_7++;





 if (VAR_7 > 12 || (VAR_5 = FUNC_1(VAR_7 + 1)) == ((void*)0))
  return ((void*)0);

 if ((VAR_6 = FUNC_2(VAR_5, VAR_7 + 1, VAR_4)) < 0)
  return ((void*)0);

 return VAR_5;
}
