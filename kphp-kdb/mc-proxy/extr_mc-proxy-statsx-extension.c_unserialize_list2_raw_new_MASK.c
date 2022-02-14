
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int *FUNC_0 (int *VAR_0, int *VAR_1, int VAR_2) {
  int VAR_3 = *(VAR_0 ++);
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    if (*VAR_1 == VAR_2) {
      VAR_0 += 2;
    } else {
      VAR_1[2 * (*VAR_1) + 1] = *(VAR_0 ++);
      VAR_1[2 * (*VAR_1) + 2] = *(VAR_0 ++);
      (*VAR_1) ++;
    }
  }
  return VAR_0;
}
