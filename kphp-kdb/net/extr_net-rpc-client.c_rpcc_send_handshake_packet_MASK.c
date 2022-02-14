
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ip; scalar_t__ port; } ;
struct rpcc_data {TYPE_1__ remote_pid; } ;
struct rpc_handshake_packet {int len; int seq_num; int crc32; int peer_pid; int sender_pid; scalar_t__ flags; int type; } ;
struct process_id {int dummy; } ;
struct connection {int remote_ip; int Out; scalar_t__ remote_port; int our_ip; } ;
struct TYPE_5__ {int (* flush_packet ) (struct connection*) ;} ;
typedef int P ;


 TYPE_1__ VAR_0 ;
 struct rpcc_data* FUNC_0 (struct connection*) ;
 TYPE_2__* FUNC_1 (struct connection*) ;
 int VAR_1 ;
 int FUNC_2 (struct rpc_handshake_packet*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_1__*,int) ;
 int FUNC_6 (struct rpc_handshake_packet*,int ,int) ;
 int FUNC_7 (struct connection*) ;
 int FUNC_8 (int *,struct rpc_handshake_packet*,int) ;

__attribute__((used)) static int FUNC_9 (struct connection *VAR_2) {
  struct rpcc_data *VAR_3 = FUNC_0 (VAR_2);
  static struct rpc_handshake_packet VAR_4;
  if (!VAR_0.ip) {
    FUNC_4 (VAR_2->our_ip);
    if (!VAR_0.ip) {
      VAR_0.ip = FUNC_3 ();
    }
  }
  FUNC_6 (&VAR_4, 0, sizeof (VAR_4));
  VAR_4.len = sizeof (VAR_4);
  VAR_4.seq_num = -1;
  VAR_4.type = VAR_1;
  VAR_4.flags = 0;
  if (!VAR_3->remote_pid.port) {
    VAR_3->remote_pid.ip = (VAR_2->remote_ip == 0x7f000001 ? 0 : VAR_2->remote_ip);
    VAR_3->remote_pid.port = VAR_2->remote_port;
  }
  FUNC_5 (&VAR_4.sender_pid, &VAR_0, sizeof (struct process_id));
  FUNC_5 (&VAR_4.peer_pid, &VAR_3->remote_pid, sizeof (struct process_id));
  VAR_4.crc32 = FUNC_2 (&VAR_4, sizeof (VAR_4) - 4);
  FUNC_8 (&VAR_2->Out, &VAR_4, sizeof (VAR_4));
  FUNC_1(VAR_2)->flush_packet (VAR_2);

  return 0;
}
