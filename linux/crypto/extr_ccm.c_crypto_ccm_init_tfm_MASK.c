
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_skcipher {int dummy; } ;
struct crypto_ccm_req_priv_ctx {int dummy; } ;
struct crypto_ccm_ctx {struct crypto_skcipher* ctr; struct crypto_skcipher* mac; } ;
typedef struct crypto_skcipher crypto_ahash ;
struct crypto_aead {int dummy; } ;
struct ccm_instance_ctx {int ctr; int mac; } ;
struct aead_instance {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct aead_instance* FUNC_2 (struct crypto_aead*) ;
 struct ccm_instance_ctx* FUNC_3 (struct aead_instance*) ;
 unsigned long FUNC_4 (struct crypto_aead*) ;
 struct crypto_ccm_ctx* FUNC_5 (struct crypto_aead*) ;
 int FUNC_6 (struct crypto_aead*,scalar_t__) ;
 int FUNC_7 (struct crypto_skcipher*) ;
 int FUNC_8 (struct crypto_skcipher*) ;
 int FUNC_9 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_10 (int *) ;
 struct crypto_skcipher* FUNC_11 (int *) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct crypto_aead *VAR_0)
{
 struct aead_instance *VAR_1 = FUNC_2(VAR_0);
 struct ccm_instance_ctx *VAR_2 = FUNC_3(VAR_1);
 struct crypto_ccm_ctx *VAR_3 = FUNC_5(VAR_0);
 struct crypto_ahash *VAR_4;
 struct crypto_skcipher *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 VAR_4 = FUNC_10(&VAR_2->mac);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_11(&VAR_2->ctr);
 VAR_7 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_5))
  goto err_free_mac;

 VAR_3->mac = VAR_4;
 VAR_3->ctr = VAR_5;

 VAR_6 = FUNC_4(VAR_0);
 VAR_6 &= ~(FUNC_12() - 1);
 FUNC_6(
  VAR_0,
  VAR_6 + sizeof(struct crypto_ccm_req_priv_ctx) +
  FUNC_13(FUNC_7(VAR_4), FUNC_9(VAR_5)));

 return 0;

err_free_mac:
 FUNC_8(VAR_4);
 return VAR_7;
}
