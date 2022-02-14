
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0 (int VAR_0, unsigned char **VAR_1, int *VAR_2, int VAR_3) {
  int VAR_4 = 0, VAR_5 = 1;

  if (VAR_3 == 1) {
    return;
  }

  while (VAR_5 < VAR_3) {
    VAR_5 += VAR_5;
    VAR_4++;
  }


  while (VAR_4 > 8 - *VAR_2) {
    VAR_4 -= 8 - *VAR_2;
    **VAR_1 += (unsigned char)((VAR_0 >> VAR_4) << *VAR_2);
    *VAR_2 = 0;
    *++(*VAR_1) = 0;
  }

  **VAR_1 += (unsigned char)((VAR_0 & ((1 << VAR_4) - 1)) << (*VAR_2));
  *VAR_2 += VAR_4;
}
