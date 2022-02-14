
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* dl_trp_node_ptr ;
struct TYPE_9__ {int size; TYPE_1__* root; } ;
typedef TYPE_2__ dl_treap ;
struct TYPE_8__ {int y; int x; struct TYPE_8__* r; struct TYPE_8__* l; } ;


 int FUNC_0 (TYPE_1__*,int,TYPE_1__**,TYPE_1__**) ;
 TYPE_1__* FUNC_1 () ;

void FUNC_2 (dl_treap *VAR_0, int VAR_1, int VAR_2) {
  dl_trp_node_ptr *VAR_3 = &VAR_0->root;

  while (*VAR_3 != ((void*)0) && (*VAR_3)->y >= VAR_2) {
    if ((*VAR_3)->x > VAR_1) {
      VAR_3 = &(*VAR_3)->r;
    } else {
      VAR_3 = &(*VAR_3)->l;
    }
  }
  dl_trp_node_ptr VAR_4 = FUNC_1();
  VAR_0->size--;
  VAR_4->x = VAR_1;
  VAR_4->y = VAR_2;
  FUNC_0 (*VAR_3, VAR_1, &VAR_4->l, &VAR_4->r);
  *VAR_3 = VAR_4;
}
