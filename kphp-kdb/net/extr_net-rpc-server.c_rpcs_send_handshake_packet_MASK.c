
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pid; } ;
struct rpcs_data {TYPE_1__ remote_pid; } ;
struct rpc_handshake_packet {int len; int seq_num; int crc32; int peer_pid; int sender_pid; scalar_t__ flags; int type; } ;
struct process_id {int dummy; } ;
struct connection {int Out; } ;
struct TYPE_5__ {int (* flush_packet ) (struct connection*) ;} ;
typedef int P ;


 TYPE_1__ VAR_0 ;
 struct rpcs_data* FUNC_0 (struct connection*) ;
 TYPE_2__* FUNC_1 (struct connection*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rpc_handshake_packet*,int) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (struct rpc_handshake_packet*,int ,int) ;
 int FUNC_6 (struct connection*) ;
 int FUNC_7 (int *,struct rpc_handshake_packet*,int) ;

__attribute__((used)) static int FUNC_8 (struct connection *VAR_2) {
  struct rpcs_data *VAR_3 = FUNC_0(VAR_2);
  static struct rpc_handshake_packet VAR_4;
  FUNC_2 (VAR_0.pid);
  FUNC_5 (&VAR_4, 0, sizeof (VAR_4));
  VAR_4.len = sizeof (VAR_4);
  VAR_4.seq_num = -1;
  VAR_4.type = VAR_1;
  VAR_4.flags = 0;
  FUNC_4 (&VAR_4.sender_pid, &VAR_0, sizeof (struct process_id));
  FUNC_4 (&VAR_4.peer_pid, &VAR_3->remote_pid, sizeof (struct process_id));
  VAR_4.crc32 = FUNC_3 (&VAR_4, sizeof (VAR_4) - 4);
  FUNC_7 (&VAR_2->Out, &VAR_4, sizeof (VAR_4));
  FUNC_1(VAR_2)->flush_packet (VAR_2);

  return 0;
}
