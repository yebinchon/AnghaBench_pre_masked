
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef char* git_win32_utf8_path ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*,char*,int) ;

int FUNC_5(git_win32_utf8_path VAR_1, const wchar_t *VAR_2)
{
 char *VAR_3 = VAR_1;
 int VAR_4;


 if (FUNC_3(VAR_2)) {
  VAR_2 += 4;


  if (FUNC_4(VAR_2, L"UNC\\", 4) == 0) {
   VAR_2 += 4;

   FUNC_2(VAR_1, "\\\\", 2);
   VAR_3 = VAR_1 + 2;
  }
 }

 if ((VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_2)) < 0)
  return VAR_4;

 FUNC_1(VAR_1);

 return VAR_4;
}
