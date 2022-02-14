
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binlog_wait_query {int (* on_complete ) (struct binlog_wait_query*) ;struct binlog_wait_query* x; } ;


 int FUNC_0 (struct binlog_wait_query*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct binlog_wait_query*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,struct binlog_wait_query*) ;
 struct binlog_wait_query* FUNC_5 (int ) ;
 int FUNC_6 (struct binlog_wait_query*,int) ;

void FUNC_7 (void) {
  while (FUNC_1 (VAR_1) > 0) {
    FUNC_0 (FUNC_5 (VAR_0));
    struct binlog_wait_query *VAR_2 = FUNC_5 (VAR_0)->x;
    FUNC_0 (VAR_2);
    VAR_2->on_complete (VAR_2);
    VAR_0 = FUNC_4 (VAR_0, VAR_2);
    FUNC_3 ();
    FUNC_6 (VAR_2, sizeof (*VAR_2));
  }
}
