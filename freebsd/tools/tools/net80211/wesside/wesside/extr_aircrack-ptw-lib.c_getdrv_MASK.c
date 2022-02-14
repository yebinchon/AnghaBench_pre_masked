
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int votes; } ;
typedef TYPE_1__ PTW_tableentry ;


 int* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(PTW_tableentry VAR_2[][VAR_1], int VAR_3, double * VAR_4, double * VAR_5) {
        int VAR_6,VAR_7;
 int VAR_8 = 0;
        double VAR_9;
 double VAR_10;
 double VAR_11;
        double VAR_12 = 0.0;
 double VAR_13 = 0;
 double VAR_14 = 0;
        for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
                VAR_8 += VAR_2[0][VAR_6].votes;
        }
        VAR_9 = VAR_8/VAR_1;
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_11 = VAR_0[VAR_6] * VAR_8;
  VAR_10 = ((1.0 - VAR_0[VAR_6])/255.0) * VAR_8;
  VAR_4[VAR_6] = 0;
  VAR_5[VAR_6] = 0;
  VAR_13 = 0;
  VAR_14 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   if (VAR_2[VAR_6][VAR_7].votes > VAR_13) {
    VAR_13 = VAR_2[VAR_6][VAR_7].votes;
    VAR_14 = VAR_7;
   }
  }
                for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   if (VAR_7 == VAR_14) {
    VAR_12 = (1.0-VAR_2[VAR_6][VAR_7].votes/VAR_11);
   } else {
    VAR_12 = (1.0-VAR_2[VAR_6][VAR_7].votes/VAR_10);
   }
   VAR_12 = VAR_12*VAR_12;
   VAR_5[VAR_6] += VAR_12;
   VAR_12 = (1.0-VAR_2[VAR_6][VAR_7].votes/VAR_9);
   VAR_12 = VAR_12*VAR_12;
   VAR_4[VAR_6] += VAR_12;
                }
        }
}
