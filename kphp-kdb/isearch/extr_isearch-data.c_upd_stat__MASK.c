
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; int prev_used; int next_bucket; int next_used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

void FUNC_4 (int VAR_5, int VAR_6) {
  if (VAR_6 != 1 && VAR_6 != -1) {
    FUNC_2 (0);
    return;
  }
  if (VAR_5 < 0) {
    VAR_5 = -VAR_5;
    VAR_6 = -VAR_6;
  }

  FUNC_2 (1 <= VAR_5 && VAR_5 <= VAR_3);

  VAR_5 = FUNC_1 (VAR_5);

  VAR_5 += VAR_2;
  int VAR_7 = (VAR_4[VAR_5].val + VAR_0 - 1) / VAR_0;
  FUNC_2 (VAR_7 < VAR_2);

  VAR_4[VAR_5].val += VAR_6;
  if (VAR_4[VAR_5].val > VAR_1) {
    VAR_4[VAR_5].val = VAR_1;
  }

  if (VAR_4[VAR_5].val < 0) {
    VAR_4[VAR_5].val = 0;
  }

  int VAR_8 = (VAR_4[VAR_5].val + VAR_0 - 1) / VAR_0;
  FUNC_2 (VAR_8 < VAR_2);

  if (VAR_8 != VAR_7) {
    int VAR_9 = VAR_7;
    if (VAR_7) {
      FUNC_3 (VAR_5);

      if (VAR_7 > VAR_8) {
        VAR_9 = VAR_4[VAR_7].prev_used;
      }

      if (VAR_4[VAR_7].next_bucket == VAR_7) {
        VAR_9 = VAR_4[VAR_7].prev_used;
        int VAR_10 = VAR_4[VAR_9].next_used = VAR_4[VAR_7].next_used;
        VAR_4[VAR_10].prev_used = VAR_9;
      }
    }

    if (VAR_8) {
      if (VAR_4[VAR_8].next_bucket == VAR_8) {
        int VAR_11 = VAR_4[VAR_8].next_used = VAR_4[VAR_9].next_used;
        VAR_4[VAR_11].prev_used = VAR_8;

        VAR_4[VAR_9].next_used = VAR_8;
        VAR_4[VAR_8].prev_used = VAR_9;
      }

      FUNC_0 (VAR_5, VAR_8);
    }
  }
}
