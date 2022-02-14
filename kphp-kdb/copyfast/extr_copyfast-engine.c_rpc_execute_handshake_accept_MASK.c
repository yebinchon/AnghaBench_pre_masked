
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_handshake_accept {int binlog_position; int local_id; } ;
struct connection {int last_response_time; } ;
struct TYPE_3__ {int handshake_accept_received; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct connection*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*,int ,int) ;

int FUNC_5 (struct connection *VAR_2, struct rpc_handshake_accept *VAR_3, int VAR_4) {
  FUNC_4 (2, "rpc_execute_handshake_accept: remote_id = %lld, len = %d\n", VAR_3->local_id, VAR_4);
  if (VAR_4 != sizeof (struct rpc_handshake_accept)) {
    return 0;
  }
  VAR_0->structured.handshake_accept_received ++;
  if (!FUNC_1 (VAR_3->local_id)) {
    return FUNC_2 (VAR_2, VAR_3->local_id);
  }
  VAR_2->last_response_time = VAR_1;
  FUNC_0 (FUNC_3 (VAR_3->local_id, VAR_3->binlog_position) >= 1);
  return 0;
}
