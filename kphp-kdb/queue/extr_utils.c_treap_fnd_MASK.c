
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* treap_node_ptr ;
struct TYPE_6__ {TYPE_1__* root; } ;
typedef TYPE_2__ treap ;
typedef scalar_t__ ll ;
struct TYPE_5__ {scalar_t__ x; struct TYPE_5__* l; struct TYPE_5__* r; } ;



treap_node_ptr FUNC_0 (treap *VAR_0, ll VAR_1) {
  treap_node_ptr VAR_2 = VAR_0->root;

  while (VAR_2 != ((void*)0)) {
    if (VAR_2->x == VAR_1) {
      return VAR_2;
    } else if (VAR_2->x > VAR_1) {
      VAR_2 = VAR_2->r;
    } else if (VAR_2->x < VAR_1) {
      VAR_2 = VAR_2->l;
    }
  }
  return ((void*)0);
}
