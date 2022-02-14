
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int fd; scalar_t__ query_start_time; } ;
struct TYPE_3__ {scalar_t__ wakeup_time; } ;
struct conn_query {scalar_t__ start_time; TYPE_1__ timer; int * cq_type; scalar_t__ extra; struct connection* requester; struct connection* outbound; int custom_type; } ;
struct TYPE_4__ {int query_type; } ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct conn_query*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct conn_query* FUNC_3 (int) ;

struct conn_query *FUNC_4 (struct connection *VAR_5, struct connection *VAR_6, double VAR_7) {
  struct conn_query *VAR_8 = FUNC_3 (sizeof (struct conn_query));

  if (VAR_4 > 1) {
    FUNC_1 (VAR_2, "create_query(%p[%d], %p[%d]): Q=%p\n", VAR_5, VAR_5->fd, VAR_6, VAR_6->fd, VAR_8);
  }

  VAR_8->custom_type = FUNC_0(VAR_6)->query_type;
  VAR_8->outbound = VAR_5;
  VAR_8->requester = VAR_6;
  VAR_8->start_time = VAR_6->query_start_time;
  VAR_8->extra = 0;
  VAR_8->cq_type = &VAR_1;
  VAR_8->timer.wakeup_time = (VAR_7 > 0 ? VAR_8->start_time + VAR_7 : 0);

  FUNC_2 (VAR_8);
  VAR_0++;
  VAR_3++;

  if (VAR_4 > 1) {
    FUNC_1 (VAR_2, "after insert_conn_query()\n");
  }

  return VAR_8;
}
