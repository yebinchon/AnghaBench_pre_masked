
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

int FUNC_0 (void) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
    if (VAR_0[VAR_1]) {
      return 0;
    }
  }
  return 1;
}
