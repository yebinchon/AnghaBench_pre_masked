
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stm32_cryp_ctx {unsigned int keylen; int key; } ;
struct crypto_aead {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct stm32_cryp_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_4, const u8 *VAR_5,
          unsigned int VAR_6)
{
 struct stm32_cryp_ctx *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6 != VAR_0 && VAR_6 != VAR_1 &&
     VAR_6 != VAR_2)
  return -VAR_3;

 FUNC_1(VAR_7->key, VAR_5, VAR_6);
 VAR_7->keylen = VAR_6;

 return 0;
}
