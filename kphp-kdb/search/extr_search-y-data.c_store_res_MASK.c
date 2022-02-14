
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int item_t ;
struct TYPE_2__ {int minr; int maxr; int idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int ** VAR_6 ;
 int* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_10 ;
 int FUNC_2 (int,char*,int,...) ;

__attribute__((used)) static int FUNC_3 (item_t *VAR_11) {
  FUNC_2 (3, "store_res!!, n_ranges = %d\n", VAR_10);
  int VAR_12, VAR_13 = 0, VAR_14;
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
    int VAR_15 = FUNC_1 (VAR_11, VAR_4[VAR_12].idx);
    FUNC_2 (3, "ranges: r0 = %d, Q_range[i].minr = %d, Q_range[i].maxr = %d\n", VAR_15, VAR_4[VAR_12].minr, VAR_4[VAR_12].maxr);
    if (VAR_15 < VAR_4[VAR_12].minr || VAR_15 > VAR_4[VAR_12].maxr) {
      return 1;
    }
  }

  VAR_9++;
  if (VAR_2 <= 0) {
    return 1;
  }

  if (VAR_5 == VAR_1) {
    if ((VAR_3 & VAR_0) && VAR_8 == VAR_2) {
      VAR_8 = 0;
    }
    if (VAR_8 < VAR_2) {
      VAR_6[VAR_8++] = VAR_11;
    }
    return 1;
  }

  VAR_14 = FUNC_0 (VAR_11);

  if (VAR_3 & VAR_0) {
    VAR_14 = -(VAR_14 + 1);
  }

  if (VAR_8 == VAR_2) {
    if (VAR_7[1] <= VAR_14) {
      return 1;
    }
    VAR_12 = 1;
    while (1) {
      VAR_13 = VAR_12*2;
      if (VAR_13 > VAR_8) { break; }
      if (VAR_13 < VAR_8) {
        if (VAR_7[VAR_13+1] > VAR_7[VAR_13]) {
          VAR_13++;
        }
      }
      if (VAR_7[VAR_13] <= VAR_14) { break; }
      VAR_6[VAR_12] = VAR_6[VAR_13];
      VAR_7[VAR_12] = VAR_7[VAR_13];
      VAR_12 = VAR_13;
    }
    VAR_6[VAR_12] = VAR_11;
    VAR_7[VAR_12] = VAR_14;
  } else {
    VAR_12 = ++VAR_8;
    while (VAR_12 > 1) {
      VAR_13 = (VAR_12 >> 1);
      if (VAR_7[VAR_13] >= VAR_14) { break; }
      VAR_6[VAR_12] = VAR_6[VAR_13];
      VAR_7[VAR_12] = VAR_7[VAR_13];
      VAR_12 = VAR_13;
    }
    VAR_6[VAR_12] = VAR_11;
    VAR_7[VAR_12] = VAR_14;
  }
  return 1;
}
