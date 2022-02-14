
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmac_tfm_ctx {struct crypto_cipher* cipher; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_spawn {int dummy; } ;
struct crypto_instance {int dummy; } ;
struct crypto_cipher {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_cipher*) ;
 int FUNC_1 (struct crypto_cipher*) ;
 struct crypto_spawn* FUNC_2 (struct crypto_instance*) ;
 struct crypto_cipher* FUNC_3 (struct crypto_spawn*) ;
 struct crypto_instance* FUNC_4 (struct crypto_tfm*) ;
 struct vmac_tfm_ctx* FUNC_5 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_6(struct crypto_tfm *VAR_0)
{
 struct crypto_instance *VAR_1 = FUNC_4(VAR_0);
 struct crypto_spawn *VAR_2 = FUNC_2(VAR_1);
 struct vmac_tfm_ctx *VAR_3 = FUNC_5(VAR_0);
 struct crypto_cipher *VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->cipher = VAR_4;
 return 0;
}
