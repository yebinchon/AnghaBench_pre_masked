
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_update_stats {int dummy; } ;
struct rpc_stats {int dummy; } ;
struct rpc_join_old {int dummy; } ;
struct rpc_join {int dummy; } ;
struct rpc_children_request {int dummy; } ;
struct connection {int fd; int In; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct connection*,struct rpc_children_request*,int) ;
 int FUNC_5 (struct connection*,struct rpc_join*,int) ;
 int FUNC_6 (struct connection*,struct rpc_join_old*,int) ;
 int FUNC_7 (struct connection*,struct rpc_stats*,int) ;
 int FUNC_8 (struct connection*,struct rpc_update_stats*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_9 (struct connection *VAR_5, int VAR_6, int VAR_7) {
  if (VAR_4 > 0) {
    FUNC_1 (VAR_3, "rpcs_execute: fd=%d, op=%x, len=%d\n", VAR_5->fd, VAR_6, VAR_7);
  }
  if (VAR_7 > VAR_0) {
    return VAR_2;
  }

  FUNC_0 (FUNC_2 (&VAR_5->In, &VAR_1, VAR_7) == VAR_7);
  FUNC_0 (FUNC_3 (VAR_1));


  switch (VAR_6) {
  case 131:
    return FUNC_5 (VAR_5, (struct rpc_join *)VAR_1, VAR_7);
    break;

  case 130:
    return FUNC_6 (VAR_5, (struct rpc_join_old *)VAR_1, VAR_7);
    break;

  case 132:
    return FUNC_4 (VAR_5, (struct rpc_children_request *)VAR_1, VAR_7);
    break;

  case 129:
    return FUNC_7 (VAR_5, (struct rpc_stats *)VAR_1, VAR_7);
    break;

  case 128:
    return FUNC_8 (VAR_5, (struct rpc_update_stats *)VAR_1, VAR_7);
    break;
  }
  return 0;
}
