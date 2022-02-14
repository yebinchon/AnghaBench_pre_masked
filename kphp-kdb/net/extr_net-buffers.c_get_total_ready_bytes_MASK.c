
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int pptr; int wptr; int rptr; int total_bytes; struct TYPE_3__* next; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

int FUNC_1 (netbuffer_t *VAR_3) {
  netbuffer_t *VAR_4;
  int VAR_5, VAR_6, VAR_7 = 0;
  FUNC_0 (VAR_3->state == VAR_1 || VAR_3->state == VAR_0);
  VAR_5 = (VAR_3->pptr ? VAR_3->pptr : VAR_3->wptr) - VAR_3->rptr;
  FUNC_0 (VAR_5 >= 0);
  VAR_4 = VAR_3->next;
  while (VAR_4 != VAR_3) {
    VAR_6 = VAR_4->wptr - VAR_4->rptr;
    if (VAR_4->pptr && VAR_4->pptr < VAR_4->wptr) {
      VAR_6 = VAR_4->pptr - VAR_4->rptr;
      VAR_7 = 1;
    }
    FUNC_0 (VAR_6 >= 0 && VAR_6 <= VAR_2);
    VAR_5 += VAR_6;
    if (VAR_7) {
      break;
    }
    VAR_4 = VAR_4->next;
  }
  FUNC_0 (VAR_5 == VAR_3->total_bytes);
  return VAR_5;
}
