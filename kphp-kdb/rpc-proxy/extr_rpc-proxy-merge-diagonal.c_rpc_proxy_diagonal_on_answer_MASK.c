
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather {int* extra; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2 (struct gather *VAR_1, int VAR_2) {
  int *VAR_3 = VAR_1->extra;
  if (FUNC_0 () != VAR_0) {
    VAR_3[2] ++;
    return;
  }
  if (FUNC_1 () != 12) {
    VAR_3[2] ++;
    return;
  }
  VAR_3[0] += FUNC_0 ();
  VAR_3[1] += FUNC_0 ();
  VAR_3[2] += FUNC_0 ();
}
