
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ctx {scalar_t__ keylen; int dma_key; struct device* dev; } ;
struct device {int dummy; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 struct talitos_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct device*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_1)
{
 struct talitos_ctx *VAR_2 = FUNC_0(VAR_1);
 struct device *VAR_3 = VAR_2->dev;

 if (VAR_2->keylen)
  FUNC_1(VAR_3, VAR_2->dma_key, VAR_2->keylen, VAR_0);
}
