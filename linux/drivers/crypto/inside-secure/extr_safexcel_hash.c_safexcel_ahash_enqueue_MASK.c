
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct safexcel_crypto_priv {int flags; TYPE_3__* ring; int context_pool; } ;
struct safexcel_ahash_req {int needs_inv; scalar_t__ processed; scalar_t__ digest; int state_sz; scalar_t__ block_sz; scalar_t__ finish; int state; } ;
struct TYPE_5__ {int needs_inv; int ring; TYPE_4__* ctxr; int ctxr_dma; } ;
struct safexcel_ahash_ctx {TYPE_1__ base; int opad; struct safexcel_crypto_priv* priv; } ;
struct ahash_request {int base; } ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_6__ {int work; } ;
struct TYPE_7__ {TYPE_2__ work_data; int workqueue; int queue_lock; int queue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct safexcel_ahash_req* FUNC_1 (struct ahash_request*) ;
 struct safexcel_ahash_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (int *,int *) ;
 TYPE_4__* FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct safexcel_crypto_priv*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ahash_request *VAR_3)
{
 struct safexcel_ahash_ctx *VAR_4 = FUNC_2(FUNC_3(VAR_3));
 struct safexcel_ahash_req *VAR_5 = FUNC_1(VAR_3);
 struct safexcel_crypto_priv *VAR_6 = VAR_4->priv;
 int VAR_7, VAR_8;

 VAR_5->needs_inv = 0;

 if (VAR_4->base.ctxr) {
  if (VAR_6->flags & VAR_1 && !VAR_4->base.needs_inv &&
      VAR_5->processed &&
      (
       (VAR_5->finish &&
        (VAR_5->digest == VAR_0)) ||

       FUNC_6(VAR_4->base.ctxr->data, VAR_5->state, VAR_5->state_sz) ||

       (VAR_5->finish && (VAR_5->processed != VAR_5->block_sz)) ||

       (VAR_5->finish &&
        FUNC_6(VAR_4->base.ctxr->data + (VAR_5->state_sz>>2),
        VAR_4->opad, VAR_5->state_sz))))






   VAR_4->base.needs_inv = 1;

  if (VAR_4->base.needs_inv) {
   VAR_4->base.needs_inv = 0;
   VAR_5->needs_inv = 1;
  }
 } else {
  VAR_4->base.ring = FUNC_8(VAR_6);
  VAR_4->base.ctxr = FUNC_5(VAR_6->context_pool,
       FUNC_0(VAR_3->base),
       &VAR_4->base.ctxr_dma);
  if (!VAR_4->base.ctxr)
   return -VAR_2;
 }

 VAR_8 = VAR_4->base.ring;

 FUNC_9(&VAR_6->ring[VAR_8].queue_lock);
 VAR_7 = FUNC_4(&VAR_6->ring[VAR_8].queue, &VAR_3->base);
 FUNC_10(&VAR_6->ring[VAR_8].queue_lock);

 FUNC_7(VAR_6->ring[VAR_8].workqueue,
     &VAR_6->ring[VAR_8].work_data.work);

 return VAR_7;
}
