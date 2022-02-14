
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_app_struct {int dummy; } ;
typedef scalar_t__ rpc_app_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

rpc_app_t FUNC_2() {
  rpc_app_t VAR_0 = (rpc_app_t)FUNC_0(sizeof(struct rpc_app_struct));
  if (VAR_0) {
    FUNC_1(VAR_0, 0, sizeof(struct rpc_app_struct));
  }
  return VAR_0;
}
