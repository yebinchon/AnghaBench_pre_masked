
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hifn_request_context {int dummy; } ;
struct hifn_crypto_alg {int dev; } ;
struct hifn_context {int dev; } ;
struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; struct crypto_alg* __crt_alg; } ;
struct crypto_alg {int dummy; } ;


 struct hifn_crypto_alg* FUNC_0 (struct crypto_alg*) ;
 struct hifn_context* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_0)
{
 struct crypto_alg *VAR_1 = VAR_0->__crt_alg;
 struct hifn_crypto_alg *VAR_2 = FUNC_0(VAR_1);
 struct hifn_context *VAR_3 = FUNC_1(VAR_0);

 VAR_3->dev = VAR_2->dev;
 VAR_0->crt_ablkcipher.reqsize = sizeof(struct hifn_request_context);
 return 0;
}
