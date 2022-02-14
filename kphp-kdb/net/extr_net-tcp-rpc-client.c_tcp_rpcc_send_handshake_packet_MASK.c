
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_rpc_handshake_packet {int peer_pid; int sender_pid; scalar_t__ flags; int type; } ;
struct TYPE_4__ {int ip; scalar_t__ port; } ;
struct tcp_rpc_data {TYPE_1__ remote_pid; } ;
struct process_id {int dummy; } ;
struct connection {int remote_ip; scalar_t__ remote_port; int our_ip; } ;
struct TYPE_5__ {int (* flush_packet ) (struct connection*) ;} ;
typedef int P ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct connection*) ;
 struct tcp_rpc_data* FUNC_1 (struct connection*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (struct tcp_rpc_handshake_packet*,int ,int) ;
 int FUNC_6 (struct connection*) ;
 int FUNC_7 (struct connection*,int,struct tcp_rpc_handshake_packet*) ;

__attribute__((used)) static int FUNC_8 (struct connection *VAR_2) {
  struct tcp_rpc_data *VAR_3 = FUNC_1 (VAR_2);
  static struct tcp_rpc_handshake_packet VAR_4;
  if (!VAR_0.ip) {
    FUNC_3 (VAR_2->our_ip);
    if (!VAR_0.ip) {
      VAR_0.ip = FUNC_2 ();
    }
  }
  FUNC_5 (&VAR_4, 0, sizeof (VAR_4));
  VAR_4.type = VAR_1;
  VAR_4.flags = 0;
  if (!VAR_3->remote_pid.port) {
    VAR_3->remote_pid.ip = (VAR_2->remote_ip == 0x7f000001 ? 0 : VAR_2->remote_ip);
    VAR_3->remote_pid.port = VAR_2->remote_port;
  }
  FUNC_4 (&VAR_4.sender_pid, &VAR_0, sizeof (struct process_id));
  FUNC_4 (&VAR_4.peer_pid, &VAR_3->remote_pid, sizeof (struct process_id));

  FUNC_7 (VAR_2, sizeof (VAR_4), &VAR_4);
  FUNC_0(VAR_2)->flush_packet (VAR_2);

  return 0;
}
