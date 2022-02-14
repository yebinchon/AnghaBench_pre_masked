
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; struct TYPE_4__* next; struct TYPE_4__* prev; scalar_t__ end; scalar_t__ pptr; scalar_t__ wptr; scalar_t__ rptr; } ;
typedef TYPE_1__ netbuffer_t ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

int FUNC_1 (netbuffer_t *VAR_6) {
  netbuffer_t *VAR_7 = VAR_0.next;
  FUNC_0 (VAR_6->state == VAR_1 || (VAR_6->state == VAR_2 && VAR_6->prev == VAR_6 && VAR_6->next == VAR_6));
  VAR_6->rptr = VAR_6->wptr = VAR_6->pptr = VAR_6->end = 0;
  VAR_6->state = VAR_3;
  VAR_6->prev = &VAR_0;
  VAR_6->next = VAR_7;
  VAR_7->prev = VAR_6;
  VAR_0.next = VAR_6;
  VAR_5--;
  VAR_4++;
  return 0;
}
