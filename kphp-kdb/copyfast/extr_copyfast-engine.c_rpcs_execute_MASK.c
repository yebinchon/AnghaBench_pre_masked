
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcs_op {int remote_id; } ;
struct rpc_handshake_reject {int dummy; } ;
struct rpc_handshake_accept {int dummy; } ;
struct rpc_handshake {int dummy; } ;
struct rpc_binlog_request {int dummy; } ;
struct rpc_binlog_info {int dummy; } ;
struct rpc_binlog_data {int dummy; } ;
struct connection {int fd; int In; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;






 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int *,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct connection*,struct rpc_binlog_data*,int) ;
 int FUNC_6 (struct connection*,struct rpc_binlog_info*,int) ;
 int FUNC_7 (struct connection*,struct rpc_binlog_request*,int) ;
 int FUNC_8 (struct connection*,struct rpc_handshake*,int) ;
 int FUNC_9 (struct connection*,struct rpc_handshake_accept*,int) ;
 int FUNC_10 (struct connection*,struct rpc_handshake_reject*,int) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_11 (struct connection *VAR_7, int VAR_8, int VAR_9) {
  if (VAR_6 > 1) {
    FUNC_2 (VAR_5, "rpcs_execute: fd=%d, op=%x, len=%d\n", VAR_7->fd, VAR_8, VAR_9);
  }
  if (VAR_9 > VAR_1) {
    return VAR_4;
  }

  FUNC_0 (FUNC_3 (&VAR_7->In, &VAR_3, VAR_9) == VAR_9);
  FUNC_0 (FUNC_4 (VAR_3));

  if (FUNC_1 (((struct rpcs_op *)VAR_3)->remote_id) < 0 || (((struct rpcs_op *)VAR_3)->remote_id & VAR_0) != (VAR_2 & VAR_0)) {
    return 0;
  }

  switch (VAR_8) {
  case 130:
    return FUNC_8 (VAR_7, (struct rpc_handshake *)VAR_3, VAR_9);
  case 129:
    return FUNC_9 (VAR_7, (struct rpc_handshake_accept *)VAR_3, VAR_9);
  case 128:
    return FUNC_10 (VAR_7, (struct rpc_handshake_reject *)VAR_3, VAR_9);
  case 132:
    return FUNC_6 (VAR_7, (struct rpc_binlog_info *)VAR_3, VAR_9);
  case 131:
    return FUNC_7 (VAR_7, (struct rpc_binlog_request *)VAR_3, VAR_9);
  case 133:
    return FUNC_5 (VAR_7, (struct rpc_binlog_data *)VAR_3, VAR_9);


  }

  return 0;
}
