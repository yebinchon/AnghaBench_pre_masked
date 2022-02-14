
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ hash_t ;



int FUNC_0 (hash_t *VAR_0, int VAR_1, hash_t *VAR_2, int VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    int VAR_5 = -1, VAR_6 = VAR_3;
    hash_t VAR_7 = VAR_0[VAR_4];
    while (VAR_6 - VAR_5 > 1) {
      int VAR_8 = (VAR_5 + VAR_6) >> 1;
      if (VAR_7 < VAR_2[VAR_8]) {
        VAR_6 = VAR_8;
      } else {
        VAR_5 = VAR_8;
      }
    }
    if (VAR_5 < 0 || VAR_2[VAR_5] != VAR_7) {
      return 0;
    }
  }

  return 1;
}
