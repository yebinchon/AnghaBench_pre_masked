
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; scalar_t__ wptr; scalar_t__ rptr; scalar_t__ pptr; struct TYPE_5__* prev; } ;
typedef TYPE_1__ netbuffer_t ;
struct TYPE_6__ {scalar_t__ cptr; TYPE_1__* cur; TYPE_1__* head; } ;
typedef TYPE_2__ nbw_iterator_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2 (nbw_iterator_t *VAR_2) {
  netbuffer_t *VAR_3 = VAR_2->head;
  if (!VAR_3) {
    return FUNC_1 (VAR_2);
  }
  FUNC_0 (VAR_3->state == VAR_1 || VAR_3->state == VAR_0);

  netbuffer_t *VAR_4 = VAR_3->prev;

  VAR_2->cur = VAR_4;
  VAR_2->cptr = VAR_4->wptr;

  FUNC_0 (VAR_4->rptr <= VAR_4->wptr);
  FUNC_0 (!VAR_4->pptr || (VAR_4->rptr <= VAR_4->pptr && VAR_4->pptr <= VAR_4->wptr));
  return 0;
}
