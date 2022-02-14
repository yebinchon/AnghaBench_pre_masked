
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int inbound_packet_num; } ;
struct rpc_nonce {int dummy; } ;


 int FUNC_0 (struct rpc_server*,char*,int ) ;

__attribute__((used)) static int FUNC_1 (struct rpc_server *VAR_0, char *VAR_1, int VAR_2) {
  if (VAR_2 != sizeof (struct rpc_nonce) || VAR_0->inbound_packet_num != -1) {
    FUNC_0 (VAR_0, "Bad nonce packet", 0);
    return -1;
  }
  return 0;
}
