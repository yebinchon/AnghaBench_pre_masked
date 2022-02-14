
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safexcel_crypto_priv {int dummy; } ;
struct TYPE_2__ {int ctxr_dma; } ;
struct safexcel_cipher_ctx {TYPE_1__ base; struct safexcel_crypto_priv* priv; } ;
struct crypto_async_request {int tfm; } ;


 struct safexcel_cipher_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_async_request*,struct safexcel_crypto_priv*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct crypto_async_request *VAR_0,
        int VAR_1, int *VAR_2, int *VAR_3)
{
 struct safexcel_cipher_ctx *VAR_4 = FUNC_0(VAR_0->tfm);
 struct safexcel_crypto_priv *VAR_5 = VAR_4->priv;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_5, VAR_4->base.ctxr_dma, VAR_1);
 if (FUNC_2(VAR_6))
  return VAR_6;

 *VAR_2 = 1;
 *VAR_3 = 1;

 return 0;
}
