
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct conn_target {int port; TYPE_1__ target; } ;
struct conn_query {TYPE_2__* outbound; } ;
struct TYPE_4__ {int unreliability; int fd; struct conn_target* target; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct conn_query*,TYPE_2__*,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;

int FUNC_3 (struct conn_query *VAR_3) {
  VAR_3->outbound->unreliability += 1000;
  if (VAR_2 > 0) {
    FUNC_0 (VAR_1, "query %p of connection %p (fd=%d) timed out, unreliability=%d\n", VAR_3, VAR_3->outbound, VAR_3->outbound->fd, VAR_3->outbound->unreliability);
  }
  VAR_0++;

  struct conn_target *VAR_4 = VAR_3->outbound->target;
  FUNC_2 (FUNC_1 (VAR_4->target.s_addr), VAR_4->port);

  return 0;
}
