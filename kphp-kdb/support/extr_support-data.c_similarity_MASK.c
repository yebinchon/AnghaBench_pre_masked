
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (int) ;

double FUNC_1 (int *VAR_0, int *VAR_1, double *VAR_2, double *VAR_3) {
  *VAR_2 = 0, *VAR_3 = 0;

  int VAR_4 = 0, VAR_5 = 0;
  while (VAR_0[VAR_4] || VAR_1[VAR_5]) {
    if (VAR_0[VAR_4] == VAR_1[VAR_5]) {
      *VAR_2 += 2.0 * FUNC_0 (VAR_0[VAR_4]);
      VAR_4++;
      VAR_5++;
    } else {
      if (VAR_0[VAR_4] && (VAR_1[VAR_5] == 0 || VAR_0[VAR_4] < VAR_1[VAR_5])) {
        *VAR_3 += FUNC_0 (VAR_0[VAR_4]);
        VAR_4++;
      } else {
        *VAR_3 += FUNC_0 (VAR_1[VAR_5]);
        VAR_5++;
      }
    }
  }

  if (*VAR_2 + *VAR_3 < 1e-9) {
    return -1.0;
  }
  return (*VAR_2 - *VAR_3) * 1.0 / (*VAR_2 + *VAR_3);
}
