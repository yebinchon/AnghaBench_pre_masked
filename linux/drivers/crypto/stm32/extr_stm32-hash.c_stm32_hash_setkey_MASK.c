
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stm32_hash_ctx {unsigned int keylen; int key; } ;
struct crypto_ahash {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct stm32_hash_ctx* FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_ahash *VAR_2,
        const u8 *VAR_3, unsigned int VAR_4)
{
 struct stm32_hash_ctx *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4 <= VAR_1) {
  FUNC_1(VAR_5->key, VAR_3, VAR_4);
  VAR_5->keylen = VAR_4;
 } else {
  return -VAR_0;
 }

 return 0;
}
