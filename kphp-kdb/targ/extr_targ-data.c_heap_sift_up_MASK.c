
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

__attribute__((used)) static inline int FUNC_0 (float VAR_3) {
  int VAR_4 = ++VAR_1, VAR_5;
  while (VAR_4 > 1) {
    VAR_5 = (VAR_4 >> 1);
    if (VAR_0[VAR_5].expected_gain <= VAR_3) {
      break;
    }
    if (VAR_0[VAR_5].domain >= 0) {
      VAR_2[VAR_0[VAR_5].domain].heapref = VAR_4;
    }
    VAR_0[VAR_4] = VAR_0[VAR_5];
    VAR_4 = VAR_5;
  }
  return VAR_4;
}
