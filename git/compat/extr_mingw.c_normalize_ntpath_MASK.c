
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static wchar_t *FUNC_2(wchar_t *VAR_0)
{
 int VAR_1;

 if (VAR_0[0] == '\\') {

  if (!FUNC_0(VAR_0, L"\\??\\", 4) ||
      !FUNC_0(VAR_0, L"\\\\?\\", 4))
   VAR_0 += 4;
  else if (!FUNC_1(VAR_0, L"\\DosDevices\\", 12))
   VAR_0 += 12;

  if (!FUNC_1(VAR_0, L"UNC\\", 4)) {
   VAR_0 += 2;
   *VAR_0 = '\\';
  }
 }

 for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++)
  if (VAR_0[VAR_1] == '\\')
   VAR_0[VAR_1] = '/';
 return VAR_0;
}
