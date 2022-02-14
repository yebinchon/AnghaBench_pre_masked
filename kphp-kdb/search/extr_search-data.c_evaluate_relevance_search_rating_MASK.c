
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int item_id; } ;
typedef TYPE_1__ item_t ;
struct TYPE_13__ {int weight; int p; } ;
struct TYPE_12__ {int p; int weight; } ;
struct TYPE_11__ {double weight; double (* f ) (TYPE_1__*,TYPE_3__*) ;} ;


 int VAR_0 ;
 TYPE_9__ VAR_1 ;
 TYPE_8__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 double VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 double FUNC_0 (int) ;
 void* FUNC_1 (TYPE_1__*,int) ;
 double FUNC_2 (TYPE_1__*) ;
 int VAR_11 ;
 double VAR_12 ;
 double FUNC_3 (int,int ) ;
 int VAR_13 ;
 double FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 double* VAR_14 ;
 int FUNC_5 (int,char*,double,...) ;

__attribute__((used)) static int FUNC_6 (item_t *VAR_15, int VAR_16) {
  int VAR_17;
  double VAR_18;
  if (!VAR_13) { VAR_18 = 0.5; }
  else {
    VAR_18 = 0.0;
    VAR_17 = 0;
    do {
      VAR_18 += VAR_4[VAR_17].weight * VAR_4[VAR_17].f (VAR_15, &VAR_4[VAR_17]);
    } while (++VAR_17 < VAR_13);
  }

  if (!VAR_1.p) {
    VAR_18 += VAR_1.weight * VAR_16;
  }

  if (!(VAR_2.p & -16)) {
    int VAR_19 = FUNC_1 (VAR_15, VAR_2.p);
    if (VAR_19 < VAR_3) {
      return 0;
    }
    if (VAR_19 < VAR_11) {
      VAR_18 *= FUNC_0 (VAR_2.weight * (VAR_11 - VAR_19));
    }
  }

  if (VAR_18 < 0) {
    FUNC_5 (3, "evaluate_searchx_rating: r = %.lg\n", VAR_18);
    return 0;
  }

  if (VAR_18 > 1) {
    FUNC_5 (3, "evaluate_searchx_rating: r = %.lg\n", VAR_18);
    return 0x7fffffff;
  }

  if (VAR_7) {
    VAR_18 *= (1.0 + VAR_5 * FUNC_2 (VAR_15)) * VAR_12;
  }

  if (VAR_9) {
    unsigned VAR_20 = FUNC_1 (VAR_15, 13);
    FUNC_5 (3, "item_id = %lld, in title = %d, whole = %d\n", VAR_15->item_id, VAR_20 >> 16, VAR_20 & 0xffff);
    int VAR_21 = (VAR_8 & VAR_0) ? (VAR_20 >> 16) : (VAR_20 & 0xffff);
    VAR_21++;
    if (VAR_21 >= VAR_10) { VAR_21 = VAR_10 - 1; }
    if (VAR_14[VAR_21] < -0.5) {
      VAR_14[VAR_21] = 1.0 / FUNC_3 (VAR_21, VAR_6);
    }
    VAR_18 *= VAR_14[VAR_21];
  }

  FUNC_5 (3, "item_id = %lld, r = %.10lf\n", VAR_15->item_id, VAR_18);
  return (int) (VAR_18 * 2147483647.0);
}
