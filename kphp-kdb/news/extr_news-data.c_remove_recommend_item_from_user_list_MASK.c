
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* last; TYPE_2__* first; } ;
typedef TYPE_1__ recommend_user_t ;
struct TYPE_7__ {struct TYPE_7__* prev; struct TYPE_7__* next; } ;
typedef TYPE_2__ recommend_item_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1 (recommend_user_t *VAR_0, recommend_item_t *VAR_1) {
  if (VAR_0->first == VAR_1) {
    VAR_0->first = VAR_1->next;
  }
  if (VAR_0->last == VAR_1) {
    VAR_0->last = VAR_1->prev;
  }
  recommend_item_t *VAR_2 = VAR_1->prev, *VAR_3 = VAR_1->next;
  if (VAR_2 != (recommend_item_t *) VAR_0) {
    VAR_2->next = VAR_3;
  }
  if (VAR_3 != (recommend_item_t *) VAR_0) {
    VAR_3->prev = VAR_2;
  }
  FUNC_0 (VAR_1);
}
