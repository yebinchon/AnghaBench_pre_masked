
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_handshake {int local_id; int binlog_position; int port; } ;
struct node {int id; int port; int host; } ;
struct connection {int last_response_time; int remote_ip; } ;
struct TYPE_3__ {int handshake_received; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct node,struct connection*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct connection*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*,int ,int) ;

int FUNC_5 (struct connection *VAR_2, struct rpc_handshake *VAR_3, int VAR_4) {
  FUNC_4 (2, "rpc_execute_handshake: remote_id = %lld, len = %d\n", VAR_3->local_id, VAR_4);
  if (VAR_4 != sizeof (struct rpc_handshake)) {
    return 0;
  }
  struct node VAR_5;
  VAR_5.host = VAR_2->remote_ip;
  VAR_5.port = VAR_3->port;
  VAR_5.id = VAR_3->local_id;
  FUNC_0 (VAR_5, VAR_2);
  FUNC_1 (FUNC_3 (VAR_3->local_id, VAR_3->binlog_position) >= 1);
  VAR_2->last_response_time = VAR_1;
  VAR_0->structured.handshake_received ++;
  return FUNC_2 (VAR_2, VAR_3->local_id);
}
