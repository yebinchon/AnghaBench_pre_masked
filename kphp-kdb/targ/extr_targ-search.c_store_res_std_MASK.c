
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (int,int) ;

void FUNC_1 (int VAR_7) {
  int VAR_8, VAR_9, VAR_10;
  VAR_5++;
  if (VAR_4 > 0) {
    VAR_10 = FUNC_0 (VAR_7, VAR_4);
    if (VAR_10 >= VAR_0) {
      VAR_10 = VAR_0 - 1;
    } else if (VAR_10 < 0) {
      VAR_10 = 0;
    }
    VAR_2[VAR_10]++;
    return;
  } else if (VAR_4 == (-1 << 31)) {
    return;
  }
  if (VAR_0 <= 0) { return; }
  switch (VAR_1) {
  case 0:
  case 1:
  default:
    if (VAR_3 < VAR_0) {
      VAR_2[VAR_3++] = VAR_7;
    }
    break;
  case -1:
    if (VAR_3 == VAR_0) { VAR_3 = 0; }
    VAR_2[VAR_3++] = VAR_7;
    break;
  case -2:
    VAR_10 = VAR_6[VAR_7];
    if (VAR_3 == VAR_0) {
      if (VAR_6[VAR_2[1]] >= VAR_10) { return; }
      VAR_8 = 1;
      while (1) {
        VAR_9 = VAR_8*2;
        if (VAR_9 > VAR_3) { break; }
        if (VAR_9 < VAR_3 && VAR_6[VAR_2[VAR_9+1]] < VAR_6[VAR_2[VAR_9]]) { VAR_9++; }
        if (VAR_6[VAR_2[VAR_9]] >= VAR_10) { break; }
        VAR_2[VAR_8] = VAR_2[VAR_9];
        VAR_8 = VAR_9;
      }
      VAR_2[VAR_8] = VAR_7;
    } else {
      VAR_8 = ++VAR_3;
      while (VAR_8 > 1) {
        VAR_9 = (VAR_8 >> 1);
        if (VAR_6[VAR_2[VAR_9]] <= VAR_10) { break; }
        VAR_2[VAR_8] = VAR_2[VAR_9];
        VAR_8 = VAR_9;
      }
      VAR_2[VAR_8] = VAR_7;
    }
    break;
  case 2:
    VAR_10 = VAR_6[VAR_7];
    if (VAR_3 == VAR_0) {
      if (VAR_6[VAR_2[1]] <= VAR_10) { return; }
      VAR_8 = 1;
      while (1) {
        VAR_9 = VAR_8*2;
        if (VAR_9 > VAR_3) { break; }
        if (VAR_9 < VAR_3 && VAR_6[VAR_2[VAR_9+1]] > VAR_6[VAR_2[VAR_9]]) { VAR_9++; }
        if (VAR_6[VAR_2[VAR_9]] <= VAR_10) { break; }
        VAR_2[VAR_8] = VAR_2[VAR_9];
        VAR_8 = VAR_9;
      }
      VAR_2[VAR_8] = VAR_7;
    } else {
      VAR_8 = ++VAR_3;
      while (VAR_8 > 1) {
        VAR_9 = (VAR_8 >> 1);
        if (VAR_6[VAR_2[VAR_9]] >= VAR_10) { break; }
        VAR_2[VAR_8] = VAR_2[VAR_9];
        VAR_8 = VAR_9;
      }
      VAR_2[VAR_8] = VAR_7;
    }
    break;
  }
}
