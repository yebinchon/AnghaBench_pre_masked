
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct conn_target {int dummy; } ;
struct TYPE_2__ {double wakeup_time; } ;
struct conn_query {TYPE_1__ timer; int * cq_type; int * extra; int start_time; struct connection* requester; scalar_t__ custom_type; } ;
typedef int net_ansgen_t ;


 int FUNC_0 (struct conn_query*,struct conn_query*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct conn_query* FUNC_1 (int) ;

void FUNC_2 (struct connection *VAR_2, struct conn_target *VAR_3, net_ansgen_t *VAR_4, double VAR_5) {
  struct conn_query *VAR_6 = FUNC_1 (sizeof (struct conn_query));

  VAR_6->custom_type = 0;

  VAR_6->requester = VAR_2;
  VAR_6->start_time = VAR_1;

  VAR_6->extra = VAR_4;

  VAR_6->cq_type = &VAR_0;
  VAR_6->timer.wakeup_time = VAR_5;

  FUNC_0 (VAR_6, (struct conn_query *)VAR_3);

  return;
}
