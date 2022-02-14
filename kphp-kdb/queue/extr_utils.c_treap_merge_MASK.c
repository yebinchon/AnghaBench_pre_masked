
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* treap_node_ptr ;
struct TYPE_5__ {scalar_t__ y; struct TYPE_5__* r; struct TYPE_5__* l; } ;



void FUNC_0 (treap_node_ptr *VAR_0, treap_node_ptr VAR_1, treap_node_ptr VAR_2) {
  while (VAR_1 != ((void*)0) || VAR_2 != ((void*)0)) {
     if (VAR_1 == ((void*)0) || (VAR_2 != ((void*)0) && VAR_2->y > VAR_1->y)) {
       *VAR_0 = VAR_2;
       VAR_0 = &VAR_2->l;
       VAR_2 = VAR_2->l;
     } else {
       *VAR_0 = VAR_1;
       VAR_0 = &VAR_1->r;
       VAR_1 = VAR_1->r;
     }
  }
  *VAR_0 = ((void*)0);
}
