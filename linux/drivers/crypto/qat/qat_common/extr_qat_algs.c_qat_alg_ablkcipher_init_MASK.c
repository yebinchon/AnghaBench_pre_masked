
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qat_crypto_request {int dummy; } ;
struct qat_alg_ablkcipher_ctx {struct crypto_tfm* tfm; } ;
struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;


 struct qat_alg_ablkcipher_ctx* FUNC_0 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_0)
{
 struct qat_alg_ablkcipher_ctx *VAR_1 = FUNC_0(VAR_0);

 VAR_0->crt_ablkcipher.reqsize = sizeof(struct qat_crypto_request);
 VAR_1->tfm = VAR_0;
 return 0;
}
