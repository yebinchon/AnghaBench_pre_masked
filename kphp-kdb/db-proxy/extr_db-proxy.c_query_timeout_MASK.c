
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct conn_query {TYPE_2__* outbound; } ;
struct TYPE_5__ {int unreliability; int fd; int error; TYPE_1__* ev; int flags; int status; } ;
struct TYPE_4__ {int in_queue; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (struct conn_query*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,struct conn_query*,TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_4 (struct conn_query *VAR_5) {
  VAR_5->outbound->unreliability += 1000;
  if (VAR_4 > 0) {
    FUNC_2 (VAR_3, "query %p of connection %p (fd=%d) timed out, unreliability=%d\n", VAR_5, VAR_5->outbound, VAR_5->outbound->fd, VAR_5->outbound->unreliability);
  }
  FUNC_0 (VAR_5->outbound);
  VAR_5->outbound->status = VAR_1;
  VAR_5->outbound->error = -239;
  VAR_5->outbound->flags |= VAR_0;
  if (!VAR_5->outbound->ev->in_queue) {
    FUNC_3 (VAR_5->outbound->ev);
  }
  FUNC_1 (VAR_5);
  VAR_2++;
  return 0;
}
