
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_rpc_target {struct rpc_target* x; } ;
struct TYPE_2__ {unsigned int ip; int port; } ;
struct rpc_target {TYPE_1__ PID; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 struct tree_rpc_target* FUNC_1 (int ,struct rpc_target*) ;

struct rpc_target *FUNC_2 (unsigned VAR_2, int VAR_3) {
  FUNC_0 ();
  static struct rpc_target VAR_4;
  VAR_4.PID.ip = VAR_2;
  if (VAR_4.PID.ip == 0x7f000001) {
    VAR_4.PID.ip = 0;
  }
  if (VAR_1 && !VAR_4.PID.ip) {
    VAR_4.PID.ip = VAR_1;
  }
  VAR_4.PID.port = VAR_3;
  struct tree_rpc_target *VAR_5 = FUNC_1 (VAR_0, &VAR_4);
  return VAR_5 ? VAR_5->x : 0;
}
