
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safexcel_crypto_priv {int flags; int context_pool; int dev; } ;
struct TYPE_2__ {int ctxr_dma; int ctxr; } ;
struct safexcel_cipher_ctx {TYPE_1__ base; struct safexcel_crypto_priv* priv; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 struct safexcel_cipher_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_5(struct crypto_tfm *VAR_1)
{
 struct safexcel_cipher_ctx *VAR_2 = FUNC_0(VAR_1);
 struct safexcel_crypto_priv *VAR_3 = VAR_2->priv;
 int VAR_4;

 if (FUNC_3(VAR_1))
  return;

 if (VAR_3->flags & VAR_0) {
  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4)
   FUNC_1(VAR_3->dev, "skcipher: invalidation error %d\n",
     VAR_4);
 } else {
  FUNC_2(VAR_3->context_pool, VAR_2->base.ctxr,
         VAR_2->base.ctxr_dma);
 }
}
