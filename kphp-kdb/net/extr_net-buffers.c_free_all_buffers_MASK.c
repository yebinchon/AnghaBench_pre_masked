
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; scalar_t__ extra; scalar_t__ pptr; int start; int wptr; int rptr; struct TYPE_4__* next; struct TYPE_4__* prev; scalar_t__ unprocessed_bytes; scalar_t__ total_bytes; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (netbuffer_t *VAR_2) {
  netbuffer_t *VAR_3, *VAR_4;
  if (!VAR_2) { return; }
  FUNC_0 (VAR_2->state == VAR_1 || VAR_2->state == VAR_0);
  VAR_3 = VAR_2->next;
  while (VAR_3 != VAR_2) {
    FUNC_0 (VAR_2->extra > 0);
    VAR_4 = VAR_3->next;
    FUNC_1 (VAR_3);
    VAR_2->extra--;
    VAR_3 = VAR_4;
  }
  FUNC_0 (!VAR_2->extra);
  VAR_2->total_bytes = 0;
  VAR_2->unprocessed_bytes = 0;
  VAR_2->prev = VAR_2->next = VAR_2;
  VAR_2->rptr = VAR_2->wptr = VAR_2->start;
  VAR_2->pptr = 0;

  if (VAR_2->state == VAR_0) {
    FUNC_1 (VAR_2);
  }
}
