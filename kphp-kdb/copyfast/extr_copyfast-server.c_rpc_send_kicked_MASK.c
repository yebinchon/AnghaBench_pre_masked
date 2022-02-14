
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_kicked {int dummy; } ;
struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rpc_kicked*,int,struct connection*,int ) ;
 int FUNC_2 (struct rpc_kicked*,struct connection*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3 (struct connection *VAR_4) {
  if (VAR_3 >= 2) {
    FUNC_0 (VAR_2, "rpc_send_kicked\n");
  }
  struct rpc_kicked *VAR_5 = (struct rpc_kicked *)VAR_0;
  FUNC_1 (VAR_5, sizeof (struct rpc_kicked), VAR_4, VAR_1);
  return FUNC_2 (VAR_5, VAR_4);
}
