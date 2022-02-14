
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

int FUNC_3 (char *VAR_0) {
  int VAR_1 = FUNC_1 (VAR_0);
  if (VAR_1 == 1) {
    FUNC_0 ("Enable expanding UTF-8 characters in strings.\n");
    FUNC_2 (1);
  } else if (VAR_1 == 0) {
    FUNC_0 ("Disable expanding UTF-8 characters in strings.\n");
    FUNC_2 (0);
  }
  return 0;
}
