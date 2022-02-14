
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * golomb ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

int FUNC_1 (golomb VAR_1, int VAR_2, int VAR_3) {
  if (VAR_1 == ((void*)0)) {
    return 0;
  }

  int VAR_4 = -1, VAR_5 = 1;
  while (VAR_5 < VAR_2) {
    VAR_5 += VAR_5;
    VAR_4++;
  }

  int VAR_6 = ((int) *VAR_1++ << 24) + (1 << 23);

  int VAR_7 = 0;
  while (VAR_4 >= 0) {
    if (VAR_0) { VAR_7 += (1 << VAR_4); }
    FUNC_0 ();
    VAR_4--;
  }

  return VAR_7 + 1;
}
