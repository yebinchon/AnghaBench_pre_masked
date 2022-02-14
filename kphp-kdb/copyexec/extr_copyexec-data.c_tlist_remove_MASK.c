
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ transaction_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,TYPE_1__*) ;

void FUNC_2 (transaction_t *VAR_0) {
  FUNC_1 (4, "tlist_remove (%p)\n", VAR_0);
  transaction_t *VAR_1 = VAR_0->prev, *VAR_2 = VAR_0->next;
  if (VAR_1 == ((void*)0) && VAR_2 == ((void*)0)) {
    return;
  }
  FUNC_0 (VAR_1 != ((void*)0) && VAR_2 != ((void*)0));
  VAR_1->next = VAR_2;
  VAR_2->prev = VAR_1;
  VAR_0->prev = VAR_0->next = ((void*)0);
}
