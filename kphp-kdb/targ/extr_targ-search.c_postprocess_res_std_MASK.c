
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

void FUNC_0 (void) {
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  if (VAR_4) { return; }
  switch (VAR_1) {
  case -1:
    VAR_11 = VAR_3 - 1;
    for (VAR_9 = 0; VAR_9 < VAR_11 - VAR_9; VAR_9++) {
      VAR_12 = VAR_2[VAR_11-VAR_9]; VAR_2[VAR_11-VAR_9] = VAR_2[VAR_9]; VAR_2[VAR_9] = VAR_12;
    }
    if (VAR_5 >= VAR_0) {
      VAR_11 = VAR_3 + VAR_0 - 1;
      for (VAR_9 = VAR_3; VAR_9 < VAR_11 - VAR_9; VAR_9++) {
        VAR_12 = VAR_2[VAR_11-VAR_9]; VAR_2[VAR_11-VAR_9] = VAR_2[VAR_9]; VAR_2[VAR_9] = VAR_12;
      }
      VAR_3 = VAR_0;
    }
    break;
  case 2:
    if (!VAR_3) { return; }
    for (VAR_11 = VAR_3 - 1; VAR_11 > 0; VAR_11--) {
      VAR_12 = VAR_2[VAR_11+1];
      VAR_2[2*VAR_11] = VAR_7 + VAR_8 * VAR_2[1];
      VAR_2[2*VAR_11+1] = VAR_6[VAR_2[1]];
      VAR_13 = VAR_6[VAR_12];
      VAR_9 = 1;
      while (1) {
        VAR_10 = 2*VAR_9;
        if (VAR_10 > VAR_11) { break; }
        if (VAR_10 < VAR_11 && VAR_6[VAR_2[VAR_10+1]] > VAR_6[VAR_2[VAR_10]]) { VAR_10++; }
        if (VAR_13 >= VAR_6[VAR_2[VAR_10]]) { break; }
        VAR_2[VAR_9] = VAR_2[VAR_10];
        VAR_9 = VAR_10;
      }
      VAR_2[VAR_9] = VAR_12;
    }
    VAR_2[0] = VAR_7 + VAR_8 * VAR_2[1];
    VAR_2[1] = VAR_6[VAR_2[1]];
    VAR_3 *= 2;
    return;
  case -2:
    if (!VAR_3) { return; }
    for (VAR_11 = VAR_3 - 1; VAR_11 > 0; VAR_11--) {
      VAR_12 = VAR_2[VAR_11+1];
      VAR_2[2*VAR_11] = VAR_7 + VAR_8 * VAR_2[1];
      VAR_2[2*VAR_11+1] = VAR_6[VAR_2[1]];
      VAR_13 = VAR_6[VAR_12];
      VAR_9 = 1;
      while (1) {
        VAR_10 = 2*VAR_9;
        if (VAR_10 > VAR_11) { break; }
        if (VAR_10 < VAR_11 && VAR_6[VAR_2[VAR_10+1]] < VAR_6[VAR_2[VAR_10]]) { VAR_10++; }
        if (VAR_13 <= VAR_6[VAR_2[VAR_10]]) { break; }
        VAR_2[VAR_9] = VAR_2[VAR_10];
        VAR_9 = VAR_10;
      }
      VAR_2[VAR_9] = VAR_12;
    }
    VAR_2[0] = VAR_7 + VAR_8 * VAR_2[1];
    VAR_2[1] = VAR_6[VAR_2[1]];
    VAR_3 *= 2;
    return;
  }
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
    VAR_2[VAR_9] = VAR_7 + VAR_8 * VAR_2[VAR_9];
  }
}
