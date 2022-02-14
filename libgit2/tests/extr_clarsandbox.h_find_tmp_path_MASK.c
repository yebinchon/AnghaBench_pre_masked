
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 size_t VAR_0 ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_6(char *VAR_1, size_t VAR_2)
{

 static const size_t VAR_3 = 5;
 static const char *VAR_4[] = {
  "CLAR_TMP", "TMPDIR", "TMP", "TEMP", "USERPROFILE"
  };

  size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  const char *VAR_6 = FUNC_2(VAR_4[VAR_5]);
  if (!VAR_6)
   continue;

  if (FUNC_3(VAR_6)) {




   FUNC_5(VAR_1, VAR_6, VAR_2);
   return 0;
  }
 }


 if (FUNC_3("/tmp")) {




  FUNC_5(VAR_1, "/tmp", VAR_2);
  return 0;
 }
 if (FUNC_3(".")) {
  FUNC_5(VAR_1, ".", VAR_2);
  return 0;
 }

 return -1;
}
