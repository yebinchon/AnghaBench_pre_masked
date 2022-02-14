
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather {int* extra; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2 (struct gather *VAR_0, int VAR_1) {
  int *VAR_2 = VAR_0->extra;
  if (FUNC_0 () != VAR_2[1]) {
    return;
  } else {
    if (VAR_2[2] < 0 || VAR_2[2] == FUNC_0 ()) {
      if (FUNC_1 () != VAR_2[0] * 4) { return; }
      int VAR_3;
      for (VAR_3 = 0; VAR_3 < VAR_2[0]; VAR_3++) {
        VAR_2[VAR_3 + 3] += FUNC_0 ();
      }
    }
  }
}
