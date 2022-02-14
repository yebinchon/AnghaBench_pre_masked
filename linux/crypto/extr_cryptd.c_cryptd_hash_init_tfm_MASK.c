
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_shash_spawn {int dummy; } ;
struct hashd_instance_ctx {struct crypto_shash_spawn spawn; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_shash {int dummy; } ;
struct crypto_instance {int dummy; } ;
struct cryptd_hash_request_ctx {int dummy; } ;
struct cryptd_hash_ctx {struct crypto_shash* child; } ;


 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,scalar_t__) ;
 struct hashd_instance_ctx* FUNC_4 (struct crypto_instance*) ;
 scalar_t__ FUNC_5 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_6 (struct crypto_shash_spawn*) ;
 struct crypto_instance* FUNC_7 (struct crypto_tfm*) ;
 struct cryptd_hash_ctx* FUNC_8 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_9(struct crypto_tfm *VAR_0)
{
 struct crypto_instance *VAR_1 = FUNC_7(VAR_0);
 struct hashd_instance_ctx *VAR_2 = FUNC_4(VAR_1);
 struct crypto_shash_spawn *VAR_3 = &VAR_2->spawn;
 struct cryptd_hash_ctx *VAR_4 = FUNC_8(VAR_0);
 struct crypto_shash *VAR_5;

 VAR_5 = FUNC_6(VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4->child = VAR_5;
 FUNC_3(FUNC_2(VAR_0),
     sizeof(struct cryptd_hash_request_ctx) +
     FUNC_5(VAR_5));
 return 0;
}
