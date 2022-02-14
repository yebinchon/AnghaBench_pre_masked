
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int fd; scalar_t__ query_start_time; } ;
struct conn_target {int dummy; } ;
struct TYPE_3__ {scalar_t__ wakeup_time; } ;
struct conn_query {scalar_t__ start_time; TYPE_1__ timer; int * cq_type; scalar_t__ extra; struct connection* requester; } ;
struct TYPE_4__ {int query_state; } ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct conn_query*,struct conn_query*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct conn_query* FUNC_3 (int) ;

int FUNC_4 (struct conn_target *VAR_6, struct connection *VAR_7, double VAR_8) {
  struct conn_query *VAR_9 = FUNC_3 (sizeof (struct conn_query));

  if (VAR_4 > 1) {
    FUNC_1 (VAR_2, "create_delayed_query(%p, %p[%d]): Q=%p\n", VAR_6, VAR_7, VAR_7->fd, VAR_9);
  }


  VAR_9->requester = VAR_7;
  VAR_9->start_time = VAR_7->query_start_time;
  VAR_9->extra = 0;
  VAR_9->cq_type = &VAR_0;
  VAR_9->timer.wakeup_time = (VAR_8 > 0 ? VAR_9->start_time + VAR_8 : 0);

  FUNC_0(VAR_7)->query_state = VAR_1;

  FUNC_2 (VAR_9, (struct conn_query *)VAR_6);
  VAR_5++;
  VAR_3++;

  if (VAR_4 > 1) {
    FUNC_1 (VAR_2, "after insert_conn_query_into_list()\n");
  }

  return 1;
}
