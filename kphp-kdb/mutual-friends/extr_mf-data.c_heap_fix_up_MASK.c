
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ y; } ;
typedef TYPE_1__ trp_node ;


 TYPE_1__** VAR_0 ;

void FUNC_0 (int VAR_1) {
  trp_node *VAR_2;
  int VAR_3 = 0;

  while (VAR_1 > 1 && VAR_0[VAR_1]->y > VAR_0[VAR_3 = VAR_1 / 2]->y) {
    VAR_2 = VAR_0[VAR_1], VAR_0[VAR_1] = VAR_0[VAR_3], VAR_0[VAR_3] = VAR_2;
    VAR_1 = VAR_3;
  }
}
