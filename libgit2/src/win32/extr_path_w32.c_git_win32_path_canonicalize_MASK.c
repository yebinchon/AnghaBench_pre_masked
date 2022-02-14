
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int* git_win32_path ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int*,int) ;
 int* FUNC_2 (int*) ;

int FUNC_3(git_win32_path VAR_2)
{
 wchar_t *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7;

 VAR_3 = VAR_5 = FUNC_2(VAR_2);


 for (VAR_4 = VAR_2; VAR_4 < VAR_5; VAR_4++) {
  if (*VAR_4 == L'/')
   *VAR_4 = L'\\';
 }

 while (*VAR_4) {
  for (VAR_6 = VAR_4; *VAR_6; ++VAR_6) {
   if (*VAR_6 == L'/') {
    *VAR_6 = L'\\';
    break;
   }

   if (*VAR_6 == L'\\')
    break;
  }

  VAR_7 = VAR_6 - VAR_4;

  if (VAR_7 == 1 && VAR_4[0] == L'.')
                                      ;

  else if (VAR_7 == 2 && VAR_4[0] == L'.' && VAR_4[1] == L'.') {
   if (VAR_5 == VAR_3) {

    if (*VAR_6 == L'\\')
     VAR_7++;

    VAR_3 = VAR_5;
   } else {

    while (VAR_5 > VAR_3 && VAR_5[-1] == L'\\') VAR_5--;
    while (VAR_5 > VAR_3 && VAR_5[-1] != L'\\') VAR_5--;
   }
  } else {
   if (*VAR_6 == L'\\' && *VAR_4 != L'\\')
    VAR_7++;

   if (VAR_5 != VAR_4)
    FUNC_1(VAR_5, VAR_4, sizeof(wchar_t) * VAR_7);

   VAR_5 += VAR_7;
  }

  VAR_4 += VAR_7;

  while (*VAR_4 == L'\\') VAR_4++;
 }


 while (VAR_5 > VAR_3 && VAR_5[-1] == L'\\') VAR_5--;

 *VAR_5 = L'\0';

 if ((VAR_5 - VAR_2) > VAR_1) {
  FUNC_0(VAR_0);
  return -1;
 }

 return (int)(VAR_5 - VAR_2);
}
