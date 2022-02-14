
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double weight; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0 (void) {
  int VAR_2;
  double VAR_3 = 0.0;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    VAR_3 += VAR_0[VAR_2].weight;
  }
  if (VAR_3 < 1e-9) { return -1; }
  VAR_3 = 1.0 / VAR_3;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    VAR_0[VAR_2].weight *= VAR_3;
  }
  return 0;
}
