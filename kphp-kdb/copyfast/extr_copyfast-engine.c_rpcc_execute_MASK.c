
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcc_op {int id; } ;
struct rpc_request_update_stats {int dummy; } ;
struct rpc_kicked {int dummy; } ;
struct rpc_join_ack {int dummy; } ;
struct rpc_delays {int dummy; } ;
struct rpc_children_answer {int dummy; } ;
struct connection {int fd; int In; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int FUNC_4 (int *,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct connection*,struct rpc_children_answer*,int) ;
 int FUNC_7 (struct connection*,struct rpc_delays*,int) ;
 int FUNC_8 (struct connection*,struct rpc_join_ack*,int) ;
 int FUNC_9 (struct connection*,struct rpc_kicked*,int) ;
 int FUNC_10 (struct connection*,struct rpc_request_update_stats*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int,char*,int) ;

int FUNC_12 (struct connection *VAR_5, int VAR_6, int VAR_7) {
  if (VAR_4 > 1) {
    FUNC_3 (VAR_3, "rpcc_execute: fd=%d, op=%x, len=%d\n", VAR_5->fd, VAR_6, VAR_7);
  }
  if (VAR_7 > VAR_0) {
    return VAR_2;
  }

  FUNC_0 (FUNC_4 (&VAR_5->In, &VAR_1, VAR_7) == VAR_7);
  FUNC_0 (FUNC_5 (VAR_1));


  if ((VAR_6 != 130 || FUNC_2 (((struct rpcc_op *)VAR_1)->id) < 0) && FUNC_1 (((struct rpcc_op *)VAR_1)->id) < 0) {
    return 0;
  }

  FUNC_11 (6, "%x\n", VAR_6);

  switch (VAR_6) {
  case 130:
    return FUNC_8 (VAR_5, (struct rpc_join_ack *)VAR_1, VAR_7);
  case 132:
    return FUNC_6 (VAR_5, (struct rpc_children_answer *)VAR_1, VAR_7);
  case 129:
    return FUNC_9 (VAR_5, (struct rpc_kicked *)VAR_1, VAR_7);
  case 128:
    return FUNC_10 (VAR_5, (struct rpc_request_update_stats *)VAR_1, VAR_7);
  case 131:
    return FUNC_7 (VAR_5, (struct rpc_delays *)VAR_1, VAR_7);
  }
  return 0;
}
