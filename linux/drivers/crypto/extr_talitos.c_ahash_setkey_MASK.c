
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct talitos_ctx {int keylen; int key; int dma_key; struct device* dev; } ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct crypto_ahash*,int ) ;
 int FUNC_2 (struct crypto_ahash*) ;
 unsigned int FUNC_3 (int ) ;
 struct talitos_ctx* FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int ,unsigned int,int ) ;
 int FUNC_6 (struct device*,int ,int,int ) ;
 int FUNC_7 (struct crypto_ahash*,int const*,unsigned int,int const*) ;
 int FUNC_8 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct crypto_ahash *VAR_4, const u8 *VAR_5,
   unsigned int VAR_6)
{
 struct talitos_ctx *VAR_7 = FUNC_4(FUNC_2(VAR_4));
 struct device *VAR_8 = VAR_7->dev;
 unsigned int VAR_9 =
   FUNC_3(FUNC_2(VAR_4));
 unsigned int VAR_10 = FUNC_0(VAR_4);
 unsigned int VAR_11 = VAR_6;
 u8 VAR_12[VAR_3];
 int VAR_13;

 if (VAR_6 <= VAR_9)
  FUNC_8(VAR_7->key, VAR_5, VAR_11);
 else {

  VAR_13 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_12);

  if (VAR_13) {
   FUNC_1(VAR_4, VAR_0);
   return -VAR_2;
  }

  VAR_11 = VAR_10;
  FUNC_8(VAR_7->key, VAR_12, VAR_10);
 }

 if (VAR_7->keylen)
  FUNC_6(VAR_8, VAR_7->dma_key, VAR_7->keylen, VAR_1);

 VAR_7->keylen = VAR_11;
 VAR_7->dma_key = FUNC_5(VAR_8, VAR_7->key, VAR_11, VAR_1);

 return 0;
}
