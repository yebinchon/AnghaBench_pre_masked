
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_skcipher_spawn {int dummy; } ;
struct skcipherd_instance_ctx {struct crypto_skcipher_spawn spawn; } ;
struct skcipher_instance {int dummy; } ;
struct crypto_sync_skcipher {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct cryptd_skcipher_request_ctx {int dummy; } ;
struct cryptd_skcipher_ctx {struct crypto_sync_skcipher* child; } ;


 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct cryptd_skcipher_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (struct crypto_skcipher*,int) ;
 struct crypto_skcipher* FUNC_4 (struct crypto_skcipher_spawn*) ;
 struct skcipher_instance* FUNC_5 (struct crypto_skcipher*) ;
 struct skcipherd_instance_ctx* FUNC_6 (struct skcipher_instance*) ;

__attribute__((used)) static int FUNC_7(struct crypto_skcipher *VAR_0)
{
 struct skcipher_instance *VAR_1 = FUNC_5(VAR_0);
 struct skcipherd_instance_ctx *VAR_2 = FUNC_6(VAR_1);
 struct crypto_skcipher_spawn *VAR_3 = &VAR_2->spawn;
 struct cryptd_skcipher_ctx *VAR_4 = FUNC_2(VAR_0);
 struct crypto_skcipher *VAR_5;

 VAR_5 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4->child = (struct crypto_sync_skcipher *)VAR_5;
 FUNC_3(
  VAR_0, sizeof(struct cryptd_skcipher_request_ctx));
 return 0;
}
