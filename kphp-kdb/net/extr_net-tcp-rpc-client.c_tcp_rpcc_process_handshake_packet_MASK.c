
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ip; } ;
struct TYPE_7__ {scalar_t__ ip; } ;
struct tcp_rpc_handshake_packet {TYPE_1__ peer_pid; TYPE_2__ sender_pid; } ;
struct tcp_rpc_data {int packet_num; scalar_t__ packet_type; int packet_len; TYPE_1__ remote_pid; } ;
struct raw_message {int dummy; } ;
struct process_id {int dummy; } ;
struct connection {int dummy; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tcp_rpc_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_4 (struct raw_message*,struct tcp_rpc_handshake_packet*,int) ;
 int FUNC_5 (struct connection*,int) ;

__attribute__((used)) static int FUNC_6 (struct connection *VAR_2, struct raw_message *VAR_3) {
  struct tcp_rpc_data *VAR_4 = FUNC_0(VAR_2);
  static struct tcp_rpc_handshake_packet VAR_5;
  if (VAR_4->packet_num != -1 || VAR_4->packet_type != VAR_1) {
    return -2;
  }
  if (VAR_4->packet_len != sizeof (struct tcp_rpc_handshake_packet)) {
    FUNC_5 (VAR_2, -3);
    return -3;
  }
  FUNC_1 (FUNC_4 (VAR_3, &VAR_5, VAR_4->packet_len) == VAR_4->packet_len);
  if (!FUNC_2 (&VAR_5.sender_pid, &VAR_4->remote_pid)) {
    FUNC_5 (VAR_2, -6);
    return -6;
  }
  if (!VAR_5.sender_pid.ip) {
    VAR_5.sender_pid.ip = VAR_4->remote_pid.ip;
  }
  FUNC_3 (&VAR_4->remote_pid, &VAR_5.sender_pid, sizeof (struct process_id));
  if (!FUNC_2 (&VAR_0, &VAR_5.peer_pid)) {
    FUNC_5 (VAR_2, -4);
    return -4;
  }
  return 0;
}
