
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_request {scalar_t__ size; struct forth_request* next; struct forth_request* prev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,struct forth_request*) ;

void FUNC_2 (struct forth_request *VAR_0, struct forth_request *VAR_1) {
  FUNC_1 (4, "tlist_remove (%p)\n", VAR_1);
  struct forth_request *VAR_2 = VAR_1->prev, *VAR_3 = VAR_1->next;
  if (VAR_2 == ((void*)0) && VAR_3 == ((void*)0)) {
    return;
  }
  FUNC_0 (VAR_2 != ((void*)0) && VAR_3 != ((void*)0));
  VAR_2->next = VAR_3;
  VAR_3->prev = VAR_2;
  VAR_1->prev = VAR_1->next = ((void*)0);
  VAR_0->size--;
  FUNC_0 (VAR_0->size >= 0);
}
