
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int dummy; } ;


 scalar_t__ FUNC_0 (struct rpc_server*,double) ;
 int FUNC_1 (struct rpc_server*) ;
 int FUNC_2 (struct rpc_server*,char*,int ) ;

__attribute__((used)) static int FUNC_3 (struct rpc_server *VAR_0, double VAR_1) {
  if (FUNC_0 (VAR_0, VAR_1) > 0) {
    FUNC_2 (VAR_0, "Flush timeout", 0);
    FUNC_1 (VAR_0);
    return -1;
  }
  return 0;
}
