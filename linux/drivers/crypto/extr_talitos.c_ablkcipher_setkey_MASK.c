
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct talitos_ctx {int keylen; int key; int dma_key; struct device* dev; } ;
struct device {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 struct talitos_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (struct device*,int ,unsigned int,int ) ;
 int FUNC_2 (struct device*,int ,int,int ) ;
 int FUNC_3 (int *,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_ablkcipher *VAR_1,
        const u8 *VAR_2, unsigned int VAR_3)
{
 struct talitos_ctx *VAR_4 = FUNC_0(VAR_1);
 struct device *VAR_5 = VAR_4->dev;

 if (VAR_4->keylen)
  FUNC_2(VAR_5, VAR_4->dma_key, VAR_4->keylen, VAR_0);

 FUNC_3(&VAR_4->key, VAR_2, VAR_3);
 VAR_4->keylen = VAR_3;

 VAR_4->dma_key = FUNC_1(VAR_5, VAR_4->key, VAR_3, VAR_0);

 return 0;
}
