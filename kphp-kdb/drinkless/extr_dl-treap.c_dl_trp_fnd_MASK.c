
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* dl_trp_node_ptr ;
struct TYPE_5__ {TYPE_1__* root; } ;
typedef TYPE_2__ dl_treap ;
struct TYPE_4__ {int x; struct TYPE_4__* l; struct TYPE_4__* r; } ;



int FUNC_0 (dl_treap *VAR_0, int VAR_1) {
  dl_trp_node_ptr VAR_2 = VAR_0->root;

  while (VAR_2 != ((void*)0)) {
    if (VAR_2->x == VAR_1) {
      return 1;
    } else if (VAR_2->x > VAR_1) {
      VAR_2 = VAR_2->r;
    } else if (VAR_2->x < VAR_1) {
      VAR_2 = VAR_2->l;
    }
  }
  return 0;
}
