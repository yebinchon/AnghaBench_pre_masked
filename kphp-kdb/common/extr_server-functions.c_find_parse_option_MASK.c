
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; scalar_t__ name; } ;


 TYPE_1__* VAR_0 ;

int FUNC_0 (int VAR_1) {
  int VAR_2 = 0;
  while (VAR_0[VAR_2].name || VAR_0[VAR_2].val) {
    if (VAR_0[VAR_2].val == VAR_1) { return VAR_2; }
    VAR_2 ++;
  }
  return -1;
}
