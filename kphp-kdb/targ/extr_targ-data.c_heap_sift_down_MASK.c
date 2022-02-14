
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {float expected_gain; size_t domain; } ;
struct TYPE_3__ {int heapref; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline int FUNC_0 (int VAR_3, float VAR_4) {
  int VAR_5;
  while (1) {
    VAR_5 = VAR_3 * 2;
    if (VAR_5 > VAR_1) {
      break;
    }
    if (VAR_5 < VAR_1 && VAR_0[VAR_5 + 1].expected_gain < VAR_0[VAR_5].expected_gain) {
      VAR_5++;
    }
    if (VAR_0[VAR_5].expected_gain >= VAR_4) {
      break;
    }
    if (VAR_0[VAR_5].domain >= 0) {
      VAR_2[VAR_0[VAR_5].domain].heapref = VAR_3;
    }
    VAR_0[VAR_3] = VAR_0[VAR_5];
    VAR_3 = VAR_5;
  }
  return VAR_3;
}
