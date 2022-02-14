
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct crypto_akcipher {int dummy; } ;
struct TYPE_9__ {int dst; int src_len; int src; int mod_len; int * mod; int exp_len; int * exp; int key_size; } ;
struct TYPE_10__ {TYPE_3__ rsa; } ;
struct TYPE_11__ {TYPE_4__ u; int engine; int entry; } ;
struct ccp_rsa_req_ctx {TYPE_5__ cmd; } ;
struct TYPE_7__ {int n_len; int n_sg; int d_len; int d_sg; int e_len; int e_sg; int key_len; } ;
struct TYPE_8__ {TYPE_1__ rsa; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct akcipher_request {int base; int dst; int src_len; int src; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ccp_rsa_req_ctx* FUNC_1 (struct akcipher_request*) ;
 struct ccp_ctx* FUNC_2 (struct crypto_akcipher*) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 struct crypto_akcipher* FUNC_4 (struct akcipher_request*) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct akcipher_request *VAR_1, bool VAR_2)
{
 struct crypto_akcipher *VAR_3 = FUNC_4(VAR_1);
 struct ccp_ctx *VAR_4 = FUNC_2(VAR_3);
 struct ccp_rsa_req_ctx *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = 0;

 FUNC_5(&VAR_5->cmd, 0, sizeof(VAR_5->cmd));
 FUNC_0(&VAR_5->cmd.entry);
 VAR_5->cmd.engine = VAR_0;

 VAR_5->cmd.u.rsa.key_size = VAR_4->u.rsa.key_len;
 if (VAR_2) {
  VAR_5->cmd.u.rsa.exp = &VAR_4->u.rsa.e_sg;
  VAR_5->cmd.u.rsa.exp_len = VAR_4->u.rsa.e_len;
 } else {
  VAR_5->cmd.u.rsa.exp = &VAR_4->u.rsa.d_sg;
  VAR_5->cmd.u.rsa.exp_len = VAR_4->u.rsa.d_len;
 }
 VAR_5->cmd.u.rsa.mod = &VAR_4->u.rsa.n_sg;
 VAR_5->cmd.u.rsa.mod_len = VAR_4->u.rsa.n_len;
 VAR_5->cmd.u.rsa.src = VAR_1->src;
 VAR_5->cmd.u.rsa.src_len = VAR_1->src_len;
 VAR_5->cmd.u.rsa.dst = VAR_1->dst;

 VAR_6 = FUNC_3(&VAR_1->base, &VAR_5->cmd);

 return VAR_6;
}
