
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int tfm; int (* complete ) (struct crypto_async_request*,int ) ;} ;
struct atmel_sha_dev {int flags; int is_async; int force_complete; struct ahash_request* req; int lock; int queue; } ;
struct atmel_sha_ctx {int (* start ) (struct atmel_sha_dev*) ;} ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ahash_request*) ;
 struct ahash_request* FUNC_1 (struct crypto_async_request*) ;
 struct crypto_async_request* FUNC_2 (int *) ;
 struct crypto_async_request* FUNC_3 (int *) ;
 struct atmel_sha_ctx* FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct crypto_async_request*,int ) ;
 int FUNC_8 (struct atmel_sha_dev*) ;

__attribute__((used)) static int FUNC_9(struct atmel_sha_dev *VAR_2,
      struct ahash_request *VAR_3)
{
 struct crypto_async_request *VAR_4, *VAR_5;
 struct atmel_sha_ctx *VAR_6;
 unsigned long VAR_7;
 bool VAR_8;
 int VAR_9 = 0, VAR_10 = 0;

 FUNC_5(&VAR_2->lock, VAR_7);
 if (VAR_3)
  VAR_10 = FUNC_0(&VAR_2->queue, VAR_3);

 if (VAR_1 & VAR_2->flags) {
  FUNC_6(&VAR_2->lock, VAR_7);
  return VAR_10;
 }

 VAR_5 = FUNC_3(&VAR_2->queue);
 VAR_4 = FUNC_2(&VAR_2->queue);
 if (VAR_4)
  VAR_2->flags |= VAR_1;

 FUNC_6(&VAR_2->lock, VAR_7);

 if (!VAR_4)
  return VAR_10;

 if (VAR_5)
  VAR_5->complete(VAR_5, -VAR_0);

 VAR_6 = FUNC_4(VAR_4->tfm);

 VAR_2->req = FUNC_1(VAR_4);
 VAR_8 = (VAR_2->req != VAR_3);
 VAR_2->is_async = VAR_8;
 VAR_2->force_complete = 0;


 VAR_9 = VAR_6->start(VAR_2);
 return (VAR_8) ? VAR_10 : VAR_9;
}
