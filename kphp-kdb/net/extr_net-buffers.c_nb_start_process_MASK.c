
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pptr; scalar_t__ rptr; scalar_t__ wptr; scalar_t__ unprocessed_bytes; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ netbuffer_t ;
struct TYPE_6__ {scalar_t__ ptr0; scalar_t__ ptr1; scalar_t__ len0; scalar_t__ len1; TYPE_1__* cur; TYPE_1__* head; } ;
typedef TYPE_2__ nb_processor_t ;


 int FUNC_0 (int) ;

int FUNC_1 (nb_processor_t *VAR_0, netbuffer_t *VAR_1) {
  VAR_0->head = VAR_1;
  netbuffer_t *VAR_2;
  for (VAR_2 = VAR_1->prev; VAR_2 != VAR_1 && VAR_2->pptr == VAR_2->rptr; VAR_2 = VAR_2->prev) {
    FUNC_0 (VAR_2->pptr);
  };
  while (VAR_2->next != VAR_1 && VAR_2->pptr == VAR_2->wptr) {
    VAR_2 = VAR_2->next;
  }

  VAR_0->cur = VAR_2;

  if (VAR_2->pptr == VAR_2->wptr) {
    FUNC_0 (!VAR_1->unprocessed_bytes);
    VAR_0->ptr0 = 0;
    VAR_0->ptr1 = 0;
    VAR_0->len0 = 0;
    VAR_0->len1 = 0;
    return 0;
  }

  VAR_0->ptr0 = VAR_2->pptr;
  VAR_0->len0 = VAR_2->wptr - VAR_2->pptr;

  VAR_2 = VAR_2->next;
  if (VAR_2 == VAR_1 || VAR_2->pptr == VAR_2->wptr) {
    VAR_0->ptr1 = 0;
    VAR_0->len1 = 0;
  } else {
    VAR_0->ptr1 = VAR_2->pptr;
    VAR_0->len1 = VAR_2->wptr - VAR_2->pptr;
  }

  FUNC_0 (VAR_0->len0 + VAR_0->len1 <= VAR_1->unprocessed_bytes);

  return VAR_0->len0 + VAR_0->len1;
}
