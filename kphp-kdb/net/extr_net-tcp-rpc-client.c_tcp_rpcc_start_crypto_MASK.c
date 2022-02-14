
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_rpc_data {int nonce_time; int nonce; } ;
struct TYPE_4__ {scalar_t__ total_bytes; } ;
struct TYPE_3__ {scalar_t__ total_bytes; } ;
struct connection {int our_ipv6; int our_port; int our_ip; int remote_ipv6; int remote_port; int remote_ip; TYPE_2__ out; TYPE_1__ in; scalar_t__ crypto; } ;
struct aes_key_data {int dummy; } ;
typedef int aes_keys ;


 struct tcp_rpc_data* FUNC_0 (struct connection*) ;
 scalar_t__ FUNC_1 (struct aes_key_data*,int,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct connection*,struct aes_key_data*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,int) ;

int FUNC_5 (struct connection *VAR_0, char *VAR_1, int VAR_2) {
  struct tcp_rpc_data *VAR_3 = FUNC_0(VAR_0);

  FUNC_4 (2, "rpcc_start_crypto: key_select = %d\n", VAR_2);

  if (VAR_0->crypto) {
    return -1;
  }

  if (VAR_0->in.total_bytes || VAR_0->out.total_bytes || !VAR_3->nonce_time) {
    return -1;
  }

  if (!VAR_2 || VAR_2 != FUNC_3 ()) {
    return -1;
  }

  struct aes_key_data VAR_4;

  if (FUNC_1 (&VAR_4, 1, VAR_1, VAR_3->nonce, VAR_3->nonce_time, VAR_0->remote_ip, VAR_0->remote_port, VAR_0->remote_ipv6, VAR_0->our_ip, VAR_0->our_port, VAR_0->our_ipv6) < 0) {
    return -1;
  }

  if (FUNC_2 (VAR_0, &VAR_4, sizeof (VAR_4)) < 0) {
    return -1;
  }

  return 1;
}
