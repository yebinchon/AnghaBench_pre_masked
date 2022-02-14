
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_timer {int dummy; } ;
struct binlog_wait_query {int (* on_alarm ) (struct binlog_wait_query*) ;} ;


 int FUNC_0 (struct binlog_wait_query*) ;
 int FUNC_1 (struct binlog_wait_query*,int) ;

int FUNC_2 (struct event_timer *VAR_0) {

  struct binlog_wait_query *VAR_1 = (void *)VAR_0;


  VAR_1->on_alarm (VAR_1);
  FUNC_1 (VAR_1, sizeof (*VAR_1));
  return 0;
}
