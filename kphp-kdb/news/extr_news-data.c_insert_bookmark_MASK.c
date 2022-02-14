
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int next; int y; long long value; } ;
struct TYPE_4__ {int offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,TYPE_1__*,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ,char*,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_5 (int VAR_8, long long VAR_9, int VAR_10, int VAR_11) {
  if (VAR_3 > VAR_0) {
    int VAR_12 = FUNC_4 ();
    FUNC_0 (VAR_11 && (VAR_12 & 0xc0000000) == 0xc0000000);
    VAR_2[VAR_12].next = VAR_8;
    VAR_2[VAR_12].y = (VAR_12 << 1) + (VAR_10 & 1);
    VAR_2[VAR_12].value = VAR_9;
    return 1;
  }
  int VAR_13 = FUNC_1 (VAR_8, VAR_4, VAR_5);
  if (VAR_13 < 0) {
    if (!VAR_11) {
      return 0;
    }
    VAR_13 = FUNC_3 (VAR_8);
    FUNC_0 (VAR_13 == FUNC_1 (VAR_8, VAR_4, VAR_5));
    if (VAR_7 >= 4) {
      FUNC_2 (VAR_6, "Inserted user %d (total %d new users)\n", VAR_8, VAR_5);
    }
  }
  int VAR_14 = VAR_4[VAR_13].offset;
  while (1) {
    int VAR_15 = VAR_2[VAR_14].next;
    if (VAR_15 == VAR_1 || VAR_2[VAR_15].value > VAR_9) {
      if (!VAR_11) {
        return 0;
      }
      int VAR_16 = FUNC_4 ();
      VAR_2[VAR_16].next = VAR_15;
      VAR_2[VAR_16].value = VAR_9;
      VAR_2[VAR_16].y = VAR_10;
      VAR_2[VAR_14].next = VAR_16;
      break;
    }
    if (VAR_2[VAR_15].value == VAR_9) {
      if (!VAR_11) {
        return VAR_2[VAR_15].y == VAR_10;
      }
      if (VAR_10 != VAR_2[VAR_15].y) {
        VAR_2[VAR_15].y = VAR_10;
      }
      break;
    }
    VAR_14 = VAR_15;
  }
  return 1;
}
