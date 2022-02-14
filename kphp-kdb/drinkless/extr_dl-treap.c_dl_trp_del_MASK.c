
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* dl_trp_node_ptr ;
struct TYPE_9__ {int size; TYPE_1__* root; } ;
typedef TYPE_2__ dl_treap ;
struct TYPE_8__ {int x; int y; struct TYPE_8__* l; struct TYPE_8__* r; } ;


 int FUNC_0 (TYPE_1__**,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1 (dl_treap *VAR_1, int VAR_2) {
  dl_trp_node_ptr *VAR_3 = &VAR_1->root;

  while (*VAR_3 != ((void*)0)) {
    if ((*VAR_3)->x == VAR_2) {
      dl_trp_node_ptr VAR_4 = *VAR_3;
      FUNC_0 (VAR_3, VAR_4->l, VAR_4->r);

      VAR_4->r = ((void*)0);
      VAR_4->l = VAR_0;
      VAR_0 = VAR_4;
      VAR_1->size++;

      return VAR_4->y;
    } else if ((*VAR_3)->x > VAR_2) {
      VAR_3 = &(*VAR_3)->r;
    } else if ((*VAR_3)->x < VAR_2) {
      VAR_3 = &(*VAR_3)->l;
    }
  }
  return 0;
}
