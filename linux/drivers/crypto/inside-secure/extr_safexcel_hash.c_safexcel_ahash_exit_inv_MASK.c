
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct safexcel_inv_result {int error; int completion; } ;
struct safexcel_crypto_priv {int dev; TYPE_3__* ring; } ;
struct safexcel_ahash_req {int needs_inv; } ;
struct TYPE_11__ {int ring; int exit_inv; } ;
struct safexcel_ahash_ctx {TYPE_1__ base; struct safexcel_crypto_priv* priv; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_15__ {struct crypto_tfm* tfm; } ;
struct TYPE_14__ {TYPE_6__ base; } ;
struct TYPE_12__ {int work; } ;
struct TYPE_13__ {TYPE_2__ work_data; int workqueue; int queue_lock; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (struct crypto_tfm*) ;
 int VAR_2 ;
 struct safexcel_ahash_req* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,int ,struct safexcel_inv_result*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int *,TYPE_6__*) ;
 struct safexcel_ahash_ctx* FUNC_6 (struct crypto_tfm*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (int ,int *) ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct crypto_tfm *VAR_5)
{
 struct safexcel_ahash_ctx *VAR_6 = FUNC_6(VAR_5);
 struct safexcel_crypto_priv *VAR_7 = VAR_6->priv;
 FUNC_0(VAR_3, VAR_2, VAR_1);
 struct safexcel_ahash_req *VAR_8 = FUNC_2(VAR_3);
 struct safexcel_inv_result VAR_9 = {};
 int VAR_10 = VAR_6->base.ring;

 FUNC_9(VAR_3, 0, VAR_1);


 FUNC_8(&VAR_9.completion);
 FUNC_3(VAR_3, VAR_0,
       VAR_4, &VAR_9);

 FUNC_4(VAR_3, FUNC_1(VAR_5));
 VAR_6 = FUNC_6(VAR_3->base.tfm);
 VAR_6->base.exit_inv = 1;
 VAR_8->needs_inv = 1;

 FUNC_11(&VAR_7->ring[VAR_10].queue_lock);
 FUNC_5(&VAR_7->ring[VAR_10].queue, &VAR_3->base);
 FUNC_12(&VAR_7->ring[VAR_10].queue_lock);

 FUNC_10(VAR_7->ring[VAR_10].workqueue,
     &VAR_7->ring[VAR_10].work_data.work);

 FUNC_13(&VAR_9.completion);

 if (VAR_9.error) {
  FUNC_7(VAR_7->dev, "hash: completion error (%d)\n",
    VAR_9.error);
  return VAR_9.error;
 }

 return 0;
}
