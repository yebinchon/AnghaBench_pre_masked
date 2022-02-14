
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int fd; } ;
struct conn_query_functions {int dummy; } ;
struct TYPE_2__ {scalar_t__ wakeup_time; } ;
struct conn_query {scalar_t__ start_time; TYPE_1__ timer; struct conn_query_functions* cq_type; scalar_t__ extra; struct connection* requester; struct connection* outbound; scalar_t__ custom_type; } ;
struct aio_connection {int fd; struct conn_query* first_query; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct conn_query*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct conn_query* FUNC_3 (int) ;

int FUNC_4 (struct aio_connection *VAR_5, struct connection *VAR_6, double VAR_7, struct conn_query_functions *VAR_8) {
  struct conn_query *VAR_9 = FUNC_3 (sizeof (struct conn_query));

  if (VAR_4 > 1) {
    FUNC_0 (VAR_2, "create_query(%p[%d], %p[%d]): Q=%p\n", VAR_5, VAR_5->fd, VAR_6, VAR_6->fd, VAR_9);
  }

  VAR_9->custom_type = 0;
  VAR_9->outbound = (struct connection *)VAR_5;
  VAR_9->requester = VAR_6;
  VAR_9->start_time = FUNC_1 (VAR_0);
  VAR_9->extra = 0;
  VAR_9->cq_type = VAR_8;
  VAR_9->timer.wakeup_time = (VAR_7 > 0 ? VAR_9->start_time + VAR_7 : 0);

  if (VAR_4 > 1 && VAR_5->first_query != (struct conn_query *) VAR_5) {
    FUNC_0 (VAR_2, "!NOTICE! inserting second query to %p\n", VAR_5);
  }

  FUNC_2 (VAR_9);
  VAR_1++;
  VAR_3++;

  if (VAR_4 > 1) {
    FUNC_0 (VAR_2, "after insert_conn_query()\n");
  }

  return 1;
}
