
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ hash_t ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;

int FUNC_0 (hash_t *VAR_2, int VAR_3) {
  int VAR_4, VAR_5, VAR_6, VAR_7;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    hash_t VAR_8 = VAR_0[VAR_4];
    VAR_5 = -1; VAR_6 = VAR_3;
    while (VAR_6 - VAR_5 > 1) {
      VAR_7 = (VAR_5 + VAR_6) >> 1;
      if (VAR_2[VAR_7] > VAR_8) { VAR_6 = VAR_7; } else { VAR_5 = VAR_7; }
    }
    if (VAR_5 < 0 || VAR_2[VAR_5] != VAR_8) { return 0; }
  }
  return 1;
}
