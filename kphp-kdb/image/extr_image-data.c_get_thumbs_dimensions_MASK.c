
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0 (int VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                  int *VAR_4, int *VAR_5) {
 if (VAR_0 == VAR_2 && VAR_1 == VAR_3) {
  *VAR_4 = VAR_2;
  *VAR_5 = VAR_3;
  return 1;
 }

  if (VAR_2 <= 0 || VAR_3 <= 0) {
    return 0;
  }

  double VAR_6 = (double)VAR_2 / (double)VAR_0;
  double VAR_7 = (double)VAR_3 / (double)VAR_1;

  if (VAR_6 < VAR_7) {
    *VAR_4 = VAR_2;
    *VAR_5 = (0.5 - 1e-9) + VAR_6 * (double)VAR_1;
  } else {
    *VAR_5 = VAR_3;
    *VAR_4 = (0.5 - 1e-9) + VAR_7 * (double)VAR_0;
  }

  if (*VAR_4 < 1) {
    *VAR_4 = 1;
  }

  if (*VAR_5 < 1) {
    *VAR_5 = 1;
  }
  return 1;
}
