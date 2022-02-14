
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcc_data {int packet_num; scalar_t__ packet_type; int packet_len; int crypto_flags; scalar_t__ nonce_time; } ;
struct rpc_nonce_packet {int crypto_schema; int key_select; int crypto_nonce; scalar_t__ crypto_ts; } ;
struct connection {int Out; int In; } ;
struct TYPE_2__ {int (* rpc_start_crypto ) (struct connection*,int ,int ) ;} ;


 struct rpcc_data* FUNC_0 (struct connection*) ;
 TYPE_1__* FUNC_1 (struct connection*) ;


 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,struct rpc_nonce_packet*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct connection*,int ,int ) ;
 int FUNC_8 (int,char*,int,...) ;

__attribute__((used)) static int FUNC_9 (struct connection *VAR_1) {
  struct rpcc_data *VAR_2 = FUNC_0(VAR_1);
  static struct rpc_nonce_packet VAR_3;
  int VAR_4;

  if (VAR_2->packet_num != -2 || VAR_2->packet_type != VAR_0) {
    return -2;
  }
  if (VAR_2->packet_len != sizeof (struct rpc_nonce_packet)) {
    return -3;
  }
  FUNC_3 (FUNC_5 (&VAR_1->In, &VAR_3, VAR_2->packet_len) == VAR_2->packet_len);

  FUNC_8 (2, "Processing nonce packet, crypto schema: %d, key select: %d\n", VAR_3.crypto_schema, VAR_3.key_select);

  switch (VAR_3.crypto_schema) {
  case 128:
    if (VAR_3.key_select) {
      return -3;
    }
    if (VAR_2->crypto_flags & 1) {





      VAR_2->crypto_flags = 1;
    } else {
      return -5;
    }
    break;
  default:
    return -4;
  }
  FUNC_8 (2, "Processed nonce packet, crypto flags = %d\n", VAR_2->crypto_flags);
  return 0;
}
