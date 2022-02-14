
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ylist_decoder_stack_entry {int num; TYPE_1__* positions_tail; TYPE_1__* positions_head; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ list_int_entry_t ;
struct TYPE_6__ {int num; TYPE_1__* head; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (struct ylist_decoder_stack_entry*) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4 (struct ylist_decoder_stack_entry *VAR_1, int VAR_2) {

  if (VAR_1->num) {
    FUNC_1 (VAR_1);
  }
  VAR_1->num = VAR_2;
  int VAR_3 = 0;
  list_int_entry_t *VAR_4;
  if (FUNC_0 (VAR_2 <= VAR_0.num)) {

    VAR_4 = VAR_1->positions_head = VAR_0.head;
    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
      VAR_4 = VAR_4->next;
    }
    VAR_1->positions_tail = VAR_4;
    VAR_0.num -= VAR_2;
    VAR_0.head = VAR_4->next;
    VAR_4->next = ((void*)0);
  } else {
    VAR_1->positions_head = VAR_1->positions_tail = FUNC_2 (sizeof (*VAR_4));
    VAR_1->positions_tail->next = ((void*)0);
    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
      VAR_4 = FUNC_3 (sizeof (*VAR_4));
      VAR_4->next = ((void*)0);
      VAR_1->positions_tail->next = VAR_4;
      VAR_1->positions_tail = VAR_4;
    }
  }
}
