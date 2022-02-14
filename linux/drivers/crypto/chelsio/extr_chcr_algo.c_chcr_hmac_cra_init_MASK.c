
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmac_ctx {int base_hash; } ;
struct crypto_tfm {int dummy; } ;
struct chcr_context {int dummy; } ;
struct chcr_ahash_req_ctx {int dummy; } ;


 struct hmac_ctx* FUNC_0 (struct chcr_context*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct chcr_context*) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 struct chcr_context* FUNC_8 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_9(struct crypto_tfm *VAR_0)
{
 struct chcr_context *VAR_1 = FUNC_8(VAR_0);
 struct hmac_ctx *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3 =
  FUNC_6(FUNC_3(VAR_0));

 FUNC_7(FUNC_3(VAR_0),
     sizeof(struct chcr_ahash_req_ctx));
 VAR_2->base_hash = FUNC_4(VAR_3);
 if (FUNC_1(VAR_2->base_hash))
  return FUNC_2(VAR_2->base_hash);
 return FUNC_5(FUNC_8(VAR_0));
}
