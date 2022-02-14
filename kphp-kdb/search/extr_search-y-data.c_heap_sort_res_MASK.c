
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0 (void) {
  int VAR_5, VAR_6, VAR_7, VAR_8;
  item_t *VAR_9;
  for (VAR_7 = VAR_4 - 1; VAR_7 > 0; VAR_7--) {
    VAR_9 = VAR_2[VAR_7+1];
    VAR_8 = VAR_3[VAR_7+1];
    VAR_2[VAR_7+1] = VAR_2[1];
    VAR_3[VAR_7+1] = VAR_3[1];
    VAR_5 = 1;
    while (1) {
      VAR_6 = 2*VAR_5;
      if (VAR_6 > VAR_7) { break; }
      if (VAR_6 < VAR_7) {
        if (VAR_3[VAR_6+1] > VAR_3[VAR_6]) { VAR_6++; }
      }
      if (VAR_8 >= VAR_3[VAR_6]) { break; }
      VAR_2[VAR_5] = VAR_2[VAR_6];
      VAR_3[VAR_5] = VAR_3[VAR_6];
      VAR_5 = VAR_6;
    }
    VAR_2[VAR_5] = VAR_9;
    VAR_3[VAR_5] = VAR_8;
  }

  if (VAR_1 & VAR_0) {
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
      VAR_2[VAR_5] = VAR_2[VAR_5+1];
      VAR_3[VAR_5] = -(VAR_3[VAR_5+1] + 1);
    }
  } else {
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
      VAR_2[VAR_5] = VAR_2[VAR_5+1];
      VAR_3[VAR_5] = VAR_3[VAR_5+1];
    }
  }
}
