
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* trp_node_ptr ;
struct TYPE_9__ {int size; TYPE_1__* root; } ;
typedef TYPE_2__ treap ;
struct TYPE_8__ {int y; int x; struct TYPE_8__* r; struct TYPE_8__* l; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int,TYPE_1__**,TYPE_1__**) ;

void FUNC_2 (treap *VAR_0, int VAR_1, int VAR_2) {
  trp_node_ptr *VAR_3 = &VAR_0->root;

  while (*VAR_3 != ((void*)0) && ((*VAR_3)->y >= VAR_2)) {
    if (((*VAR_3)->x ^ VAR_1) <= 1) {
      (*VAR_3)->x = VAR_1;
      return;
    } else if ((*VAR_3)->x > VAR_1) {
      VAR_3 = &(*VAR_3)->r;
    } else if ((*VAR_3)->x < VAR_1) {
      VAR_3 = &(*VAR_3)->l;
    }
  }
  trp_node_ptr VAR_4 = *VAR_3;

  while (VAR_4 != ((void*)0)) {
    if ((VAR_4->x ^ VAR_1) <= 1) {
      VAR_4->x = VAR_1;
      return;
    } else if (VAR_4->x > VAR_1) {
      VAR_4 = VAR_4->r;
    } else if (VAR_4->x < VAR_1) {
      VAR_4 = VAR_4->l;
    }
  }

  trp_node_ptr VAR_5 = FUNC_0();
  VAR_0->size--;
  VAR_5->x = VAR_1;
  VAR_5->y = VAR_2;
  FUNC_1 (*VAR_3, VAR_1, &VAR_5->l, &VAR_5->r);
  *VAR_3 = VAR_5;
}
