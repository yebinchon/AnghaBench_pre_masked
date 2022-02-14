
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

int FUNC_1 (int *VAR_0, int VAR_1, int *VAR_2, int VAR_3, int VAR_4) {
  int VAR_5;
  int VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) if (VAR_0[2 * VAR_5 + 1] >= VAR_4) {
    FUNC_0 (VAR_6 < VAR_3);
    VAR_2[2 * VAR_6 + 0] = VAR_0[2 * VAR_5 + 0];
    VAR_2[2 * VAR_6 + 1] = VAR_0[2 * VAR_5 + 1];
    VAR_6 ++;
  }
  return VAR_6;
}
