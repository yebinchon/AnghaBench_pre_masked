
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int pptr; scalar_t__ unprocessed_bytes; int total_bytes; struct TYPE_3__* next; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1 (netbuffer_t *VAR_2) {
  netbuffer_t *VAR_3;
  FUNC_0 (VAR_2->state == VAR_1 || VAR_2->state == VAR_0);
  FUNC_0 (VAR_2->pptr);
  VAR_2->pptr = 0;
  for (VAR_3 = VAR_2->next; VAR_3 != VAR_2; VAR_3 = VAR_3->next) {
    FUNC_0 (VAR_3->pptr);
    VAR_3->pptr = 0;
  }
  VAR_2->total_bytes += VAR_2->unprocessed_bytes;
  VAR_2->unprocessed_bytes = 0;
  return 0;
}
