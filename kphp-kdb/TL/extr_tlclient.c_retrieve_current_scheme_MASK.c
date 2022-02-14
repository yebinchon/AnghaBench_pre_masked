
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;

int FUNC_3 (char *VAR_1) {
  VAR_0 = FUNC_0 (VAR_1, "w");
  if (VAR_0 == ((void*)0)) {
    FUNC_1 ("Couln't open \"%s\" for writing. %m\n", VAR_1);
    return -1;
  }

  if (FUNC_2 ("(help.getScheme 1)") < 0) {
    return -1;
  }
  return 0;
}
