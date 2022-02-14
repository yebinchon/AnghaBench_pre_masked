
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_hash_dev {int req; } ;
struct stm32_hash_ctx {int keylen; void* key; } ;
struct crypto_ahash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stm32_hash_ctx* FUNC_0 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_1 (int ) ;
 int FUNC_2 (struct stm32_hash_dev*,int ) ;
 int FUNC_3 (struct stm32_hash_dev*,int) ;
 int FUNC_4 (struct stm32_hash_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct stm32_hash_dev *VAR_4)
{
 struct crypto_ahash *VAR_5 = FUNC_1(VAR_4->req);
 struct stm32_hash_ctx *VAR_6 = FUNC_0(VAR_5);
 u32 VAR_7;
 int VAR_8 = VAR_6->keylen;
 void *VAR_9 = VAR_6->key;

 if (VAR_8) {
  FUNC_3(VAR_4, VAR_8);

  while (VAR_8 > 0) {
   FUNC_4(VAR_4, VAR_1, *(u32 *)VAR_9);
   VAR_8 -= 4;
   VAR_9 += 4;
  }

  VAR_7 = FUNC_2(VAR_4, VAR_2);
  VAR_7 |= VAR_3;
  FUNC_4(VAR_4, VAR_2, VAR_7);

  return -VAR_0;
 }

 return 0;
}
