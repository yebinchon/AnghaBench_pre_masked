
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct safexcel_result_desc {int dummy; } ;
struct safexcel_crypto_priv {TYPE_3__* ring; int context_pool; int dev; } ;
struct safexcel_cipher_req {int rdescs; } ;
struct TYPE_4__ {int ring; int ctxr_dma; int ctxr; scalar_t__ exit_inv; } ;
struct safexcel_cipher_ctx {TYPE_1__ base; } ;
struct crypto_async_request {int tfm; } ;
struct TYPE_5__ {int work; } ;
struct TYPE_6__ {TYPE_2__ work_data; int workqueue; int queue_lock; int queue; int rdr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct safexcel_result_desc*) ;
 int FUNC_1 (struct safexcel_result_desc*) ;
 int FUNC_2 (int *,struct crypto_async_request*) ;
 struct safexcel_cipher_ctx* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct safexcel_crypto_priv*,int) ;
 int FUNC_9 (struct safexcel_crypto_priv*,struct safexcel_result_desc*) ;
 struct safexcel_result_desc* FUNC_10 (struct safexcel_crypto_priv*,int *) ;
 int FUNC_11 (struct safexcel_crypto_priv*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct safexcel_crypto_priv *VAR_1,
          int VAR_2,
          struct crypto_async_request *VAR_3,
          struct safexcel_cipher_req *VAR_4,
          bool *VAR_5, int *VAR_6)
{
 struct safexcel_cipher_ctx *VAR_7 = FUNC_3(VAR_3->tfm);
 struct safexcel_result_desc *VAR_8;
 int VAR_9 = 0, VAR_10;

 *VAR_6 = 0;

 if (FUNC_14(!VAR_4->rdescs))
  return 0;

 while (VAR_4->rdescs--) {
  VAR_8 = FUNC_10(VAR_1, &VAR_1->ring[VAR_2].rdr);
  if (FUNC_0(VAR_8)) {
   FUNC_4(VAR_1->dev,
    "cipher: invalidate: could not retrieve the result descriptor\n");
   *VAR_6 = FUNC_1(VAR_8);
   break;
  }

  if (FUNC_6(!*VAR_6))
   *VAR_6 = FUNC_9(VAR_1, VAR_8);

  VAR_9++;
 }

 FUNC_8(VAR_1, VAR_2);

 if (VAR_7->base.exit_inv) {
  FUNC_5(VAR_1->context_pool, VAR_7->base.ctxr,
         VAR_7->base.ctxr_dma);

  *VAR_5 = 1;

  return VAR_9;
 }

 VAR_2 = FUNC_11(VAR_1);
 VAR_7->base.ring = VAR_2;

 FUNC_12(&VAR_1->ring[VAR_2].queue_lock);
 VAR_10 = FUNC_2(&VAR_1->ring[VAR_2].queue, VAR_3);
 FUNC_13(&VAR_1->ring[VAR_2].queue_lock);

 if (VAR_10 != -VAR_0)
  *VAR_6 = VAR_10;

 FUNC_7(VAR_1->ring[VAR_2].workqueue,
     &VAR_1->ring[VAR_2].work_data.work);

 *VAR_5 = 0;

 return VAR_9;
}
