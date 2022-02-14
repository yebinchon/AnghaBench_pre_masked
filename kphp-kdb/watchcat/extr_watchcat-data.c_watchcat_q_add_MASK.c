
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vn; struct TYPE_4__* parent; struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ watchcat ;



inline void FUNC_0 (watchcat *VAR_0, watchcat *VAR_1) {
  watchcat *VAR_2 = VAR_0->prev;

  VAR_1->next = VAR_0;
  VAR_0->prev = VAR_1;

  VAR_1->prev = VAR_2;
  VAR_2->next = VAR_1;

  VAR_1->parent = VAR_0;
  if (VAR_0->vn < 2000000000) {
    VAR_0->vn++;
  }
}
