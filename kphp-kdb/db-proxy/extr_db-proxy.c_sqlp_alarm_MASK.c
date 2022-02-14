
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int total_bytes; int unprocessed_bytes; } ;
struct TYPE_3__ {int total_bytes; int unprocessed_bytes; } ;
struct connection {int fd; int pending_queries; int status; int flags; TYPE_2__ Out; TYPE_1__ In; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int,int,int,...) ;
 int FUNC_2 (struct connection*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3 (struct connection *VAR_3) {
  if (VAR_2 > 1) {
    FUNC_1 (VAR_1, "proxy_mysql_server connection %d timeout alarm, %d queries pending, status=%d\n", VAR_3->fd, VAR_3->pending_queries, VAR_3->status);
  }
  if (VAR_3->status != VAR_0) {
    FUNC_1 (VAR_1, "connection %d (IN: %d+%d, OUT: %d+%d, FLAGS: %d) is in state %d, conn_wait_net expected!\n", VAR_3->fd, VAR_3->In.total_bytes, VAR_3->In.unprocessed_bytes, VAR_3->Out.total_bytes, VAR_3->Out.unprocessed_bytes, VAR_3->flags, VAR_3->status);
  }
  FUNC_0 (VAR_3->status == VAR_0);

  return FUNC_2 (VAR_3);





}
