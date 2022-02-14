
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n2_hash_ctx {int fallback_tfm; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ahash {int dummy; } ;


 struct crypto_ahash* FUNC_0 (struct crypto_tfm*) ;
 struct n2_hash_ctx* FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct crypto_ahash *VAR_1 = FUNC_0(VAR_0);
 struct n2_hash_ctx *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_2->fallback_tfm);
}
