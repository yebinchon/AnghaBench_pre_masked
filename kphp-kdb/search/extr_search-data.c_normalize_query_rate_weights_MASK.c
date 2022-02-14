
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {double weight; int p; } ;
struct TYPE_3__ {double weight; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

int FUNC_0 (void) {
  int VAR_3;
  double VAR_4 = 0.0;

  if (!VAR_0.p) {
    VAR_1[VAR_2++].weight = VAR_0.weight;
  }

  if (!VAR_2) {
    return 0;
  }

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    VAR_4 += VAR_1[VAR_3].weight;
  }

  if (VAR_4 < 1e-9) {
    VAR_2 = 0;
    return 0;
  }

  VAR_4 = 1.0 / VAR_4;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    VAR_1[VAR_3].weight *= VAR_4;
  }

  if (!VAR_0.p) {
    VAR_2--;
    VAR_0.weight = VAR_1[VAR_2].weight;
  }

  return 0;
}
