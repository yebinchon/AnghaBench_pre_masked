
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int dummy; } ;
struct rpc_handshake_error {int error_code; } ;


 int FUNC_0 (struct rpc_server*,char*,int ) ;

__attribute__((used)) static int FUNC_1 (struct rpc_server *VAR_0, char *VAR_1, int VAR_2) {
  FUNC_0 (VAR_0, "Rpc error", ((struct rpc_handshake_error *)VAR_1)->error_code);
  return -1;
}
