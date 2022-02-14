
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_handshake_reject {long long remote_id; int local_id; } ;
struct connection {int dummy; } ;
struct TYPE_3__ {int handshake_reject_sent; } ;
struct TYPE_4__ {TYPE_1__ structured; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_0 (struct rpc_handshake_reject*,int,struct connection*,int ) ;
 int FUNC_1 (struct rpc_handshake_reject*,struct connection*) ;
 int FUNC_2 (int,char*,long long) ;

int FUNC_3 (struct connection *VAR_4, long long VAR_5) {
  FUNC_2 (2, "rpc_send_handshake_reject: remote_id = %lld\n", VAR_5);
  if (!VAR_5) {
    return 0;
  }
  struct rpc_handshake_reject *VAR_6 = (struct rpc_handshake_reject *)VAR_1;
  if (FUNC_0 (VAR_6, sizeof (struct rpc_handshake_reject), VAR_4, VAR_2) < 0) {
    return -1;
  }
  VAR_6->local_id = VAR_0;
  VAR_6->remote_id = VAR_5;
  VAR_3->structured.handshake_reject_sent ++;
  return FUNC_1 (VAR_6, VAR_4);
}
