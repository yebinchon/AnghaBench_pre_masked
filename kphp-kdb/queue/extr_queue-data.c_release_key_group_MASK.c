
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {double wakeup_time; } ;
struct conn_query {TYPE_4__ timer; } ;
struct TYPE_6__ {int n; TYPE_1__** k; } ;
typedef TYPE_2__ qkey_group ;
struct TYPE_5__ {struct conn_query* conn; } ;


 int FUNC_0 (TYPE_4__*) ;
 double VAR_0 ;

void FUNC_1 (qkey_group *VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->n; VAR_2++) {
    if (VAR_1->k[VAR_2] != ((void*)0)) {
      struct conn_query *VAR_3 = VAR_1->k[VAR_2]->conn;
      if (VAR_3 != ((void*)0)) {
        double VAR_4 = VAR_0;

        if (VAR_3->timer.wakeup_time > VAR_4 || VAR_3->timer.wakeup_time == 0) {
          VAR_3->timer.wakeup_time = VAR_4;
          FUNC_0 (&VAR_3->timer);
        }
      }
    }
  }
}
