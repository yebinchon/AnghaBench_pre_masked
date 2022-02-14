
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stm32_cryp_ctx {unsigned int keylen; int key; } ;
struct crypto_ablkcipher {int dummy; } ;


 struct stm32_cryp_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_ablkcipher *VAR_0, const u8 *VAR_1,
        unsigned int VAR_2)
{
 struct stm32_cryp_ctx *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3->key, VAR_1, VAR_2);
 VAR_3->keylen = VAR_2;

 return 0;
}
