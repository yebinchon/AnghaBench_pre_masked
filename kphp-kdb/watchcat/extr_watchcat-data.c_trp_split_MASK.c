
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* wkey_ptr ;
struct TYPE_5__ {int x; struct TYPE_5__* l; struct TYPE_5__* r; } ;



void FUNC_0 (wkey_ptr VAR_0, int VAR_1, wkey_ptr *VAR_2, wkey_ptr *VAR_3) {
  while (VAR_0 != ((void*)0)) {
    if (VAR_0->x > VAR_1) {
      *VAR_2 = VAR_0;
      VAR_2 = &VAR_0->r;
      VAR_0 = VAR_0->r;
    } else {
      *VAR_3 = VAR_0;
      VAR_3 = &VAR_0->l;
      VAR_0 = VAR_0->l;
    }
  }
  *VAR_2 = *VAR_3 = ((void*)0);
}
