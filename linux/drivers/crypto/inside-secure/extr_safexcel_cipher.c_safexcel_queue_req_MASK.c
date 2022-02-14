
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct safexcel_crypto_priv {int flags; TYPE_3__* ring; int context_pool; } ;
struct safexcel_cipher_req {int needs_inv; int direction; } ;
struct TYPE_4__ {int needs_inv; int ring; scalar_t__ ctxr; int ctxr_dma; } ;
struct safexcel_cipher_ctx {TYPE_1__ base; struct safexcel_crypto_priv* priv; } ;
struct crypto_async_request {int tfm; } ;
typedef enum safexcel_cipher_direction { ____Placeholder_safexcel_cipher_direction } safexcel_cipher_direction ;
struct TYPE_5__ {int work; } ;
struct TYPE_6__ {TYPE_2__ work_data; int workqueue; int queue_lock; int queue; } ;


 int FUNC_0 (struct crypto_async_request) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct crypto_async_request*) ;
 struct safexcel_cipher_ctx* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct safexcel_crypto_priv*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct crypto_async_request *VAR_2,
   struct safexcel_cipher_req *VAR_3,
   enum safexcel_cipher_direction VAR_4)
{
 struct safexcel_cipher_ctx *VAR_5 = FUNC_2(VAR_2->tfm);
 struct safexcel_crypto_priv *VAR_6 = VAR_5->priv;
 int VAR_7, VAR_8;

 VAR_3->needs_inv = 0;
 VAR_3->direction = VAR_4;

 if (VAR_5->base.ctxr) {
  if (VAR_6->flags & VAR_0 && VAR_5->base.needs_inv) {
   VAR_3->needs_inv = 1;
   VAR_5->base.needs_inv = 0;
  }
 } else {
  VAR_5->base.ring = FUNC_5(VAR_6);
  VAR_5->base.ctxr = FUNC_3(VAR_6->context_pool,
       FUNC_0(*VAR_2),
       &VAR_5->base.ctxr_dma);
  if (!VAR_5->base.ctxr)
   return -VAR_1;
 }

 VAR_8 = VAR_5->base.ring;

 FUNC_6(&VAR_6->ring[VAR_8].queue_lock);
 VAR_7 = FUNC_1(&VAR_6->ring[VAR_8].queue, VAR_2);
 FUNC_7(&VAR_6->ring[VAR_8].queue_lock);

 FUNC_4(VAR_6->ring[VAR_8].workqueue,
     &VAR_6->ring[VAR_8].work_data.work);

 return VAR_7;
}
