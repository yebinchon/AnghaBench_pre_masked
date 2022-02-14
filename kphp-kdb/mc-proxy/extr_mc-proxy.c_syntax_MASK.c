
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2 (const char *VAR_4) {
  char *VAR_5 = VAR_0, *VAR_6 = VAR_5 + 20;
  if (!VAR_4) {
    VAR_4 = "syntax error";
  }
  if (VAR_1) {
    FUNC_0 (VAR_3, "%s:%d: ", VAR_2, VAR_1);
  }
  FUNC_0 (VAR_3, "fatal: %s near ", VAR_4);
  while (*VAR_5 && *VAR_5 != 13 && *VAR_5 != 10) {
    FUNC_1 (*VAR_5++, VAR_3);
    if (VAR_5 > VAR_6) {
      FUNC_0 (VAR_3, " ...");
      break;
    }
  }
  FUNC_1 ('\n', VAR_3);

  return -1;
}
