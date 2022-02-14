
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct crypto_shash {int dummy; } ;
struct TYPE_3__ {struct crypto_shash* hmac_tfm; } ;
struct TYPE_4__ {TYPE_1__ sha; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct ccp_crypto_ahash_alg {int child_alg; } ;


 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct ccp_crypto_ahash_alg* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct crypto_tfm*) ;
 struct crypto_shash* FUNC_4 (int ,int ,int ) ;
 struct ccp_ctx* FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_0)
{
 struct ccp_ctx *VAR_1 = FUNC_5(VAR_0);
 struct ccp_crypto_ahash_alg *VAR_2 = FUNC_2(VAR_0);
 struct crypto_shash *VAR_3;

 VAR_3 = FUNC_4(VAR_2->child_alg, 0, 0);
 if (FUNC_0(VAR_3)) {
  FUNC_6("could not load driver %s need for HMAC support\n",
   VAR_2->child_alg);
  return FUNC_1(VAR_3);
 }

 VAR_1->u.sha.hmac_tfm = VAR_3;

 return FUNC_3(VAR_0);
}
