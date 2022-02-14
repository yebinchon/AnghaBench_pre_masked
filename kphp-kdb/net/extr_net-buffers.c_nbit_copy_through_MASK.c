
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* rptr; char* wptr; char* pptr; struct TYPE_6__* next; } ;
typedef TYPE_1__ netbuffer_t ;
struct TYPE_7__ {char* cptr; TYPE_1__* cur; TYPE_1__* head; } ;
typedef TYPE_2__ nb_iterator_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;

int FUNC_2 (netbuffer_t *VAR_1, nb_iterator_t *VAR_2, int VAR_3) {
  netbuffer_t *VAR_4 = VAR_2->head, *VAR_5 = VAR_2->cur;
  int VAR_6, VAR_7 = 0;
  char *VAR_8 = VAR_2->cptr;

  FUNC_0 (VAR_5->rptr <= VAR_8 && VAR_8 <= VAR_5->wptr);
  FUNC_0 (!VAR_5->pptr || VAR_8 <= VAR_5->pptr);

  while (VAR_3 > 0) {
    VAR_6 = (VAR_5->pptr ? VAR_5->pptr : VAR_5->wptr) - VAR_8;
    FUNC_0 ((unsigned) VAR_6 <= VAR_0);
    if (VAR_6 > VAR_3) { VAR_6 = VAR_3; }
    if (VAR_6 > 0) {
      FUNC_1 (VAR_1, VAR_8, VAR_6);
      VAR_7 += VAR_6;
      VAR_8 += VAR_6;
      VAR_3 -= VAR_6;
    }
    if (!VAR_3 || VAR_8 != VAR_5->wptr || VAR_5->next == VAR_4) {
      break;
    }
    VAR_5 = VAR_5->next;
    VAR_8 = VAR_5->rptr;
  }
  if (VAR_8 == VAR_5->wptr && VAR_5->next != VAR_4) {
    VAR_5 = VAR_5->next;
    VAR_8 = VAR_5->rptr;
  }
  VAR_2->cptr = VAR_8;
  VAR_2->cur = VAR_5;
  return VAR_7;
}
