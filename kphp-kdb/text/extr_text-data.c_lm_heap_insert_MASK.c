
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

void FUNC_0 (int VAR_4, int VAR_5, int VAR_6) {
  int VAR_7, VAR_8;
  if (VAR_4 <= VAR_1[1]) {
    return;
  }
  VAR_7 = 1;
  while (1) {
    VAR_8 = VAR_7*2;
    if (VAR_8 > VAR_0) {
      break;
    }
    if (VAR_1[VAR_8] > VAR_1[VAR_8+1]) {
      VAR_8++;
    }
    if (VAR_4 <= VAR_1[VAR_8]) {
      break;
    }
    VAR_1[VAR_7] = VAR_1[VAR_8];
    VAR_2[VAR_7] = VAR_2[VAR_8];
    VAR_3[VAR_7] = VAR_3[VAR_8];
    VAR_7 = VAR_8;
  }
  VAR_1[VAR_7] = VAR_4;
  VAR_2[VAR_7] = VAR_5;
  VAR_3[VAR_7] = VAR_6;
}
