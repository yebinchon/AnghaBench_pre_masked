
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* trp_node_ptr ;
struct TYPE_4__ {int x; scalar_t__ y; struct TYPE_4__* l; struct TYPE_4__* r; } ;


 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

trp_node_ptr FUNC_2 (int *VAR_0, int VAR_1) {
  static trp_node_ptr VAR_2[600];


  int VAR_3 = 0, VAR_4;

  VAR_2[0] = ((void*)0);

  for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--) {
    trp_node_ptr VAR_5 = FUNC_0();
    VAR_5->x = VAR_0[VAR_4];
    VAR_5->y = FUNC_1();
    VAR_5->r = ((void*)0);
    while (VAR_3 && VAR_2[VAR_3 - 1]->y < VAR_5->y) {
      VAR_3--;
    }
    if (VAR_3) {
      VAR_5->l = VAR_2[VAR_3 - 1]->r;
      VAR_2[VAR_3 - 1]->r = VAR_5;
    } else {
      VAR_5->l = VAR_2[0];
    }
    VAR_2[VAR_3++] = VAR_5;
  }

  return VAR_2[0];
}
