
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int item_t ;
struct TYPE_5__ {int minr; int maxr; int idx; } ;
struct TYPE_4__ {scalar_t__ h; scalar_t__ filled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int ** VAR_10 ;
 int* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 long long FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*,long long const) ;
 TYPE_1__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int,char*,int,...) ;

__attribute__((used)) static int FUNC_9 (item_t *VAR_18, int VAR_19) {
  FUNC_8 (3, "store_res!!, n_ranges = %d\n", VAR_16);
  int VAR_20, VAR_21 = 0, VAR_22;
  for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++) {
    int VAR_23 = FUNC_4 (VAR_18, VAR_8[VAR_20].idx);
    FUNC_8 (3, "ranges: r0 = %d, Q_range[i].minr = %d, Q_range[i].maxr = %d\n", VAR_23, VAR_8[VAR_20].minr, VAR_8[VAR_20].maxr);
    if (VAR_23 < VAR_8[VAR_20].minr || VAR_23 > VAR_8[VAR_20].maxr) {
      return 1;
    }
  }

  VAR_13++;
  if (VAR_6 <= 0) {
    if (!VAR_5) { return 1; }
    const long long VAR_24 = FUNC_3 (VAR_10[VAR_20]);
    if (VAR_24 != 0) {
      if (VAR_12 < VAR_4) {
        VAR_10[VAR_12++] = VAR_18;
      } else {
        if (VAR_15.h == 0) {

          FUNC_5 (VAR_4);
          FUNC_0 ();
        }
        if (FUNC_6 (&VAR_15, VAR_24)) {
          if (VAR_15.filled + VAR_14 > VAR_4) {

            return 0;
          }
        }
      }
    } else {
      VAR_14++;
    }
    return (VAR_15.filled + VAR_14 > VAR_4) ? 0 : 1;
  }

  if (VAR_5) {
    FUNC_7 (VAR_18, VAR_19);
    return 1;
  }

  if (VAR_9 == VAR_3 && !(VAR_7 & (VAR_0 | VAR_1))) {
    if ((VAR_7 & VAR_2) && VAR_12 == VAR_6) {
      VAR_12 = 0;
    }
    if (VAR_12 < VAR_6) {
      VAR_10[VAR_12++] = VAR_18;
    }
    return 1;
  }

  VAR_22 = FUNC_2 (VAR_18, VAR_19);

  if (VAR_17 == 2) {
    VAR_22 = -(VAR_22 + 1);
  }


  FUNC_1 (VAR_17 != 0);

  if (VAR_12 == VAR_6) {
    if (VAR_11[1] <= VAR_22) {
      return 1;
    }
    VAR_20 = 1;
    while (1) {
      VAR_21 = VAR_20*2;
      if (VAR_21 > VAR_12) { break; }
      if (VAR_21 < VAR_12) {
        if (VAR_11[VAR_21+1] > VAR_11[VAR_21]) {
          VAR_21++;
        }
      }
      if (VAR_11[VAR_21] <= VAR_22) { break; }
      VAR_10[VAR_20] = VAR_10[VAR_21];
      VAR_11[VAR_20] = VAR_11[VAR_21];
      VAR_20 = VAR_21;
    }
    VAR_10[VAR_20] = VAR_18;
    VAR_11[VAR_20] = VAR_22;
  } else {
    VAR_20 = ++VAR_12;
    while (VAR_20 > 1) {
      VAR_21 = (VAR_20 >> 1);
      if (VAR_11[VAR_21] >= VAR_22) { break; }
      VAR_10[VAR_20] = VAR_10[VAR_21];
      VAR_11[VAR_20] = VAR_11[VAR_21];
      VAR_20 = VAR_21;
    }
    VAR_10[VAR_20] = VAR_18;
    VAR_11[VAR_20] = VAR_22;
  }
  return 1;
}
