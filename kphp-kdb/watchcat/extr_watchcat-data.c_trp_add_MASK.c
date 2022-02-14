
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int size; TYPE_2__* root; } ;
typedef TYPE_1__ wkey_set ;
typedef TYPE_2__* wkey_ptr ;
struct TYPE_11__ {int y; int x; struct TYPE_11__* r; struct TYPE_11__* l; int * parent; } ;
typedef TYPE_2__ wkey ;
typedef int watchcat ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int,TYPE_2__**,TYPE_2__**) ;

wkey *FUNC_2 (wkey_set *VAR_0, int VAR_1, int VAR_2, watchcat *VAR_3) {
  wkey_ptr *VAR_4 = &VAR_0->root;

  while (*VAR_4 != ((void*)0) && ((*VAR_4)->y >= VAR_2)) {
    if ((*VAR_4)->x == VAR_1) {
      return *VAR_4;
    } else if ((*VAR_4)->x > VAR_1) {
      VAR_4 = &(*VAR_4)->r;
    } else if ((*VAR_4)->x < VAR_1) {
      VAR_4 = &(*VAR_4)->l;
    }
  }
  wkey_ptr VAR_5 = *VAR_4;

  while (VAR_5 != ((void*)0)) {
    if (VAR_5->x == VAR_1) {
      return VAR_5;
    } else if (VAR_5->x > VAR_1) {
      VAR_5 = VAR_5->r;
    } else if (VAR_5->x < VAR_1) {
      VAR_5 = VAR_5->l;
    }
  }
  wkey_ptr VAR_6 = FUNC_0();

  VAR_0->size++;
  VAR_6->x = VAR_1;
  VAR_6->y = VAR_2;
  VAR_6->parent = VAR_3;
  FUNC_1 (*VAR_4, VAR_1, &VAR_6->l, &VAR_6->r);
  *VAR_4 = VAR_6;

  return VAR_6;
}
