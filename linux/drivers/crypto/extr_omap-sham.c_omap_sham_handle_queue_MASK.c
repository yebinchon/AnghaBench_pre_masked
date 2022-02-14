
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_sham_reqctx {scalar_t__ op; int flags; scalar_t__ digcnt; int total; } ;
struct omap_sham_dev {int dev; TYPE_1__* pdata; struct ahash_request* req; int lock; int flags; int queue; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int) ;} ;
struct ahash_request {int nbytes; } ;
struct TYPE_2__ {int (* copy_hash ) (struct ahash_request*,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,struct ahash_request*) ;
 struct ahash_request* FUNC_2 (struct crypto_async_request*) ;
 struct omap_sham_reqctx* FUNC_3 (struct ahash_request*) ;
 struct crypto_async_request* FUNC_4 (int *) ;
 struct crypto_async_request* FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct omap_sham_dev*) ;
 int FUNC_8 (struct ahash_request*,int) ;
 int FUNC_9 (struct omap_sham_dev*) ;
 int FUNC_10 (struct ahash_request*,int) ;
 int FUNC_11 (struct omap_sham_dev*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (struct crypto_async_request*,int) ;
 int FUNC_16 (struct ahash_request*,int ) ;
 scalar_t__ FUNC_17 (int ,int *) ;

__attribute__((used)) static int FUNC_18(struct omap_sham_dev *VAR_5,
      struct ahash_request *VAR_6)
{
 struct crypto_async_request *VAR_7, *VAR_8;
 struct omap_sham_reqctx *VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0, VAR_12 = 0;

retry:
 FUNC_13(&VAR_5->lock, VAR_10);
 if (VAR_6)
  VAR_12 = FUNC_1(&VAR_5->queue, VAR_6);
 if (FUNC_17(VAR_1, &VAR_5->flags)) {
  FUNC_14(&VAR_5->lock, VAR_10);
  return VAR_12;
 }
 VAR_8 = FUNC_5(&VAR_5->queue);
 VAR_7 = FUNC_4(&VAR_5->queue);
 if (VAR_7)
  FUNC_12(VAR_1, &VAR_5->flags);
 FUNC_14(&VAR_5->lock, VAR_10);

 if (!VAR_7)
  return VAR_12;

 if (VAR_8)
  VAR_8->complete(VAR_8, -VAR_0);

 VAR_6 = FUNC_2(VAR_7);
 VAR_5->req = VAR_6;
 VAR_9 = FUNC_3(VAR_6);

 VAR_11 = FUNC_10(VAR_6, VAR_9->op == VAR_4);
 if (VAR_11 || !VAR_9->total)
  goto err1;

 FUNC_6(VAR_5->dev, "handling new req, op: %lu, nbytes: %d\n",
      VAR_9->op, VAR_6->nbytes);

 VAR_11 = FUNC_9(VAR_5);
 if (VAR_11)
  goto err1;

 if (VAR_9->digcnt)

  VAR_5->pdata->copy_hash(VAR_6, 0);

 if (VAR_9->op == VAR_4) {
  VAR_11 = FUNC_11(VAR_5);
  if (VAR_11 != -VAR_0 && (VAR_9->flags & FUNC_0(VAR_2)))

   VAR_11 = FUNC_7(VAR_5);
 } else if (VAR_9->op == VAR_3) {
  VAR_11 = FUNC_7(VAR_5);
 }
err1:
 FUNC_6(VAR_5->dev, "exit, err: %d\n", VAR_11);

 if (VAR_11 != -VAR_0) {

  FUNC_8(VAR_6, VAR_11);
  VAR_6 = ((void*)0);





  goto retry;
 }

 return VAR_12;
}
