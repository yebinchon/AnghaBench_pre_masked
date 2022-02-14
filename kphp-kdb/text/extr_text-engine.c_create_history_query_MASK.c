
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int user_id; } ;
typedef TYPE_2__ user_t ;
struct connection {int fd; } ;
struct TYPE_4__ {scalar_t__ wakeup_time; } ;
struct conn_query {scalar_t__ start_time; TYPE_1__ timer; int * cq_type; scalar_t__ extra; struct connection* requester; struct connection* outbound; scalar_t__ custom_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct conn_query*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct conn_query* FUNC_3 (int) ;

int FUNC_4 (user_t *VAR_5, struct connection *VAR_6, double VAR_7) {
  struct conn_query *VAR_8 = FUNC_3 (sizeof (struct conn_query));

  if (VAR_4 > 1) {
    FUNC_0 (VAR_3, "create_history_query(%p[%d], %p[%d]): Q=%p\n", VAR_5, VAR_5->user_id, VAR_6, VAR_6->fd, VAR_8);
  }

  VAR_8->custom_type = 0;
  VAR_8->outbound = (struct connection *) VAR_5;
  VAR_8->requester = VAR_6;
  VAR_8->start_time = FUNC_1 (VAR_0);
  VAR_8->extra = 0;
  VAR_8->cq_type = &VAR_1;
  VAR_8->timer.wakeup_time = (VAR_7 > 0 ? VAR_8->start_time + VAR_7 : 0);

  VAR_2++;
  FUNC_2 (VAR_8);

  if (VAR_4 > 1) {
    FUNC_0 (VAR_3, "after insert_conn_query()\n");
  }

  return 1;
}
