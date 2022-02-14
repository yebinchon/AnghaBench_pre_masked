
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_server {scalar_t__ inbound_packet_num; scalar_t__ port; int host; } ;
struct TYPE_5__ {scalar_t__ port; int ip; } ;
struct TYPE_4__ {scalar_t__ port; scalar_t__ ip; } ;
struct rpc_handshake {TYPE_2__ sender_pid; TYPE_1__ peer_pid; } ;
struct TYPE_6__ {scalar_t__ port; scalar_t__ ip; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (struct rpc_server*,char*,int ) ;

__attribute__((used)) static int FUNC_1 (struct rpc_server *VAR_1, char *VAR_2, int VAR_3) {
  if (VAR_3 != sizeof (struct rpc_handshake) || VAR_1->inbound_packet_num != 0) {
    FUNC_0 (VAR_1, "Bad handshake packet", 0);
    return -1;
  }
  struct rpc_handshake *VAR_4 = (void *)VAR_2;
  if ((VAR_4->peer_pid.port != VAR_0.port) || (VAR_4->peer_pid.ip != VAR_0.ip && VAR_4->peer_pid.ip && VAR_0.ip) || VAR_4->sender_pid.port != VAR_1->port || (VAR_4->sender_pid.ip != VAR_1->host && VAR_4->sender_pid.ip && VAR_1->host && VAR_1->host != 0x7f000001)) {
    FUNC_0 (VAR_1, "Bad pid in handshake packet", 0);
    return -1;
  }
  return 0;
}
