
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__* VAR_1 ;

void FUNC_0 (void) {
  long VAR_2;
  for (VAR_2 = VAR_0 - 1; VAR_2 > 0; VAR_2--) {
    VAR_1[VAR_2] = VAR_1[2 * VAR_2] + VAR_1[2 * VAR_2 + 1];
  }
}
