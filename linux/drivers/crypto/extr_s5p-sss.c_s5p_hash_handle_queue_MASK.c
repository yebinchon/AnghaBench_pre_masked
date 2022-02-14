
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_hash_reqctx {int finup; int total; int error; scalar_t__ op_update; scalar_t__ digcnt; } ;
struct s5p_aes_dev {int dev; struct ahash_request* hash_req; int hash_lock; int hash_flags; int hash_queue; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int) ;} ;
struct ahash_request {int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ahash_request*) ;
 struct ahash_request* FUNC_1 (struct crypto_async_request*) ;
 struct s5p_hash_reqctx* FUNC_2 (struct ahash_request*) ;
 struct crypto_async_request* FUNC_3 (int *) ;
 struct crypto_async_request* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,scalar_t__,int ) ;
 int FUNC_6 (struct s5p_aes_dev*,int ) ;
 int FUNC_7 (struct ahash_request*,int) ;
 int FUNC_8 (struct ahash_request*,scalar_t__) ;
 int FUNC_9 (struct ahash_request*) ;
 int FUNC_10 (struct s5p_aes_dev*,int ,int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct crypto_async_request*,int) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct s5p_aes_dev *VAR_3,
     struct ahash_request *VAR_4)
{
 struct crypto_async_request *VAR_5, *VAR_6;
 struct s5p_hash_reqctx *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0, VAR_10 = 0;

retry:
 FUNC_12(&VAR_3->hash_lock, VAR_8);
 if (VAR_4)
  VAR_10 = FUNC_0(&VAR_3->hash_queue, VAR_4);

 if (FUNC_15(VAR_1, &VAR_3->hash_flags)) {
  FUNC_13(&VAR_3->hash_lock, VAR_8);
  return VAR_10;
 }

 VAR_6 = FUNC_4(&VAR_3->hash_queue);
 VAR_5 = FUNC_3(&VAR_3->hash_queue);
 if (VAR_5)
  FUNC_11(VAR_1, &VAR_3->hash_flags);

 FUNC_13(&VAR_3->hash_lock, VAR_8);

 if (!VAR_5)
  return VAR_10;

 if (VAR_6)
  VAR_6->complete(VAR_6, -VAR_0);

 VAR_4 = FUNC_1(VAR_5);
 VAR_3->hash_req = VAR_4;
 VAR_7 = FUNC_2(VAR_4);

 VAR_9 = FUNC_8(VAR_4, VAR_7->op_update);
 if (VAR_9 || !VAR_7->total)
  goto out;

 FUNC_5(VAR_3->dev, "handling new req, op_update: %u, nbytes: %d\n",
  VAR_7->op_update, VAR_4->nbytes);

 FUNC_6(VAR_3, VAR_2);
 if (VAR_7->digcnt)
  FUNC_9(VAR_4);

 if (VAR_7->op_update) {
  VAR_9 = FUNC_10(VAR_3, VAR_7->total, VAR_7->finup);
  if (VAR_9 != -VAR_0 && VAR_7->finup && !VAR_7->error)

   VAR_9 = FUNC_10(VAR_3, VAR_7->total, 1);
 } else {
  VAR_9 = FUNC_10(VAR_3, VAR_7->total, 1);
 }
out:
 if (VAR_9 != -VAR_0) {

  FUNC_7(VAR_4, VAR_9);
  VAR_4 = ((void*)0);





  goto retry;
 }

 return VAR_10;
}
