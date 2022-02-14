
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* rptr; char* wptr; char* pptr; struct TYPE_4__* next; } ;
typedef TYPE_1__ netbuffer_t ;
struct TYPE_5__ {char* cptr; TYPE_1__* cur; TYPE_1__* head; } ;
typedef TYPE_2__ nbw_iterator_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2 (nbw_iterator_t *VAR_1, void *VAR_2, int VAR_3) {
  netbuffer_t *VAR_4 = VAR_1->head, *VAR_5 = VAR_1->cur;
  int VAR_6, VAR_7 = 0;
  char *VAR_8 = VAR_2, *VAR_9 = VAR_1->cptr;

  FUNC_0 (VAR_5->rptr <= VAR_9 && VAR_9 <= VAR_5->wptr);
  FUNC_0 (VAR_9 >= VAR_5->pptr);

  while (VAR_3 > 0) {
    VAR_6 = VAR_5->wptr - VAR_9;
    FUNC_0 ((unsigned) VAR_6 <= VAR_0);
    if (VAR_6 > VAR_3) { VAR_6 = VAR_3; }
    if (VAR_6 > 0) {
      FUNC_1 (VAR_9, VAR_8, VAR_6);
      VAR_7 += VAR_6;
      VAR_9 += VAR_6;
      VAR_8 += VAR_6;
      VAR_3 -= VAR_6;
    }
    if (!VAR_3 || VAR_5->next == VAR_4) {
      break;
    }
    VAR_5 = VAR_5->next;
    VAR_9 = VAR_5->rptr;
    FUNC_0 (!VAR_5->pptr || VAR_5->pptr == VAR_9);
  }
  if (VAR_9 == VAR_5->wptr && VAR_5->next != VAR_4) {
    VAR_5 = VAR_5->next;
    VAR_9 = VAR_5->rptr;
  }
  VAR_1->cptr = VAR_9;
  VAR_1->cur = VAR_5;
  return VAR_7;
}
