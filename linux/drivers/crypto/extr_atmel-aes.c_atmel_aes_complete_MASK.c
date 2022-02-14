
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crypto_ablkcipher {int dummy; } ;
struct atmel_aes_reqctx {int mode; int lastc; } ;
struct atmel_aes_dev {int queue_task; TYPE_2__* areq; scalar_t__ is_async; TYPE_1__* ctx; int flags; int iclk; } ;
struct ablkcipher_request {scalar_t__ dst; scalar_t__ src; scalar_t__ nbytes; int info; } ;
struct TYPE_5__ {int (* complete ) (TYPE_2__*,int) ;} ;
struct TYPE_4__ {scalar_t__ is_aead; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ablkcipher_request* FUNC_0 (TYPE_2__*) ;
 struct atmel_aes_reqctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct atmel_aes_dev*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_5 (struct ablkcipher_request*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static inline int FUNC_10(struct atmel_aes_dev *VAR_2, int VAR_3)
{





 FUNC_3(VAR_2->iclk);
 VAR_2->flags &= ~VAR_0;

 if (!VAR_2->ctx->is_aead) {
  struct ablkcipher_request *VAR_4 =
   FUNC_0(VAR_2->areq);
  struct atmel_aes_reqctx *VAR_5 = FUNC_1(VAR_4);
  struct crypto_ablkcipher *VAR_6 =
   FUNC_5(VAR_4);
  int VAR_7 = FUNC_4(VAR_6);

  if (VAR_5->mode & VAR_1) {
   FUNC_7(VAR_4->info, VAR_4->dst,
    VAR_4->nbytes - VAR_7, VAR_7, 0);
  } else {
   if (VAR_4->src == VAR_4->dst) {
    FUNC_6(VAR_4->info, VAR_5->lastc, VAR_7);
   } else {
    FUNC_7(VAR_4->info, VAR_4->src,
     VAR_4->nbytes - VAR_7, VAR_7, 0);
   }
  }
 }

 if (VAR_2->is_async)
  VAR_2->areq->complete(VAR_2->areq, VAR_3);

 FUNC_9(&VAR_2->queue_task);

 return VAR_3;
}
