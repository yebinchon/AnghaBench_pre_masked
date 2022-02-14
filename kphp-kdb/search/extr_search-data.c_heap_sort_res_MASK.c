
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int item_t ;


 int ** VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0 (void) {
  int VAR_4, VAR_5, VAR_6, VAR_7;
  item_t *VAR_8;
  for (VAR_6 = VAR_2 - 1; VAR_6 > 0; VAR_6--) {
    VAR_8 = VAR_0[VAR_6+1];
    VAR_7 = VAR_1[VAR_6+1];
    VAR_0[VAR_6+1] = VAR_0[1];
    VAR_1[VAR_6+1] = VAR_1[1];
    VAR_4 = 1;
    while (1) {
      VAR_5 = 2*VAR_4;
      if (VAR_5 > VAR_6) { break; }
      if (VAR_5 < VAR_6) {
        if (VAR_1[VAR_5+1] > VAR_1[VAR_5]) { VAR_5++; }
      }
      if (VAR_7 >= VAR_1[VAR_5]) { break; }
      VAR_0[VAR_4] = VAR_0[VAR_5];
      VAR_1[VAR_4] = VAR_1[VAR_5];
      VAR_4 = VAR_5;
    }
    VAR_0[VAR_4] = VAR_8;
    VAR_1[VAR_4] = VAR_7;
  }

  if (VAR_3 == 2) {
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
      VAR_0[VAR_4] = VAR_0[VAR_4+1];
      VAR_1[VAR_4] = -(VAR_1[VAR_4+1] + 1);
    }
  } else {
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
      VAR_0[VAR_4] = VAR_0[VAR_4+1];
      VAR_1[VAR_4] = VAR_1[VAR_4+1];
    }
  }
}
