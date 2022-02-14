
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

void FUNC_0() {
  static int VAR_1 = 0;
  if (VAR_1) {
    return;
  }
  VAR_1 = 1;

  int VAR_2;
  VAR_0[0] = 0;
  for (VAR_2 = 1; VAR_2 < (1 << 16); VAR_2++) {
    VAR_0[VAR_2] = 1 + VAR_0[VAR_2 & (VAR_2 - 1)];
  }
}
