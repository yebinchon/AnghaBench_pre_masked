
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_rpc_nonce_packet {int crypto_schema; int type; } ;
struct connection {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {int crypto_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tcp_rpc_nonce_packet*,int ,int) ;
 int FUNC_3 (struct connection*,int,struct tcp_rpc_nonce_packet*) ;

int FUNC_4 (struct connection *VAR_2) {
  if (!(FUNC_0(VAR_2)->crypto_flags & 1)) {
    return -1;
  }

  static struct tcp_rpc_nonce_packet VAR_3;
  FUNC_2 (&VAR_3, 0, sizeof (VAR_3));
  VAR_3.type = VAR_1;
  VAR_3.crypto_schema = VAR_0;

  FUNC_3 (VAR_2, sizeof (VAR_3), &VAR_3);

  FUNC_1 ((FUNC_0(VAR_2)->crypto_flags & 14) == 0);
  FUNC_0(VAR_2)->crypto_flags |= 4;

  return 1;
}
