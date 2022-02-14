
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* wptr; char* rptr; char* pptr; struct TYPE_5__* next; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*,int) ;

int FUNC_1 (netbuffer_t *VAR_0, netbuffer_t *VAR_1, int VAR_2) {
  netbuffer_t *VAR_3 = VAR_1;
  int VAR_4, VAR_5 = 0;
  char *VAR_6;
  if (VAR_3->wptr == VAR_3->rptr) {
    VAR_3 = VAR_3->next;
  }
  VAR_6 = VAR_3->rptr;
  while (VAR_2 > 0) {
    VAR_4 = (VAR_3->pptr ? VAR_3->pptr : VAR_3->wptr) - VAR_6;
    if (VAR_4 > VAR_2) { VAR_4 = VAR_2; }
    if (VAR_4 > 0) {
      VAR_5 += FUNC_0 (VAR_0, VAR_6, VAR_4);
      VAR_6 += VAR_4;
      VAR_2 -= VAR_4;
    }
    if (VAR_6 == VAR_3->wptr) {
      VAR_3 = VAR_3->next;
      VAR_6 = VAR_3->rptr;
      if (VAR_3 == VAR_1) { break; }
    } else if (VAR_6 == VAR_3->pptr) {
      break;
    }
  }
  return VAR_5;
}
