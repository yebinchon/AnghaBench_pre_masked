
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int* VAR_0 ;
 int* VAR_1 ;

int FUNC_2 (char *VAR_2, int VAR_3) {
  int VAR_4 = 0;
  FUNC_1 ();
  if (VAR_1 == VAR_0) {
    return -1;
  }
  while (VAR_4 < VAR_3 && (*VAR_1 > 32) ) {
    VAR_2[VAR_4++] = *(VAR_1++);
    if (VAR_1 == VAR_0) {
      FUNC_0 ();
      if (VAR_1 == VAR_0) {
        break;
      }
    }
  }
  VAR_2[VAR_4++] = 0;
  return 0;
}
