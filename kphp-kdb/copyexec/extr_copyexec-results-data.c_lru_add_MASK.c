
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ transaction_t ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;

void FUNC_0 (transaction_t *VAR_2) {
  transaction_t *VAR_3 = &VAR_0, *VAR_4 = VAR_3->next;
  VAR_3->next = VAR_2; VAR_2->prev = VAR_3;
  VAR_4->prev = VAR_2; VAR_2->next = VAR_4;
  VAR_1++;
}
