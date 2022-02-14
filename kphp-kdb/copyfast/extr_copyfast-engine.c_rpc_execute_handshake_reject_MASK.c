
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_handshake_reject {int local_id; } ;
struct relative {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int handshake_reject_received; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct relative*,int) ;
 struct relative* FUNC_1 (struct connection*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (int,char*,int ,int) ;

int FUNC_5 (struct connection *VAR_1, struct rpc_handshake_reject *VAR_2, int VAR_3) {
  FUNC_4 (2, "rpc_execute_handshake_reject: remote_id = %lld, len = %d\n", VAR_2->local_id, VAR_3);
  if (VAR_3 != sizeof (struct rpc_handshake_reject)) {
    return 0;
  }
  VAR_0->structured.handshake_reject_received ++;
  if (!FUNC_2 (VAR_2->local_id)) {
    struct relative *VAR_4 = FUNC_1 (VAR_1);
    if (VAR_4) {
      FUNC_0 (VAR_4, 1);
    }
    return 0;
  }
  return FUNC_3 (VAR_1);
}
