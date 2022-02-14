
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; TYPE_2__* root; } ;
typedef TYPE_1__ wkey_set ;
typedef TYPE_2__* wkey_ptr ;
struct TYPE_9__ {int x; struct TYPE_9__* l; struct TYPE_9__* r; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**,TYPE_2__*,TYPE_2__*) ;

void FUNC_3 (wkey_set *VAR_0, int VAR_1) {
  wkey_ptr *VAR_2 = &VAR_0->root;

  while (*VAR_2 != ((void*)0)) {
    if ((*VAR_2)->x == VAR_1) {
      wkey_ptr VAR_3 = *VAR_2;
      FUNC_2 (VAR_2, VAR_3->l, VAR_3->r);

      FUNC_1 (VAR_3);
      VAR_0->size--;

      return;
    } else if ((*VAR_2)->x > VAR_1) {
      VAR_2 = &(*VAR_2)->r;
    } else if ((*VAR_2)->x < VAR_1) {
      VAR_2 = &(*VAR_2)->l;
    }
  }
  FUNC_0 (0);
}
