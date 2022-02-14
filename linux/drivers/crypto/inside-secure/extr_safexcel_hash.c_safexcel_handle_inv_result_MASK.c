
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct safexcel_result_desc {int dummy; } ;
struct safexcel_crypto_priv {TYPE_3__* ring; int context_pool; int dev; } ;
struct TYPE_4__ {int ring; int ctxr_dma; int ctxr; scalar_t__ exit_inv; } ;
struct safexcel_ahash_ctx {TYPE_1__ base; } ;
struct crypto_async_request {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;
struct TYPE_5__ {int work; } ;
struct TYPE_6__ {TYPE_2__ work_data; int workqueue; int queue_lock; int queue; int rdr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct safexcel_result_desc*) ;
 int FUNC_1 (struct safexcel_result_desc*) ;
 struct ahash_request* FUNC_2 (struct crypto_async_request*) ;
 struct safexcel_ahash_ctx* FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (int *,struct crypto_async_request*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct safexcel_crypto_priv*,int) ;
 int FUNC_10 (struct safexcel_crypto_priv*,struct safexcel_result_desc*) ;
 struct safexcel_result_desc* FUNC_11 (struct safexcel_crypto_priv*,int *) ;
 int FUNC_12 (struct safexcel_crypto_priv*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct safexcel_crypto_priv *VAR_1,
          int VAR_2,
          struct crypto_async_request *VAR_3,
          bool *VAR_4, int *VAR_5)
{
 struct safexcel_result_desc *VAR_6;
 struct ahash_request *VAR_7 = FUNC_2(VAR_3);
 struct crypto_ahash *VAR_8 = FUNC_4(VAR_7);
 struct safexcel_ahash_ctx *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;

 *VAR_5 = 0;

 VAR_6 = FUNC_11(VAR_1, &VAR_1->ring[VAR_2].rdr);
 if (FUNC_0(VAR_6)) {
  FUNC_6(VAR_1->dev,
   "hash: invalidate: could not retrieve the result descriptor\n");
  *VAR_5 = FUNC_1(VAR_6);
 } else {
  *VAR_5 = FUNC_10(VAR_1, VAR_6);
 }

 FUNC_9(VAR_1, VAR_2);

 if (VAR_9->base.exit_inv) {
  FUNC_7(VAR_1->context_pool, VAR_9->base.ctxr,
         VAR_9->base.ctxr_dma);

  *VAR_4 = 1;
  return 1;
 }

 VAR_2 = FUNC_12(VAR_1);
 VAR_9->base.ring = VAR_2;

 FUNC_13(&VAR_1->ring[VAR_2].queue_lock);
 VAR_10 = FUNC_5(&VAR_1->ring[VAR_2].queue, VAR_3);
 FUNC_14(&VAR_1->ring[VAR_2].queue_lock);

 if (VAR_10 != -VAR_0)
  *VAR_5 = VAR_10;

 FUNC_8(VAR_1->ring[VAR_2].workqueue,
     &VAR_1->ring[VAR_2].work_data.work);

 *VAR_4 = 0;

 return 1;
}
