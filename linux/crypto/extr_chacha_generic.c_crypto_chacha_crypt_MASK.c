
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int iv; } ;
struct crypto_skcipher {int dummy; } ;
struct chacha_ctx {int dummy; } ;


 int FUNC_0 (struct skcipher_request*,struct chacha_ctx*,int ) ;
 struct chacha_ctx* FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;

int FUNC_3(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_2(VAR_0);
 struct chacha_ctx *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, VAR_2, VAR_0->iv);
}
