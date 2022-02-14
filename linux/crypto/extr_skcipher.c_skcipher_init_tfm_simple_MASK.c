
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_instance {int dummy; } ;
struct skcipher_ctx_simple {struct crypto_cipher* cipher; } ;
struct crypto_spawn {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_cipher*) ;
 int FUNC_1 (struct crypto_cipher*) ;
 struct skcipher_ctx_simple* FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_cipher* FUNC_3 (struct crypto_spawn*) ;
 struct skcipher_instance* FUNC_4 (struct crypto_skcipher*) ;
 struct crypto_spawn* FUNC_5 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_6(struct crypto_skcipher *VAR_0)
{
 struct skcipher_instance *VAR_1 = FUNC_4(VAR_0);
 struct crypto_spawn *VAR_2 = FUNC_5(VAR_1);
 struct skcipher_ctx_simple *VAR_3 = FUNC_2(VAR_0);
 struct crypto_cipher *VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->cipher = VAR_4;
 return 0;
}
