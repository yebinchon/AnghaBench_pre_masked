
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ h_idx; } ;
struct conn_query {scalar_t__ req_generation; TYPE_3__ timer; TYPE_2__* requester; TYPE_1__* outbound; } ;
struct TYPE_8__ {int in_queue; } ;
struct TYPE_6__ {scalar_t__ generation; TYPE_4__* ev; int fd; int pending_queries; } ;
struct TYPE_5__ {int fd; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int,char*,...) ;

int FUNC_3 (struct conn_query *VAR_0) {
  FUNC_2 (2, "delete_conn_query_from_requester (%p)\n", VAR_0);
  if (VAR_0->requester && VAR_0->requester->generation == VAR_0->req_generation) {
    if (!--VAR_0->requester->pending_queries) {

      FUNC_2 (2, "socket %d was the last one, waking master %d\n", VAR_0->outbound ? VAR_0->outbound->fd : -1, VAR_0->requester->fd);
      if (!VAR_0->requester->ev->in_queue) {
        FUNC_0 (VAR_0->requester->ev);
      }
    }
  }
  VAR_0->requester = 0;
  if (VAR_0->timer.h_idx) {
    FUNC_1 (&VAR_0->timer);
  }
  return 0;
}
