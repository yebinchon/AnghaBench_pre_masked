
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; struct TYPE_3__* prev; } ;
typedef TYPE_1__ transaction_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

void FUNC_1 (transaction_t *VAR_1) {
  transaction_t *VAR_2 = VAR_1->prev, *VAR_3 = VAR_1->next;
  if (VAR_2 == ((void*)0) && VAR_3 == ((void*)0)) {
    return;
  }
  FUNC_0 (VAR_2 != ((void*)0) && VAR_3 != ((void*)0));
  VAR_2->next = VAR_3;
  VAR_3->prev = VAR_2;
  VAR_1->prev = VAR_1->next = ((void*)0);
  VAR_0--;
}
