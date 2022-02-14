
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int utime; int pid; int port; int ip; } ;
struct tcp_rpc_handshake_packet {TYPE_2__ peer_pid; int sender_pid; } ;
struct tcp_rpc_data {int packet_num; scalar_t__ packet_type; int packet_len; int remote_pid; } ;
struct raw_message {int dummy; } ;
struct process_id {int dummy; } ;
struct connection {int our_port; int our_ip; } ;
struct TYPE_4__ {int utime; int pid; int port; scalar_t__ ip; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tcp_rpc_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct raw_message*,struct tcp_rpc_handshake_packet*,int) ;
 int FUNC_7 (struct connection*,int) ;
 int FUNC_8 (int,char*,scalar_t__,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9 (struct connection *VAR_2, struct raw_message *VAR_3) {
  struct tcp_rpc_data *VAR_4 = FUNC_0(VAR_2);
  static struct tcp_rpc_handshake_packet VAR_5;
  if (!VAR_0.ip) {
    FUNC_3 (VAR_2->our_ip, VAR_2->our_port);
    if (!VAR_0.ip) {
      VAR_0.ip = FUNC_2 ();
    }
  }
  if (VAR_4->packet_num != -1 || VAR_4->packet_type != VAR_1) {
    return -2;
  }
  if (VAR_4->packet_len != sizeof (struct tcp_rpc_handshake_packet)) {
    FUNC_7 (VAR_2, -3);
    return -3;
  }
  FUNC_1 (FUNC_6 (VAR_3, &VAR_5, VAR_4->packet_len) == VAR_4->packet_len);
  FUNC_5 (&VAR_4->remote_pid, &VAR_5.sender_pid, sizeof (struct process_id));
  if (!FUNC_4 (&VAR_0, &VAR_5.peer_pid)) {
    FUNC_8 (1, "PID mismatch during handshake: local %08x:%d:%d:%d, remote %08x:%d:%d:%d\n",
                 VAR_0.ip, VAR_0.port, VAR_0.pid, VAR_0.utime, VAR_5.peer_pid.ip, VAR_5.peer_pid.port, VAR_5.peer_pid.pid, VAR_5.peer_pid.utime);
    FUNC_7 (VAR_2, -4);
    return -4;
  }
  return 0;
}
