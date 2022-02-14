
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ip; } ;
struct rpc_target {TYPE_1__ PID; } ;


 struct rpc_target** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1 (struct rpc_target *VAR_2) {
  if (!VAR_2->PID.ip) {
    FUNC_0 (VAR_1 < 10000);
    VAR_0[VAR_1 ++] = VAR_2;
  }
}
