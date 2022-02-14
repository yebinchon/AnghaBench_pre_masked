
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_rpc_target {struct rpc_target* x; } ;
struct process_id {scalar_t__ ip; } ;
struct rpc_target {struct process_id PID; } ;


 int FUNC_0 (struct process_id*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 struct tree_rpc_target* FUNC_2 (int ,struct rpc_target*) ;

struct rpc_target *FUNC_3 (struct process_id *VAR_2) {
  FUNC_0 (VAR_2);
  FUNC_1 ();
  static struct rpc_target VAR_3;
  VAR_3.PID = *VAR_2;
  if (VAR_1 && !VAR_3.PID.ip) {
    VAR_3.PID.ip = VAR_1;
  }
  struct tree_rpc_target *VAR_4 = FUNC_2 (VAR_0, &VAR_3);
  return VAR_4 ? VAR_4->x : 0;
}
