
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; scalar_t__ wptr; scalar_t__ end; scalar_t__ rptr; scalar_t__ pptr; struct TYPE_4__* prev; struct TYPE_4__* next; int extra; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int) ;

char *FUNC_2 (netbuffer_t *VAR_3, int VAR_4) {
  netbuffer_t *VAR_5 = VAR_3->prev, *VAR_6;
  FUNC_1 ((unsigned long) VAR_4 < VAR_2);
  FUNC_1 (VAR_3->state == VAR_1 || VAR_3->state == VAR_0);
  if (VAR_5->wptr + VAR_4 <= VAR_5->end) {
    return VAR_5->wptr;
  }
  VAR_6 = FUNC_0();
  if (!VAR_6) { return 0; }
  VAR_3->extra++;
  VAR_5->next = VAR_6;
  VAR_6->prev = VAR_5;
  VAR_6->next = VAR_3;
  VAR_3->prev = VAR_6;
  if (VAR_5->pptr) {
    VAR_6->pptr = VAR_6->rptr;
  }
  FUNC_1 (VAR_6->wptr + VAR_4 <= VAR_6->end);
  return VAR_6->wptr;
}
