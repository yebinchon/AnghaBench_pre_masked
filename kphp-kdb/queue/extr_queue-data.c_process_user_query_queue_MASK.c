
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {double wakeup_time; } ;
struct conn_query {TYPE_3__ timer; struct conn_query* next; } ;
struct TYPE_4__ {struct conn_query* first_q; } ;
typedef TYPE_1__ queue ;


 int FUNC_0 (TYPE_3__*) ;
 double VAR_0 ;

int FUNC_1 (queue *VAR_1) {
  struct conn_query *VAR_2;
  double VAR_3 = VAR_0;

  for (VAR_2 = VAR_1->first_q; VAR_2 != (struct conn_query *)VAR_1; VAR_2 = VAR_2->next) {
    if (VAR_2->timer.wakeup_time > VAR_3 || VAR_2->timer.wakeup_time == 0) {
      VAR_2->timer.wakeup_time = VAR_3;
      FUNC_0 (&VAR_2->timer);
    }
  }

  return 0;
}
