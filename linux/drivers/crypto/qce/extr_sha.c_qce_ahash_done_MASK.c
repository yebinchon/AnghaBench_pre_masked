
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qce_sha_reqctx {int src_nents; int last_blk; int first_blk; int nbytes_orig; int * src_orig; void** byte_count; scalar_t__ digest; int result_sg; } ;
struct qce_result_dump {int * auth_byte_count; int auth_iv; } ;
struct TYPE_2__ {struct qce_result_dump* result_buf; } ;
struct qce_device {int (* async_req_done ) (struct qce_device*,int) ;int dev; TYPE_1__ dma; } ;
struct qce_alg_template {struct qce_device* qce; } ;
struct crypto_async_request {int tfm; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int nbytes; int * src; scalar_t__ result; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct qce_sha_reqctx* FUNC_1 (struct ahash_request*) ;
 void* FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int *,int,int ) ;
 int FUNC_7 (scalar_t__,int ,unsigned int) ;
 int FUNC_8 (struct qce_device*,int*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct qce_device*,int) ;
 struct qce_alg_template* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(void *VAR_2)
{
 struct crypto_async_request *VAR_3 = VAR_2;
 struct ahash_request *VAR_4 = FUNC_0(VAR_3);
 struct crypto_ahash *VAR_5 = FUNC_4(VAR_4);
 struct qce_sha_reqctx *VAR_6 = FUNC_1(VAR_4);
 struct qce_alg_template *VAR_7 = FUNC_11(VAR_3->tfm);
 struct qce_device *VAR_8 = VAR_7->qce;
 struct qce_result_dump *VAR_9 = VAR_8->dma.result_buf;
 unsigned int VAR_10 = FUNC_3(VAR_5);
 int VAR_11;
 u32 VAR_12;

 VAR_11 = FUNC_9(&VAR_8->dma);
 if (VAR_11)
  FUNC_5(VAR_8->dev, "ahash dma termination error (%d)\n", VAR_11);

 FUNC_6(VAR_8->dev, VAR_4->src, VAR_6->src_nents, VAR_1);
 FUNC_6(VAR_8->dev, &VAR_6->result_sg, 1, VAR_0);

 FUNC_7(VAR_6->digest, VAR_9->auth_iv, VAR_10);
 if (VAR_4->result)
  FUNC_7(VAR_4->result, VAR_9->auth_iv, VAR_10);

 VAR_6->byte_count[0] = FUNC_2(VAR_9->auth_byte_count[0]);
 VAR_6->byte_count[1] = FUNC_2(VAR_9->auth_byte_count[1]);

 VAR_11 = FUNC_8(VAR_8, &VAR_12);
 if (VAR_11 < 0)
  FUNC_5(VAR_8->dev, "ahash operation error (%x)\n", VAR_12);

 VAR_4->src = VAR_6->src_orig;
 VAR_4->nbytes = VAR_6->nbytes_orig;
 VAR_6->last_blk = 0;
 VAR_6->first_blk = 0;

 VAR_8->async_req_done(VAR_7->qce, VAR_11);
}
