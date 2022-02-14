
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_rpc_target {struct rpc_target* x; } ;
struct TYPE_2__ {unsigned int ip; int port; } ;
struct rpc_target {struct conn_target* target; TYPE_1__ PID; } ;
struct conn_target {int port; } ;


 int FUNC_0 (int) ;
 struct rpc_target* FUNC_1 (TYPE_1__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 struct tree_rpc_target* FUNC_3 (int ,struct rpc_target*) ;

void FUNC_4 (struct conn_target *VAR_2, unsigned VAR_3) {
  FUNC_2 ();
  static struct rpc_target VAR_4;
  VAR_4.PID.ip = VAR_3;
  if (!VAR_4.PID.ip) { return; }
  if (VAR_4.PID.ip == 0x7f000001) {
    VAR_4.PID.ip = 0;
  }
  if (VAR_1 && !VAR_4.PID.ip) {
    VAR_4.PID.ip = VAR_1;
  }
  VAR_4.PID.port = VAR_2->port;
  struct tree_rpc_target *VAR_5 = FUNC_3 (VAR_0, &VAR_4);
  struct rpc_target *VAR_6 = VAR_5 ? VAR_5->x : 0;
  if (!VAR_6) {
    VAR_6 = FUNC_1 (VAR_4.PID);
  }
  FUNC_0 (!VAR_6->target || VAR_6->target == VAR_2);
  VAR_6->target = VAR_2;
}
