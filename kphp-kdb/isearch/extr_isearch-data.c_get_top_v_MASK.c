
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prev_used; int next_bucket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,int,int,int) ;
 scalar_t__* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int *FUNC_3 (int VAR_9) {
  int *VAR_10 = (int *)VAR_2;
  VAR_10[0] = 0;
  int VAR_11 = VAR_5[0].prev_used;

  int VAR_12 = 0;
  if (VAR_9 < 0) {
    VAR_9 = -VAR_9;
    VAR_12 = 1;
  }
  if (VAR_9 > 10000) {
    VAR_9 = 10000;
  }
  if (VAR_9 < 0) {
    VAR_9 = 0;
  }

  FUNC_0 ((VAR_9 + 1) * sizeof (int) < VAR_0);
  while (VAR_11 && VAR_9) {
    int VAR_13 = VAR_11, VAR_14 = VAR_11;

    FUNC_0 (0 <= VAR_14 && VAR_14 < VAR_7);
    FUNC_0 (VAR_5[VAR_14].next_bucket != VAR_13);

    while (VAR_5[VAR_14].next_bucket != VAR_13 && VAR_9) {
      if (!(0 <= VAR_14 && VAR_14 < VAR_1 + VAR_7)) {
        FUNC_2 (VAR_8, "%d < %d < %d\n", 0, VAR_14, VAR_1 + VAR_7);
        FUNC_0 (0 <= VAR_14 && VAR_14 < VAR_1 + VAR_7);
      }

      VAR_14 = VAR_5[VAR_14].next_bucket;

      if (!(VAR_1 <= VAR_14 && VAR_14 < VAR_7 + VAR_1)) {
        FUNC_2 (VAR_8, "%d < %d < %d\n", VAR_1, VAR_14, VAR_7 + VAR_1);
        FUNC_0 (VAR_1 <= VAR_14 && VAR_14 < VAR_7 + VAR_1);
      }

      VAR_10[++VAR_10[0]] = VAR_6[VAR_14 - VAR_1];
      if (VAR_12 || !FUNC_1 (VAR_4 + VAR_3[VAR_10[VAR_10[0]]])) {
        VAR_9--;
      } else {
        VAR_10[0]--;
      }
    }
    VAR_11 = VAR_5[VAR_11].prev_used;
  }
  return VAR_10;
}
