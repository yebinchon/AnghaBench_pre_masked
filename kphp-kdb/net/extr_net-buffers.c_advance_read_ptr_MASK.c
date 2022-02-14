
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; scalar_t__ rptr; scalar_t__ wptr; scalar_t__ pptr; scalar_t__ extra; scalar_t__ start; int total_bytes; struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (netbuffer_t *VAR_3, int VAR_4) {
  netbuffer_t *VAR_5 = VAR_3, *VAR_6;
  FUNC_0 (VAR_3->state == VAR_1 || VAR_3->state == VAR_0);
  FUNC_0 (VAR_4 >= 0 && VAR_4 <= VAR_2);
  if (VAR_3->rptr == VAR_3->wptr) {
    VAR_5 = VAR_3->next;
    VAR_5->rptr += VAR_4;
    FUNC_0 (VAR_5->rptr <= VAR_5->wptr);
    FUNC_0 (!VAR_5->pptr || VAR_5->rptr <= VAR_5->pptr);
    if (VAR_5->rptr == VAR_5->wptr) {
      VAR_6 = VAR_5->next;
      FUNC_0 (VAR_3->extra > 0);
      VAR_3->next = VAR_6;
      VAR_6->prev = VAR_3;
      FUNC_1 (VAR_5);
      VAR_3->extra--;
    }
  } else {
    VAR_3->rptr += VAR_4;
    FUNC_0 (VAR_3->rptr <= VAR_3->wptr);
    FUNC_0 (!VAR_3->pptr || VAR_3->rptr <= VAR_3->pptr);
    if (VAR_3->rptr == VAR_3->wptr) {
      VAR_3->rptr = VAR_3->wptr = VAR_3->start;
      if (VAR_3->pptr) {
        VAR_3->pptr = VAR_3->wptr;
      }
    }
  }
  VAR_3->total_bytes -= VAR_4;
}
