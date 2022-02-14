
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct item {int item_id; } ;
struct TYPE_2__ {int minr; int maxr; int idx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct item** VAR_3 ;
 double* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 double FUNC_0 (struct item*,double) ;
 int FUNC_1 (struct item*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct item*,double) ;
 int FUNC_3 (int,char*,int ,double) ;

int FUNC_4 (struct item *VAR_8, double VAR_9) {
  FUNC_3 (3, "store_res (item_id = %lld, w = %.10lf\n", VAR_8->item_id, VAR_9);
  if (VAR_9 < 1e-9) { return 1; }
  int VAR_10, VAR_11 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
    int VAR_12 = FUNC_1 (VAR_8, VAR_2[VAR_10].idx);
    if (VAR_12 < VAR_2[VAR_10].minr || VAR_12 > VAR_2[VAR_10].maxr) {
      return 1;
    }
  }

  VAR_6++;
  if (VAR_1 <= 0) {
    return 1;
  }

  double VAR_13 = FUNC_0 (VAR_8, VAR_9);

  if (VAR_0) {
    FUNC_2 (VAR_8, VAR_13);
    return 1;
  }

  if (VAR_5 == VAR_1) {
    if (VAR_4[1] <= VAR_13) {
      return 1;
    }
    VAR_10 = 1;
    while (1) {
      VAR_11 = VAR_10*2;
      if (VAR_11 > VAR_5) { break; }
      if (VAR_11 < VAR_5) {
        if (VAR_4[VAR_11+1] > VAR_4[VAR_11]) {
          VAR_11++;
        }
      }
      if (VAR_4[VAR_11] <= VAR_13) { break; }
      VAR_3[VAR_10] = VAR_3[VAR_11];
      VAR_4[VAR_10] = VAR_4[VAR_11];
      VAR_10 = VAR_11;
    }
    VAR_3[VAR_10] = VAR_8;
    VAR_4[VAR_10] = VAR_13;
  } else {
    VAR_10 = ++VAR_5;
    while (VAR_10 > 1) {
      VAR_11 = (VAR_10 >> 1);
      if (VAR_4[VAR_11] >= VAR_13) { break; }
      VAR_3[VAR_10] = VAR_3[VAR_11];
      VAR_4[VAR_10] = VAR_4[VAR_11];
      VAR_10 = VAR_11;
    }
    VAR_3[VAR_10] = VAR_8;
    VAR_4[VAR_10] = VAR_13;
  }
  return 1;
}
