
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pptr; int unprocessed_bytes; int total_bytes; scalar_t__ wptr; scalar_t__ rptr; struct TYPE_3__* next; struct TYPE_3__* prev; } ;
typedef TYPE_1__ netbuffer_t ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int,int,unsigned int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_0 ;

unsigned FUNC_3 (netbuffer_t *VAR_1, int VAR_2, unsigned VAR_3) {
  netbuffer_t *VAR_4 = VAR_1->prev;
  int VAR_5 = VAR_4->pptr ? VAR_1->unprocessed_bytes : VAR_1->total_bytes;
  if (VAR_2 > VAR_5) {
    FUNC_2 (VAR_0, "**ERROR** len=%d total_bytes=%d\n", VAR_2, VAR_5);
  }
  FUNC_0 (VAR_2 <= VAR_5);

  if (VAR_4->wptr == VAR_4->rptr && VAR_4 != VAR_1) {
    VAR_4 = VAR_4->prev;
  }

  while (VAR_2 > 0) {
    int VAR_6 = VAR_4->wptr - (VAR_4->pptr ? VAR_4->pptr : VAR_4->rptr);
    VAR_2 -= VAR_6;
    if (VAR_2 > 0) {
      VAR_4 = VAR_4->prev;
    }
  }
  VAR_3 = FUNC_1 ((VAR_4->pptr ? VAR_4->pptr : VAR_4->rptr) - VAR_2, VAR_4->wptr - (VAR_4->pptr ? VAR_4->pptr : VAR_4->rptr) + VAR_2, VAR_3);
  VAR_4 = VAR_4->next;
  while (VAR_4 != VAR_1) {
    VAR_3 = FUNC_1 ((VAR_4->pptr ? VAR_4->pptr : VAR_4->rptr), VAR_4->wptr - (VAR_4->pptr ? VAR_4->pptr : VAR_4->rptr), VAR_3);
    VAR_4 = VAR_4->next;
  }
  return VAR_3;
}
