
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double weight; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__* VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int,scalar_t__) ;
 double VAR_10 ;
 int FUNC_1 (int,char*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2 (void) {
  int VAR_11, VAR_12 = 0;
  VAR_8 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
    if (!VAR_5[VAR_11]) {
      break;
    }
  }
  const int VAR_13 = VAR_11;
  int VAR_14 = 0;
  if (VAR_11 < VAR_9) {

    while (VAR_9 > 0 && VAR_8 < VAR_1) {
      if (VAR_5[VAR_9 - 1]) {
        VAR_9--;
        if (FUNC_0 (VAR_0+VAR_8, VAR_6[VAR_9], 1, VAR_3[VAR_9])) {
          VAR_8++;
          VAR_14 += VAR_3[VAR_9];
        }
        VAR_12++;
      } else {
        break;
      }
    }
  }
  VAR_10 = 1.0 / (1.0 + VAR_7 * VAR_14);
  FUNC_1 (3, "Q_words = %d, optinal_tags = %d\n", VAR_9, VAR_8);
  int VAR_15 = VAR_9 - VAR_13;
  if (VAR_15 > VAR_2) {
    VAR_15 = VAR_2;
  }
  if (VAR_15 > 0) {
    VAR_4.weight /= (double) VAR_15;
  }
}
