
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binlog_wait_query {int (* on_complete ) (struct binlog_wait_query*) ;} ;
struct TYPE_2__ {struct binlog_wait_query* x; } ;


 int FUNC_0 (struct binlog_wait_query*) ;
 int VAR_0 ;
 long long FUNC_1 () ;
 long long VAR_1 ;
 int FUNC_2 (struct binlog_wait_query*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,struct binlog_wait_query*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (struct binlog_wait_query*,int) ;

void FUNC_7 (void) {
  long long VAR_2 = FUNC_1 ();

  while (VAR_2 >= VAR_1) {
    struct binlog_wait_query *VAR_3 = FUNC_5 (VAR_0)->x;
    FUNC_0 (VAR_3);
    VAR_3->on_complete (VAR_3);
    VAR_0 = FUNC_4 (VAR_0, VAR_3);
    FUNC_3 ();
    FUNC_6 (VAR_3, sizeof (*VAR_3));
  }
}
