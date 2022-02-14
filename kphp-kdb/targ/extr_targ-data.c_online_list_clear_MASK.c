
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* prev; struct TYPE_3__* next; } ;
typedef TYPE_1__ olist_t ;



__attribute__((used)) static inline void FUNC_0 (olist_t *VAR_0) {
  olist_t *VAR_1 = VAR_0->next;
  while (VAR_1 != VAR_0) {
    olist_t *VAR_2 = VAR_1->next;
    VAR_1->next = VAR_1->prev = 0;
    VAR_1 = VAR_2;
  }
  VAR_0->next = VAR_0->prev = VAR_0;
}
