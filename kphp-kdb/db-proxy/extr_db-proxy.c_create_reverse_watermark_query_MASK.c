
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int fd; } ;
struct TYPE_2__ {scalar_t__ wakeup_time; } ;
struct conn_query {TYPE_1__ timer; int * cq_type; scalar_t__ extra; int start_time; struct connection* requester; struct connection* outbound; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct conn_query*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct conn_query* FUNC_2 (int) ;

int FUNC_3 (struct connection *VAR_6, struct connection *VAR_7) {
  struct conn_query *VAR_8 = FUNC_2 (sizeof (struct conn_query));

  if (VAR_4 > 1) {
    FUNC_0 (VAR_2, "create_rev_watermark_query(%p[%d], %p[%d]): Q=%p\n", VAR_7, VAR_7->fd, VAR_6, VAR_6->fd, VAR_8);
  }


  VAR_8->outbound = VAR_6;
  VAR_8->requester = VAR_7;
  VAR_8->start_time = VAR_0;
  VAR_8->extra = 0;
  VAR_8->cq_type = &VAR_1;
  VAR_8->timer.wakeup_time = 0;



  FUNC_1 (VAR_8);
  VAR_5++;
  VAR_3++;

  if (VAR_4 > 1) {
    FUNC_0 (VAR_2, "after push_conn_query()\n");
  }

  return 1;
}
