
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_instance {int dummy; } ;
struct crypto_skcipher_spawn {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_rfc3686_req_ctx {int dummy; } ;
struct crypto_rfc3686_ctx {struct crypto_skcipher* child; } ;


 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 unsigned long FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_rfc3686_ctx* FUNC_3 (struct crypto_skcipher*) ;
 unsigned long FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (struct crypto_skcipher*,unsigned int) ;
 struct crypto_skcipher* FUNC_6 (struct crypto_skcipher_spawn*) ;
 int FUNC_7 () ;
 struct skcipher_instance* FUNC_8 (struct crypto_skcipher*) ;
 struct crypto_skcipher_spawn* FUNC_9 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_10(struct crypto_skcipher *VAR_0)
{
 struct skcipher_instance *VAR_1 = FUNC_8(VAR_0);
 struct crypto_skcipher_spawn *VAR_2 = FUNC_9(VAR_1);
 struct crypto_rfc3686_ctx *VAR_3 = FUNC_3(VAR_0);
 struct crypto_skcipher *VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;

 VAR_4 = FUNC_6(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->child = VAR_4;

 VAR_5 = FUNC_2(VAR_0);
 VAR_5 &= ~(FUNC_7() - 1);
 VAR_6 = VAR_5 + sizeof(struct crypto_rfc3686_req_ctx) +
    FUNC_4(VAR_4);
 FUNC_5(VAR_0, VAR_6);

 return 0;
}
