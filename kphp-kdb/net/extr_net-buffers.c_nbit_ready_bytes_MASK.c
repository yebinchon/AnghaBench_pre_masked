
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rptr; scalar_t__ wptr; int pptr; scalar_t__ state; int extra; struct TYPE_4__* next; } ;
typedef TYPE_1__ netbuffer_t ;
struct TYPE_5__ {scalar_t__ cptr; TYPE_1__* cur; TYPE_1__* head; } ;
typedef TYPE_2__ nb_iterator_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;

int FUNC_1 (nb_iterator_t *VAR_4) {
  netbuffer_t *VAR_5 = VAR_4->head, *VAR_6 = VAR_4->cur;
  int VAR_7, VAR_8;
  if (!VAR_5) {
    return 0;
  }
  FUNC_0 (VAR_6->rptr <= VAR_6->wptr);
  FUNC_0 (VAR_6->rptr <= VAR_4->cptr && VAR_4->cptr <= VAR_6->wptr);
  if (VAR_4->cptr < VAR_6->wptr) {
    return (VAR_6->pptr ? VAR_6->pptr : VAR_6->wptr) - VAR_4->cptr;
  }
  FUNC_0 (VAR_5->state == VAR_1 || VAR_5->state == VAR_0);
  VAR_7 = VAR_5->extra + 1;
  FUNC_0 (VAR_7 <= VAR_2 + 12);

  VAR_6 = VAR_6->next;
  while (VAR_6 != VAR_5) {
    FUNC_0 (--VAR_7 >= 0);
    VAR_8 = VAR_6->wptr - VAR_6->rptr;
    FUNC_0 ((unsigned) VAR_8 <= VAR_3);
    if (VAR_8) {
      VAR_4->cur = VAR_6;
      VAR_4->cptr = VAR_6->rptr;
      if (VAR_6->pptr) {
        VAR_8 = VAR_6->pptr - VAR_6->rptr;
      }
      return VAR_8;
    }
    VAR_6 = VAR_6->next;
  }
  return 0;
}
