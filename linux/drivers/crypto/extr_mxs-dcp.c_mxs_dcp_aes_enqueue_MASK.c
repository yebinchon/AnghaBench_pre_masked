
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcp_async_ctx {scalar_t__ key_len; size_t chan; } ;
struct dcp_aes_req_ctx {int enc; int ecb; } ;
struct dcp {int * thread; int * lock; int * queue; } ;
struct crypto_async_request {int tfm; } ;
struct ablkcipher_request {struct crypto_async_request base; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 struct dcp_aes_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 int FUNC_1 (int *,struct crypto_async_request*) ;
 struct dcp_async_ctx* FUNC_2 (int ) ;
 struct dcp* VAR_2 ;
 int FUNC_3 (struct ablkcipher_request*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ablkcipher_request *VAR_3, int VAR_4, int VAR_5)
{
 struct dcp *VAR_6 = VAR_2;
 struct crypto_async_request *VAR_7 = &VAR_3->base;
 struct dcp_async_ctx *VAR_8 = FUNC_2(VAR_7->tfm);
 struct dcp_aes_req_ctx *VAR_9 = FUNC_0(VAR_3);
 int VAR_10;

 if (FUNC_6(VAR_8->key_len != VAR_0))
  return FUNC_3(VAR_3, VAR_4);

 VAR_9->enc = VAR_4;
 VAR_9->ecb = VAR_5;
 VAR_8->chan = VAR_1;

 FUNC_4(&VAR_6->lock[VAR_8->chan]);
 VAR_10 = FUNC_1(&VAR_6->queue[VAR_8->chan], &VAR_3->base);
 FUNC_5(&VAR_6->lock[VAR_8->chan]);

 FUNC_7(VAR_6->thread[VAR_8->chan]);

 return VAR_10;
}
