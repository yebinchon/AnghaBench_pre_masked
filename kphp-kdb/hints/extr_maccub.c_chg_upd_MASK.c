
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* trp_node_ptr ;
struct TYPE_5__ {int stack_top; int* stack_state; TYPE_1__** stack_ptr; } ;
typedef TYPE_2__ chg_iterator ;
struct TYPE_4__ {struct TYPE_4__* r; struct TYPE_4__* l; } ;


 int FUNC_0 (int ) ;

void FUNC_1 (chg_iterator *VAR_0) {
  int VAR_1 = VAR_0->stack_top;
  trp_node_ptr *VAR_2 = VAR_0->stack_ptr;
  int *VAR_3 = VAR_0->stack_state;

  int VAR_4 = 1;
  while (VAR_4) {
    if (VAR_1 < 0) {
      break;
    }
    switch (VAR_0->stack_state[VAR_1]) {
    case 0:
      VAR_3[VAR_1]++;
      if (VAR_2[VAR_1]->l != ((void*)0)) {
        VAR_2[VAR_1 + 1] = VAR_2[VAR_1]->l;
        VAR_3[VAR_1 + 1] = 0;
        VAR_1++;
        break;
      }
    case 1:
      VAR_4 = 0;
      break;
    case 2:
      VAR_3[VAR_1]++;
      if (VAR_2[VAR_1]->r != ((void*)0)) {
        VAR_2[VAR_1 + 1] = VAR_2[VAR_1]->r;
        VAR_3[VAR_1 + 1] = 0;
        VAR_1++;
        break;
      }
    case 3:
      VAR_1--;
      break;
    default:
      FUNC_0 (0);
      break;
    }
  }
  VAR_0->stack_top = VAR_1;
}
