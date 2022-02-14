
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gather_data {int dummy; } ;
struct connection {scalar_t__ query_start_time; } ;
struct TYPE_3__ {scalar_t__ wakeup_time; } ;
struct conn_query {TYPE_1__ timer; scalar_t__ start_time; int * cq_type; struct gather_data* extra; struct connection* requester; struct connection* outbound; int custom_type; } ;
struct TYPE_4__ {int query_type; } ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct conn_query*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct conn_query* FUNC_4 (int) ;

struct conn_query *FUNC_5 (struct gather_data *VAR_3, struct connection *VAR_4, double VAR_5) {
  struct conn_query *VAR_6 = FUNC_4 (sizeof (struct conn_query));

  VAR_6->custom_type = FUNC_0(VAR_4)->query_type;
  VAR_6->outbound = VAR_4;
  VAR_6->requester = VAR_4;
  VAR_6->start_time = VAR_4->query_start_time;
  VAR_6->extra = VAR_3;
  VAR_6->cq_type = &VAR_0;
  VAR_6->timer.wakeup_time = (VAR_5 > 0 ? VAR_6->start_time + VAR_5 : 0);

  FUNC_3 (VAR_6);

  if (VAR_2 > 1) {
    FUNC_1 (VAR_1, "after insert_conn_query(). Q->start_time = %ld, Q->timer.wakeup_time=%ld. cur_time=%d\n", VAR_6->start_time, VAR_6->timer.wakeup_time, FUNC_2 ());
  }

  return VAR_6;
}
