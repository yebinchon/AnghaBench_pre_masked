
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ transaction_t ;
typedef TYPE_1__ tlist_t ;



void FUNC_0 (tlist_t *VAR_0, transaction_t *VAR_1) {
  transaction_t *VAR_2 = VAR_0->prev, *VAR_3 = VAR_0;
  VAR_2->next = VAR_1; VAR_1->prev = VAR_2;
  VAR_3->prev = VAR_1; VAR_1->next = VAR_3;
}
