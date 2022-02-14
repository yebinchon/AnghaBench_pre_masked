
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* treap_node_ptr ;
struct TYPE_6__ {int y; int x; } ;
typedef TYPE_2__ pli ;
struct TYPE_5__ {struct TYPE_5__* r; int val; int x; struct TYPE_5__* l; } ;



int FUNC_0 (treap_node_ptr VAR_0, pli *VAR_1, int VAR_2) {
  if (VAR_0 == ((void*)0)) {
    return 0;
  }
  int VAR_3 = FUNC_0 (VAR_0->l, VAR_1, VAR_2);
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
  if (VAR_2) {
    VAR_1->x = VAR_0->x;
    VAR_1->y = VAR_0->val;
    VAR_1++;
    VAR_2--;
    VAR_3++;
  }
  VAR_3 += FUNC_0 (VAR_0->r, VAR_1, VAR_2);
  return VAR_3;
}
