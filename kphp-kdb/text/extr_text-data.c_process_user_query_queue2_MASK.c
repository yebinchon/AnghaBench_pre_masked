
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct conn_query* first_q; } ;
typedef TYPE_1__ user_t ;
struct TYPE_6__ {double wakeup_time; } ;
struct conn_query {TYPE_3__ timer; struct conn_query* next; } ;


 int VAR_0 ;
 struct conn_query* FUNC_0 (TYPE_1__*) ;
 double FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;

int FUNC_3 (user_t *VAR_1) {
  struct conn_query *VAR_2;
  double VAR_3 = FUNC_1 (VAR_0) + 0.1;

  for (VAR_2 = VAR_1->first_q; VAR_2 != FUNC_0 (VAR_1); VAR_2 = VAR_2->next) {
    if (VAR_2->timer.wakeup_time > VAR_3 || VAR_2->timer.wakeup_time == 0) {
      VAR_2->timer.wakeup_time = VAR_3;
      FUNC_2 (&VAR_2->timer);
    }
  }

  return 0;
}
