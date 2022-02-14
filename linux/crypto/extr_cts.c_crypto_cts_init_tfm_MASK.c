
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_instance {int dummy; } ;
struct crypto_skcipher_spawn {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_cts_reqctx {int dummy; } ;
struct crypto_cts_ctx {struct crypto_skcipher* child; } ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*) ;
 unsigned int FUNC_3 (struct crypto_skcipher*) ;
 unsigned int FUNC_4 (struct crypto_skcipher*) ;
 struct crypto_cts_ctx* FUNC_5 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_6 (struct crypto_skcipher*) ;
 int FUNC_7 (struct crypto_skcipher*,unsigned int) ;
 struct crypto_skcipher* FUNC_8 (struct crypto_skcipher_spawn*) ;
 int FUNC_9 () ;
 struct skcipher_instance* FUNC_10 (struct crypto_skcipher*) ;
 struct crypto_skcipher_spawn* FUNC_11 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_12(struct crypto_skcipher *VAR_0)
{
 struct skcipher_instance *VAR_1 = FUNC_10(VAR_0);
 struct crypto_skcipher_spawn *VAR_2 = FUNC_11(VAR_1);
 struct crypto_cts_ctx *VAR_3 = FUNC_5(VAR_0);
 struct crypto_skcipher *VAR_4;
 unsigned VAR_5;
 unsigned VAR_6;
 unsigned VAR_7;

 VAR_4 = FUNC_8(VAR_2);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 VAR_3->child = VAR_4;

 VAR_7 = FUNC_3(VAR_0);
 VAR_6 = FUNC_4(VAR_4);
 VAR_5 = FUNC_0(sizeof(struct crypto_cts_reqctx) +
   FUNC_6(VAR_4),
   FUNC_9()) +
    (VAR_7 & ~(FUNC_9() - 1)) + VAR_6;

 FUNC_7(VAR_0, VAR_5);

 return 0;
}
