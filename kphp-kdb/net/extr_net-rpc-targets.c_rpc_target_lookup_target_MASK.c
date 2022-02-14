
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_rpc_target {struct rpc_target* x; } ;
struct TYPE_2__ {int ip; int port; } ;
struct rpc_target {TYPE_1__ PID; } ;
struct conn_target {int custom_field; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct tree_rpc_target* FUNC_1 (int ,struct rpc_target*) ;

struct rpc_target *FUNC_2 (struct conn_target *VAR_2) {
  if (VAR_2->custom_field == -1) {
    return 0;
  }
  FUNC_0 ();
  static struct rpc_target VAR_3;
  VAR_3.PID.ip = VAR_2->custom_field;
  if (VAR_3.PID.ip == 0x7f000001) {
    VAR_3.PID.ip = 0;
  }
  if (VAR_1 && !VAR_3.PID.ip) {
    VAR_3.PID.ip = VAR_1;
  }
  VAR_3.PID.port = VAR_2->port;
  struct tree_rpc_target *VAR_4 = FUNC_1 (VAR_0, &VAR_3);
  return VAR_4 ? VAR_4->x : 0;
}
