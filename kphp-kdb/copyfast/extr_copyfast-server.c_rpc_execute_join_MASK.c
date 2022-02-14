
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_join {int protocol_version; int binlog_position; int id; int port; scalar_t__ host; } ;
struct connection {scalar_t__ remote_ip; } ;


 long long FUNC_0 (scalar_t__,int ,int ,int ,struct connection*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct connection*,long long) ;
 scalar_t__ FUNC_3 (struct connection*,long long) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4 (struct connection *VAR_2, struct rpc_join *VAR_3, int VAR_4) {
  if (VAR_1 >= 2) {
    FUNC_1 (VAR_0, "rpc_execute_join: len = %d\n", VAR_4);
  }
  if (VAR_4 != sizeof (struct rpc_join)) {
    return 0;
  }
  long long VAR_5 = FUNC_0 (VAR_3->host ? VAR_3->host : VAR_2->remote_ip, VAR_3->port, VAR_3->id, VAR_3->binlog_position, VAR_2, VAR_3->protocol_version);
  if (FUNC_3 (VAR_2, VAR_5) < 0) {
    return -1;
  }
  return FUNC_2 (VAR_2, VAR_5);
}
