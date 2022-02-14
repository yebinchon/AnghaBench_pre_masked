
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct safexcel_inv_result {int error; int completion; } ;
struct safexcel_crypto_priv {int dev; TYPE_3__* ring; } ;
struct safexcel_cipher_req {int needs_inv; } ;
struct TYPE_4__ {int ring; int exit_inv; } ;
struct safexcel_cipher_ctx {TYPE_1__ base; struct safexcel_crypto_priv* priv; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_async_request {struct crypto_tfm* tfm; } ;
struct TYPE_5__ {int work; } ;
struct TYPE_6__ {TYPE_2__ work_data; int workqueue; int queue_lock; int queue; } ;


 int FUNC_0 (int *,struct crypto_async_request*) ;
 struct safexcel_cipher_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct crypto_tfm *VAR_0,
        struct crypto_async_request *VAR_1,
        struct safexcel_cipher_req *VAR_2,
        struct safexcel_inv_result *VAR_3)
{
 struct safexcel_cipher_ctx *VAR_4 = FUNC_1(VAR_0);
 struct safexcel_crypto_priv *VAR_5 = VAR_4->priv;
 int VAR_6 = VAR_4->base.ring;

 FUNC_3(&VAR_3->completion);

 VAR_4 = FUNC_1(VAR_1->tfm);
 VAR_4->base.exit_inv = 1;
 VAR_2->needs_inv = 1;

 FUNC_5(&VAR_5->ring[VAR_6].queue_lock);
 FUNC_0(&VAR_5->ring[VAR_6].queue, VAR_1);
 FUNC_6(&VAR_5->ring[VAR_6].queue_lock);

 FUNC_4(VAR_5->ring[VAR_6].workqueue,
     &VAR_5->ring[VAR_6].work_data.work);

 FUNC_7(&VAR_3->completion);

 if (VAR_3->error) {
  FUNC_2(VAR_5->dev,
   "cipher: sync: invalidate: completion error %d\n",
    VAR_3->error);
  return VAR_3->error;
 }

 return 0;
}
