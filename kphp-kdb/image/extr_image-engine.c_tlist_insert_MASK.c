
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_request {int size; struct forth_request* next; struct forth_request* prev; } ;



void FUNC_0 (struct forth_request *VAR_0, struct forth_request *VAR_1) {
  struct forth_request *VAR_2 = VAR_0->prev, *VAR_3 = VAR_0;
  VAR_2->next = VAR_1; VAR_1->prev = VAR_2;
  VAR_3->prev = VAR_1; VAR_1->next = VAR_3;
  VAR_0->size++;
}
