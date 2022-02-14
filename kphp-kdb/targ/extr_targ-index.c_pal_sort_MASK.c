
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled_since; } ;


 TYPE_1__* FUNC_0 (int) ;

void FUNC_1 (int *VAR_0, int VAR_1) {
  if (VAR_1 <= 0) {
    return;
  }
  int VAR_2 = FUNC_0 (VAR_0[VAR_1 >> 1])->disabled_since, VAR_3 = 0, VAR_4 = VAR_1;
  do {
    while (FUNC_0 (VAR_0[VAR_3])->disabled_since < VAR_2) {
      VAR_3++;
    }
    while (FUNC_0 (VAR_0[VAR_4])->disabled_since > VAR_2) {
      VAR_4--;
    }
    if (VAR_3 <= VAR_4) {
      int VAR_5 = VAR_0[VAR_3];
      VAR_0[VAR_3++] = VAR_0[VAR_4];
      VAR_0[VAR_4--] = VAR_5;
    }
  } while (VAR_3 <= VAR_4);
  FUNC_1 (VAR_0, VAR_4);
  FUNC_1 (VAR_0 + VAR_3, VAR_1 - VAR_3);
}
