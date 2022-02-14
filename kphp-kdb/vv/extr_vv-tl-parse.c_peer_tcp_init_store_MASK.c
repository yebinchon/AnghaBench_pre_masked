
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_peer {int PID; } ;
struct rpc_target {int dummy; } ;
struct connection {int dummy; } ;


 struct connection* FUNC_0 (struct rpc_target*,int *) ;
 struct rpc_target* FUNC_1 (int *) ;
 int FUNC_2 (struct connection*,long long) ;

int FUNC_3 (struct tl_peer *VAR_0, long long VAR_1) {
  struct rpc_target *VAR_2 = FUNC_1 (&VAR_0->PID);
  if (!VAR_2) {
    return -1;
  }
  struct connection *VAR_3 = FUNC_0 (VAR_2, &VAR_0->PID);
  if (!VAR_3) {
    return -1;
  }
  FUNC_2 (VAR_3, VAR_1);
  return 0;
}
