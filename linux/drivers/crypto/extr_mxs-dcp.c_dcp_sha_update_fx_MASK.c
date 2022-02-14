
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcp_sha_req_ctx {int fini; int init; } ;
struct dcp_async_ctx {int hot; size_t chan; int mutex; } ;
struct dcp {int * thread; int * lock; int * queue; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int base; int nbytes; } ;


 struct dcp_sha_req_ctx* FUNC_0 (struct ahash_request*) ;
 struct dcp_async_ctx* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (int *,int *) ;
 struct dcp* VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct ahash_request *VAR_1, int VAR_2)
{
 struct dcp *VAR_3 = VAR_0;

 struct dcp_sha_req_ctx *VAR_4 = FUNC_0(VAR_1);
 struct crypto_ahash *VAR_5 = FUNC_2(VAR_1);
 struct dcp_async_ctx *VAR_6 = FUNC_1(VAR_5);

 int VAR_7;





 if (!VAR_1->nbytes && !VAR_2)
  return 0;

 FUNC_4(&VAR_6->mutex);

 VAR_4->fini = VAR_2;

 if (!VAR_6->hot) {
  VAR_6->hot = 1;
  VAR_4->init = 1;
 }

 FUNC_6(&VAR_3->lock[VAR_6->chan]);
 VAR_7 = FUNC_3(&VAR_3->queue[VAR_6->chan], &VAR_1->base);
 FUNC_7(&VAR_3->lock[VAR_6->chan]);

 FUNC_8(VAR_3->thread[VAR_6->chan]);
 FUNC_5(&VAR_6->mutex);

 return VAR_7;
}
