
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char* VAR_0 ;
 char* VAR_1 ;

int FUNC_2 (void) {
  if (VAR_1 == VAR_0) {
    FUNC_0 ();
    FUNC_1 (VAR_1 != VAR_0);
  }
  while ((*VAR_1 < '0' || *VAR_1 > '9') && *VAR_1 != '-') {
    VAR_1 ++;
    if (VAR_1 == VAR_0) {
      FUNC_0 ();
      FUNC_1 (VAR_1 != VAR_0);
    }
  }
  if (VAR_1 + 20 > VAR_0) {
    FUNC_0 ();
  }
  int VAR_2 = 1;
  while (*VAR_1 == '-') {
    VAR_2 = -VAR_2;
    VAR_1 ++;
  }
  int VAR_3 = 0;
  while (VAR_1 < VAR_0 && *VAR_1 >= '0' && *VAR_1 <= '9') {
    VAR_3 = VAR_3 * 10 + *VAR_1 - '0';
    VAR_1 ++;
  }
  if (VAR_2 < 0) {
    VAR_3 = -VAR_3;
  }
  return VAR_3;
}
