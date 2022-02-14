
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* treap_node_ptr ;
struct TYPE_9__ {int size; TYPE_1__* root; } ;
typedef TYPE_2__ treap ;
typedef int ll ;
struct TYPE_8__ {int y; int val; struct TYPE_8__* r; struct TYPE_8__* l; int x; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_1__**,TYPE_1__**) ;

void FUNC_2 (treap *VAR_0, ll VAR_1, int VAR_2, int VAR_3) {
  treap_node_ptr *VAR_4 = &VAR_0->root;

  while (*VAR_4 != ((void*)0) && ((*VAR_4)->y >= VAR_3)) {
    if ((*VAR_4)->x == VAR_1) {
      (*VAR_4)->val = VAR_2;
      return;
    } else if ((*VAR_4)->x > VAR_1) {
      VAR_4 = &(*VAR_4)->r;
    } else if ((*VAR_4)->x < VAR_1) {
      VAR_4 = &(*VAR_4)->l;
    }
  }
  treap_node_ptr VAR_5 = *VAR_4;

  while (VAR_5 != ((void*)0)) {
    if (VAR_5->x == VAR_1) {
      VAR_5->val = VAR_2;
      return;
    } else if (VAR_5->x > VAR_1) {
      VAR_5 = VAR_5->r;
    } else if (VAR_5->x < VAR_1) {
      VAR_5 = VAR_5->l;
    }
  }

  treap_node_ptr VAR_6 = FUNC_0();
  VAR_0->size--;
  VAR_6->x = VAR_1;
  VAR_6->val = VAR_2;
  VAR_6->y = VAR_3;
  FUNC_1 (*VAR_4, VAR_1, &VAR_6->l, &VAR_6->r);
  *VAR_4 = VAR_6;
}
