
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_instance {int dummy; } ;
struct rctx {int dummy; } ;
struct priv {struct crypto_skcipher* child; } ;
struct crypto_skcipher_spawn {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct priv* FUNC_2 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct crypto_skcipher*,scalar_t__) ;
 struct crypto_skcipher* FUNC_5 (struct crypto_skcipher_spawn*) ;
 struct skcipher_instance* FUNC_6 (struct crypto_skcipher*) ;
 struct crypto_skcipher_spawn* FUNC_7 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_8(struct crypto_skcipher *VAR_0)
{
 struct skcipher_instance *VAR_1 = FUNC_6(VAR_0);
 struct crypto_skcipher_spawn *VAR_2 = FUNC_7(VAR_1);
 struct priv *VAR_3 = FUNC_2(VAR_0);
 struct crypto_skcipher *VAR_4;

 VAR_4 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->child = VAR_4;

 FUNC_4(VAR_0, FUNC_3(VAR_4) +
      sizeof(struct rctx));

 return 0;
}
