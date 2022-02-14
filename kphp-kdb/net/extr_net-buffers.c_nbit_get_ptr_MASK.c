
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rptr; scalar_t__ wptr; scalar_t__ pptr; scalar_t__ state; int extra; struct TYPE_4__* next; } ;
typedef TYPE_1__ netbuffer_t ;
struct TYPE_5__ {scalar_t__ cptr; TYPE_1__* cur; TYPE_1__* head; } ;
typedef TYPE_2__ nb_iterator_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

void *FUNC_1 (nb_iterator_t *VAR_3) {
  netbuffer_t *VAR_4 = VAR_3->head, *VAR_5 = VAR_3->cur;
  int VAR_6;
  if (!VAR_4) {
    return 0;
  }
  FUNC_0 (VAR_5->rptr <= VAR_3->cptr && VAR_3->cptr <= VAR_5->wptr && (!VAR_5->pptr || VAR_3->cptr <= VAR_5->pptr));
  if (VAR_3->cptr < VAR_5->wptr) {
    return VAR_3->cptr == VAR_5->pptr ? 0 : VAR_3->cptr;
  }
  FUNC_0 (VAR_4->state == VAR_1 || VAR_4->state == VAR_0);
  VAR_6 = VAR_4->extra + 1;
  FUNC_0 (VAR_6 <= VAR_2 + 12);

  VAR_5 = VAR_5->next;
  while (VAR_5 != VAR_4) {
    FUNC_0 (--VAR_6 >= 0);
    if (VAR_5->rptr < VAR_5->wptr) {
      VAR_3->cur = VAR_5;
      VAR_3->cptr = VAR_5->rptr;
      return VAR_3->cptr == VAR_5->pptr ? 0 : VAR_3->cptr;
    }
    VAR_5 = VAR_5->next;
  }
  return 0;
}
