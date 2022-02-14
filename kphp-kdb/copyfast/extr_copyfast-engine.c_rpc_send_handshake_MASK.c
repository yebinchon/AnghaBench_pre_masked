
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_handshake {long long remote_id; int port; int binlog_position; int local_id; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int handshake_sent; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 long long FUNC_0 (struct connection*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct rpc_handshake*,int,struct connection*,int ) ;
 int FUNC_2 (struct rpc_handshake*,struct connection*) ;
 int FUNC_3 (int,char*,long long) ;

int FUNC_4 (struct connection *VAR_6) {
  long long VAR_7 = FUNC_0 (VAR_6);
  FUNC_3 (2, "rpc_send_handshake: remote_id = %lld\n", VAR_7);
  if (!VAR_7) {
    return 0;
  }
  struct rpc_handshake *VAR_8 = (struct rpc_handshake *)VAR_2;
  if (FUNC_1 (VAR_8, sizeof (struct rpc_handshake), VAR_6, VAR_3) < 0) {
    return -1;
  }
  VAR_8->local_id = VAR_1;
  VAR_8->remote_id = VAR_7;
  VAR_8->binlog_position = VAR_0;
  VAR_8->port = VAR_5;
  VAR_4->structured.handshake_sent ++;
  return FUNC_2 (VAR_8, VAR_6);
}
