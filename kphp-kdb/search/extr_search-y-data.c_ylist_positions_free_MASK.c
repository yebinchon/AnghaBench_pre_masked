
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ylist_decoder_stack_entry {scalar_t__ num; TYPE_1__* positions_tail; int positions_head; } ;
struct TYPE_4__ {scalar_t__ num; TYPE_1__* tail; int head; } ;
struct TYPE_3__ {int next; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (struct ylist_decoder_stack_entry *VAR_1) {
  if (FUNC_0 (!VAR_0.num)) {
    VAR_0.head = VAR_1->positions_head;
  } else {
    VAR_0.tail->next = VAR_1->positions_head;
  }
  VAR_0.tail = VAR_1->positions_tail;
  VAR_0.num += VAR_1->num;
}
