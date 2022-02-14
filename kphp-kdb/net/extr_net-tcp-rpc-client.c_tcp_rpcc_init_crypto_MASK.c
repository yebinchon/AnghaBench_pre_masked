
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_rpc_nonce_packet {int crypto_schema; int key_select; int type; int crypto_ts; int crypto_nonce; } ;
struct connection {int crypto; } ;
typedef int buf ;
struct TYPE_2__ {int crypto_flags; int nonce_time; int nonce; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct tcp_rpc_nonce_packet*,int ,int) ;
 int FUNC_6 (struct connection*,int,struct tcp_rpc_nonce_packet*) ;
 int FUNC_7 (struct connection*) ;
 int FUNC_8 (int ) ;

int FUNC_9 (struct connection *VAR_2) {
  if (!(FUNC_0(VAR_2)->crypto_flags & 2)) {
    return FUNC_7 (VAR_2);
  }

  FUNC_0(VAR_2)->nonce_time = FUNC_8 (0);

  FUNC_1 (FUNC_0(VAR_2)->nonce);

  static struct tcp_rpc_nonce_packet VAR_3;
  FUNC_5 (&VAR_3, 0, sizeof (VAR_3));
  FUNC_4 (VAR_3.crypto_nonce, FUNC_0(VAR_2)->nonce, 16);
  VAR_3.crypto_ts = FUNC_0(VAR_2)->nonce_time;
  VAR_3.type = VAR_1;
  VAR_3.key_select = FUNC_3 ();
  VAR_3.crypto_schema = VAR_0;

  FUNC_6 (VAR_2, sizeof (VAR_3), &VAR_3);

  FUNC_2 ((FUNC_0(VAR_2)->crypto_flags & 14) == 2);
  FUNC_0(VAR_2)->crypto_flags |= 4;

  FUNC_2 (!VAR_2->crypto);







  return 1;
}
