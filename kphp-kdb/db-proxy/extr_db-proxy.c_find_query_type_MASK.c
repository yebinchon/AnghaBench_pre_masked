
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char*) ;

int FUNC_3 (char *VAR_0, char *VAR_1) {
  int VAR_2;
  while (VAR_0 < VAR_1) {
    VAR_0 = FUNC_2 (VAR_0, VAR_1);
    VAR_2 = FUNC_1 (VAR_0, VAR_1);
    if (VAR_2 <= 0) {
      return 0;
    }
    if ((*VAR_0 >= 'A' && *VAR_0 <= 'Z') || (*VAR_0 >= 'a' && *VAR_0 <= 'z')) {
      if (VAR_2 == 6) {
 if (!FUNC_0 (VAR_0, "SELECT", 6)) {
   return -1;
 } else if (!FUNC_0 (VAR_0, "UPDATE", 6)) {
   return 1;
 } else if (!FUNC_0 (VAR_0, "INSERT", 6)) {
   return 1;
 } else if (!FUNC_0 (VAR_0, "DELETE", 6)) {
   return 1;
 }
      }
      if (VAR_2 == 4 && !FUNC_0 (VAR_0, "SHOW", 4)) {
 return -1;
      }
    }
    VAR_0 += VAR_2;
  }
  return 0;
}
