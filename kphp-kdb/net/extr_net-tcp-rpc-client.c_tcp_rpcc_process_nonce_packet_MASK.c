
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_rpc_nonce_packet {int crypto_schema; int key_select; int crypto_nonce; scalar_t__ crypto_ts; } ;
struct tcp_rpc_data {int packet_num; scalar_t__ packet_type; int packet_len; int crypto_flags; scalar_t__ nonce_time; } ;
struct raw_message {int dummy; } ;
struct TYPE_3__ {int total_bytes; } ;
struct connection {TYPE_1__ out_p; } ;
struct TYPE_4__ {int (* rpc_start_crypto ) (struct connection*,int ,int ) ;} ;




 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct connection*) ;
 struct tcp_rpc_data* FUNC_1 (struct connection*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct raw_message*,struct tcp_rpc_nonce_packet*,int) ;
 int FUNC_6 (struct connection*,int ,int ) ;
 int FUNC_7 (int,char*,int,...) ;

__attribute__((used)) static int FUNC_8 (struct connection *VAR_1, struct raw_message *VAR_2) {
  struct tcp_rpc_data *VAR_3 = FUNC_1(VAR_1);
  static struct tcp_rpc_nonce_packet VAR_4;
  int VAR_5;

  if (VAR_3->packet_num != -2 || VAR_3->packet_type != VAR_0) {
    return -2;
  }
  if (VAR_3->packet_len != sizeof (struct tcp_rpc_nonce_packet)) {
    return -3;
  }

  FUNC_3 (FUNC_5 (VAR_2, &VAR_4, VAR_3->packet_len) == VAR_3->packet_len);

  FUNC_7 (2, "Processing nonce packet, crypto schema: %d, key select: %d\n", VAR_4.crypto_schema, VAR_4.key_select);

  switch (VAR_4.crypto_schema) {
  case 128:
    if (VAR_4.key_select) {
      return -3;
    }
    if (VAR_3->crypto_flags & 1) {
      if (VAR_3->crypto_flags & 2) {
        FUNC_3 (!VAR_1->out_p.total_bytes);
      }
      VAR_3->crypto_flags = 1;
    } else {
      return -5;
    }
    break;
  case 129:
    if (!VAR_4.key_select || VAR_4.key_select != FUNC_4 ()) {
      return -3;
    }
    if (!(VAR_3->crypto_flags & 2)) {
      return -5;
    }
    if (FUNC_2 (VAR_4.crypto_ts - VAR_3->nonce_time) > 30) {
      return -6;
    }
    VAR_5 = FUNC_0(VAR_1)->rpc_start_crypto (VAR_1, VAR_4.crypto_nonce, VAR_4.key_select);
    if (VAR_5 < 0) {
      return -6;
    }
    break;
  default:
    return -4;
  }
  FUNC_7 (2, "Processed nonce packet, crypto flags = %d\n", VAR_3->crypto_flags);
  return 0;
}
