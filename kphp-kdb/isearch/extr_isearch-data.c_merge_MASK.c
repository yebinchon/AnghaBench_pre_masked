
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t* data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 float FUNC_1 (size_t) ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t* VAR_4 ;
 float* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_2 (size_t,size_t) ;

void FUNC_3 (data VAR_8) {
  int VAR_9, VAR_10;

  for (VAR_9 = 0; VAR_9 < VAR_0 && VAR_6[VAR_8[VAR_9]] > VAR_1; VAR_9++) {
    if (!FUNC_0 (VAR_3 + VAR_2[VAR_8[VAR_9]])) {

      float VAR_11 = FUNC_1 (VAR_8[VAR_9]);

      for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
        if (VAR_7[VAR_4[VAR_10]] == VAR_7[VAR_8[VAR_9]]) {
          if (VAR_11 > VAR_5[VAR_10]) {
            VAR_5[VAR_10] = VAR_11;

            while (VAR_10 > 0 && VAR_5[VAR_10 - 1] < VAR_5[VAR_10]) {
              FUNC_2 (VAR_5[VAR_10 - 1], VAR_5[VAR_10]);
              FUNC_2 (VAR_4[VAR_10 - 1], VAR_4[VAR_10]);
            }
          }

          break;
        }

      if (VAR_10 == VAR_0) {
        if (VAR_5[VAR_0 - 1] < VAR_11) {
          int VAR_12;
          for (VAR_12 = VAR_0 - 2; VAR_12 >= 0 && VAR_5[VAR_12] < VAR_11; VAR_12--) {
            VAR_4[VAR_12 + 1] = VAR_4[VAR_12];
            VAR_5[VAR_12 + 1] = VAR_5[VAR_12];
          }
          VAR_4[VAR_12 + 1] = VAR_8[VAR_9];
          VAR_5[VAR_12 + 1] = VAR_11;
        }
      }
    }
  }
}
