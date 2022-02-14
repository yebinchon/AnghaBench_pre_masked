
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_hash_request_ctx {int op; } ;
struct img_hash_dev {int flags; int dev; struct ahash_request* req; int lock; int queue; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int) ;} ;
struct ahash_request {int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ahash_request*) ;
 struct ahash_request* FUNC_1 (struct crypto_async_request*) ;
 struct img_hash_request_ctx* FUNC_2 (struct ahash_request*) ;
 struct crypto_async_request* FUNC_3 (int *) ;
 struct crypto_async_request* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (struct ahash_request*,int) ;
 int FUNC_7 (struct img_hash_dev*) ;
 int FUNC_8 (struct img_hash_dev*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct crypto_async_request*,int) ;

__attribute__((used)) static int FUNC_12(struct img_hash_dev *VAR_2,
     struct ahash_request *VAR_3)
{
 struct crypto_async_request *VAR_4, *VAR_5;
 struct img_hash_request_ctx *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0, VAR_9 = 0;

 FUNC_9(&VAR_2->lock, VAR_7);

 if (VAR_3)
  VAR_9 = FUNC_0(&VAR_2->queue, VAR_3);

 if (VAR_0 & VAR_2->flags) {
  FUNC_10(&VAR_2->lock, VAR_7);
  return VAR_9;
 }

 VAR_5 = FUNC_4(&VAR_2->queue);
 VAR_4 = FUNC_3(&VAR_2->queue);
 if (VAR_4)
  VAR_2->flags |= VAR_0;

 FUNC_10(&VAR_2->lock, VAR_7);

 if (!VAR_4)
  return VAR_9;

 if (VAR_5)
  VAR_5->complete(VAR_5, -VAR_1);

 VAR_3 = FUNC_1(VAR_4);
 VAR_2->req = VAR_3;

 VAR_6 = FUNC_2(VAR_3);

 FUNC_5(VAR_2->dev, "processing req, op: %lu, bytes: %d\n",
   VAR_6->op, VAR_3->nbytes);

 VAR_8 = FUNC_7(VAR_2);

 if (!VAR_8)
  VAR_8 = FUNC_8(VAR_2);

 if (VAR_8 != -VAR_1) {

  FUNC_6(VAR_3, VAR_8);
 }
 return VAR_9;
}
