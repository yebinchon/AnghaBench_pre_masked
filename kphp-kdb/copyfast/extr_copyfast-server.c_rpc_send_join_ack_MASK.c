
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_join_ack {long long id; } ;
struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rpc_join_ack*,int,struct connection*,int ) ;
 int FUNC_2 (struct rpc_join_ack*,struct connection*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3 (struct connection *VAR_4, long long VAR_5) {
  if (VAR_3 >= 2) {
    FUNC_0 (VAR_2, "rpc_send_join_ack\n");
  }
  struct rpc_join_ack *VAR_6 = (struct rpc_join_ack *)VAR_0;
  FUNC_1 (VAR_6, sizeof (struct rpc_join_ack), VAR_4, VAR_1);
  VAR_6->id = VAR_5;
  return FUNC_2 (VAR_6, VAR_4);
}
