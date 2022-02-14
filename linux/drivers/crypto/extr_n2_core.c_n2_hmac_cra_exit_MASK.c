
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fallback_tfm; } ;
struct n2_hmac_ctx {int child_shash; TYPE_1__ base; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ahash {int dummy; } ;


 struct crypto_ahash* FUNC_0 (struct crypto_tfm*) ;
 struct n2_hmac_ctx* FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_0)
{
 struct crypto_ahash *VAR_1 = FUNC_0(VAR_0);
 struct n2_hmac_ctx *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_2->base.fallback_tfm);
 FUNC_3(VAR_2->child_shash);
}
