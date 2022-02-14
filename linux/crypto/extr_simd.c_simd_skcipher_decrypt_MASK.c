
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct simd_skcipher_ctx {TYPE_1__* cryptd_tfm; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_3__ {struct crypto_skcipher base; } ;


 struct crypto_skcipher* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 struct simd_skcipher_ctx* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct skcipher_request*) ;
 struct crypto_skcipher* FUNC_5 (struct skcipher_request*) ;
 scalar_t__ FUNC_6 () ;
 struct skcipher_request* FUNC_7 (struct skcipher_request*) ;
 int FUNC_8 (struct skcipher_request*,struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_9(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_5(VAR_0);
 struct simd_skcipher_ctx *VAR_2 = FUNC_3(VAR_1);
 struct skcipher_request *VAR_3;
 struct crypto_skcipher *VAR_4;

 VAR_3 = FUNC_7(VAR_0);
 *VAR_3 = *VAR_0;

 if (!FUNC_2() ||
     (FUNC_6() && FUNC_1(VAR_2->cryptd_tfm)))
  VAR_4 = &VAR_2->cryptd_tfm->base;
 else
  VAR_4 = FUNC_0(VAR_2->cryptd_tfm);

 FUNC_8(VAR_3, VAR_4);

 return FUNC_4(VAR_3);
}
