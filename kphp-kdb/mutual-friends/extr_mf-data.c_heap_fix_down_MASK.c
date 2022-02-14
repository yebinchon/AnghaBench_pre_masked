
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ y; } ;
typedef TYPE_1__ trp_node ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;

void FUNC_0 (void) {
  int VAR_2, VAR_3, VAR_4;
  trp_node *VAR_5;
  VAR_3 = 1;
  while (1) {
    VAR_2 = VAR_3;
    VAR_4 = VAR_2 * 2;
    if (VAR_4 <= VAR_1 && VAR_0[VAR_4]->y > VAR_0[VAR_3]->y) {
      VAR_3 = VAR_4;
    }
    VAR_4++;
    if (VAR_4 <= VAR_1 && VAR_0[VAR_4]->y > VAR_0[VAR_3]->y) {
      VAR_3 = VAR_4;
    }
    if (VAR_3 != VAR_2) {
      VAR_5 = VAR_0[VAR_3], VAR_0[VAR_3] = VAR_0[VAR_2], VAR_0[VAR_2] = VAR_5;
    } else {
      break;
    }
  }
}
