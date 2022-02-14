
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; TYPE_2__* parent; TYPE_1__* prev; } ;
typedef TYPE_3__ watchcat ;
struct TYPE_7__ {int vn; } ;
struct TYPE_6__ {TYPE_3__* next; } ;



inline watchcat *FUNC_0 (watchcat *VAR_0) {
  VAR_0->next->prev = VAR_0->prev;
  VAR_0->prev->next = VAR_0->next;

  VAR_0->parent->vn--;

  return VAR_0->next;
}
