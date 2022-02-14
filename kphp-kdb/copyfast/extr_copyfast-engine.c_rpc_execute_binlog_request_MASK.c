
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_binlog_request {scalar_t__ binlog_position; int local_id; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int binlog_request_received; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct connection*,int ,scalar_t__) ;
 int FUNC_3 (struct connection*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4 (struct connection *VAR_4, struct rpc_binlog_request *VAR_5, int VAR_6) {
  if (VAR_3 >= 2) {
    FUNC_0 (VAR_2, "rpc_execute_binlog_request: remote_id = %d, len = %d\n", VAR_5->local_id, VAR_6);
  }
  if (VAR_6 != sizeof (struct rpc_binlog_request)) {
    return 0;
  }
  VAR_1->structured.binlog_request_received ++;
  if (!FUNC_1 (VAR_5->local_id)) {
    return FUNC_3 (VAR_4, VAR_5->local_id);
  }
  if (VAR_5->binlog_position >= VAR_0) {
    return 0;
  }
  FUNC_2 (VAR_4, VAR_5->local_id, VAR_5->binlog_position);
  return 0;
}
