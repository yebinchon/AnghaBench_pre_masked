
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int) ;
 char* VAR_0 ;
 int FUNC_1 () ;

char *FUNC_2 (void) {
  int VAR_1 = FUNC_1 ();
  if (!VAR_1) {
    ++VAR_0;
    return 0;
  }
  char *VAR_2 = VAR_0;
  VAR_0 += VAR_1 + 1;

  return FUNC_0 (VAR_2, VAR_1);
}
