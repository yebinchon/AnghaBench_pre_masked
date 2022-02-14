
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int *FUNC_0 (int *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5) {
  int VAR_6, *VAR_7 = VAR_2;

  while (VAR_0 < VAR_1) {
    VAR_6 = *VAR_0++;
    if (VAR_6 > 0) {
      while (VAR_2 < VAR_3 && (unsigned) *VAR_2 > (unsigned) VAR_6) VAR_2++;
      if (VAR_2 == VAR_3) continue;
      if (*VAR_2 == VAR_6) {
 if (VAR_4 < VAR_5) *VAR_4++ = VAR_6;
      }
    } else {
      while (VAR_7 < VAR_3 && (unsigned) *VAR_7 < (unsigned) VAR_6) VAR_7++;
      if (VAR_7 == VAR_3) continue;
      if (*VAR_7 == VAR_6) {
 if (VAR_4 < VAR_5) *VAR_4++ = VAR_6;
      }
    }
  }

  return VAR_4;
}
