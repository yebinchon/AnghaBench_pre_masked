
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* trp_node_ptr ;
struct TYPE_9__ {int size; TYPE_1__* root; } ;
typedef TYPE_2__ treap ;
struct TYPE_8__ {int x; int y; struct TYPE_8__* l; struct TYPE_8__* r; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__**,TYPE_1__*,TYPE_1__*) ;

int FUNC_1 (treap *VAR_2, int VAR_3) {
  trp_node_ptr *VAR_4 = &VAR_2->root;

  while (*VAR_4 != ((void*)0)) {
    if ((*VAR_4)->x == VAR_3) {
      trp_node_ptr VAR_5 = *VAR_4;
      FUNC_0 (VAR_4, VAR_5->l, VAR_5->r);

      VAR_5->r = ((void*)0);
      VAR_5->l = VAR_0;
      VAR_0 = VAR_5;
      VAR_1++;
      VAR_2->size++;

      return VAR_5->y;
    } else if ((*VAR_4)->x > VAR_3) {
      VAR_4 = &(*VAR_4)->r;
    } else if ((*VAR_4)->x < VAR_3) {
      VAR_4 = &(*VAR_4)->l;
    }
  }
  return 0;
}
