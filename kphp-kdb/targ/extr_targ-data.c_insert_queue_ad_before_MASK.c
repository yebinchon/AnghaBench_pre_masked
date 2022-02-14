
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {struct advert* prev; struct advert* next; } ;



inline void FUNC_0 (struct advert *VAR_0, struct advert *VAR_1) {
  VAR_1->next = VAR_0;
  VAR_1->prev = VAR_0->prev;
  VAR_0->prev->next = VAR_1;
  VAR_0->prev = VAR_1;
}
