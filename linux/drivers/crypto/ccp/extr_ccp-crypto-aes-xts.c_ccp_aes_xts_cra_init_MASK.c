
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;
struct crypto_sync_skcipher {int dummy; } ;
struct TYPE_5__ {struct crypto_sync_skcipher* tfm_skcipher; scalar_t__ key_len; } ;
struct TYPE_6__ {TYPE_2__ aes; } ;
struct ccp_ctx {TYPE_3__ u; int complete; } ;
struct ccp_aes_req_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_sync_skcipher*) ;
 int FUNC_1 (struct crypto_sync_skcipher*) ;
 int VAR_2 ;
 struct crypto_sync_skcipher* FUNC_2 (char*,int ,int) ;
 struct ccp_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_3)
{
 struct ccp_ctx *VAR_4 = FUNC_3(VAR_3);
 struct crypto_sync_skcipher *VAR_5;

 VAR_4->complete = VAR_2;
 VAR_4->u.aes.key_len = 0;

 VAR_5 = FUNC_2("xts(aes)", 0,
          VAR_0 |
          VAR_1);
 if (FUNC_0(VAR_5)) {
  FUNC_4("could not load fallback driver xts(aes)\n");
  return FUNC_1(VAR_5);
 }
 VAR_4->u.aes.tfm_skcipher = VAR_5;

 VAR_3->crt_ablkcipher.reqsize = sizeof(struct ccp_aes_req_ctx);

 return 0;
}
