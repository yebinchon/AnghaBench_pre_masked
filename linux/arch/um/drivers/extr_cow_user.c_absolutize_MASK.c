
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int save_cwd ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int * FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static int FUNC_7(char *VAR_1, int VAR_2, char *VAR_3)
{
 char VAR_4[256], *VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_4, sizeof(VAR_4)) == ((void*)0)) {
  FUNC_1("absolutize : unable to get cwd - errno = %d\n",
      VAR_0);
  return -1;
 }
 VAR_5 = FUNC_6(VAR_3, '/');
 if (VAR_5 != ((void*)0)) {
  *VAR_5 = '\0';
  if (FUNC_0(VAR_3)) {
   *VAR_5 = '/';
   FUNC_1("absolutize : Can't cd to '%s' - "
       "errno = %d\n", VAR_3, VAR_0);
   return -1;
  }
  *VAR_5 = '/';
  if (FUNC_2(VAR_1, VAR_2) == ((void*)0)) {
   FUNC_1("absolutize : unable to get cwd of '%s' - "
          "errno = %d\n", VAR_3, VAR_0);
   return -1;
  }
  VAR_6 = VAR_2 - FUNC_5(VAR_1);
  if (FUNC_5(VAR_5) + 1 > VAR_6) {
   FUNC_1("absolutize : unable to fit '%s' into %d "
          "chars\n", VAR_3, VAR_2);
   return -1;
  }
  FUNC_3(VAR_1, VAR_5);
 }
 else {
  if (FUNC_5(VAR_4) + 1 + FUNC_5(VAR_3) + 1 > VAR_2) {
   FUNC_1("absolutize : unable to fit '%s' into %d "
          "chars\n", VAR_3, VAR_2);
   return -1;
  }
  FUNC_4(VAR_1, VAR_4);
  FUNC_3(VAR_1, "/");
  FUNC_3(VAR_1, VAR_3);
 }
 if (FUNC_0(VAR_4)) {
  FUNC_1("absolutize : Can't cd to '%s' - "
      "errno = %d\n", VAR_4, VAR_0);
  return -1;
 }
 return 0;
}
