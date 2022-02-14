
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctxr_dma; } ;
struct safexcel_ahash_ctx {TYPE_1__ base; int priv; } ;
struct crypto_async_request {int dummy; } ;
struct ahash_request {int dummy; } ;


 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct safexcel_ahash_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct crypto_async_request*,int ,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct crypto_async_request *VAR_0,
       int VAR_1, int *VAR_2, int *VAR_3)
{
 struct ahash_request *VAR_4 = FUNC_0(VAR_0);
 struct safexcel_ahash_ctx *VAR_5 = FUNC_1(FUNC_2(VAR_4));
 int VAR_6;

 VAR_6 = FUNC_3(VAR_0, VAR_5->priv,
     VAR_5->base.ctxr_dma, VAR_1);
 if (FUNC_4(VAR_6))
  return VAR_6;

 *VAR_2 = 1;
 *VAR_3 = 1;

 return 0;
}
