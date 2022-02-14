
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qce_sha_reqctx {unsigned long flags; int src_nents; int result_sg; int authklen; int authkey; } ;
struct qce_sha_ctx {int authkey; } ;
struct TYPE_4__ {int result_buf; } ;
struct qce_device {int dev; TYPE_1__ dma; } ;
struct qce_alg_template {int crypto_alg_type; struct qce_device* qce; } ;
struct crypto_async_request {int tfm; } ;
struct ahash_request {int * src; int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ahash_request* FUNC_2 (struct crypto_async_request*) ;
 struct qce_sha_reqctx* FUNC_3 (struct ahash_request*) ;
 struct qce_sha_ctx* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int *,int,int ) ;
 int FUNC_7 (int ,int *,int,int ) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int *,int,int *,int,int ,struct crypto_async_request*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct crypto_async_request*,int ,int ,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,int ) ;
 struct qce_alg_template* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct crypto_async_request *VAR_6)
{
 struct ahash_request *VAR_7 = FUNC_2(VAR_6);
 struct qce_sha_reqctx *VAR_8 = FUNC_3(VAR_7);
 struct qce_sha_ctx *VAR_9 = FUNC_4(VAR_6->tfm);
 struct qce_alg_template *VAR_10 = FUNC_14(VAR_6->tfm);
 struct qce_device *VAR_11 = VAR_10->qce;
 unsigned long VAR_12 = VAR_8->flags;
 int VAR_13;

 if (FUNC_1(VAR_12)) {
  VAR_8->authkey = VAR_9->authkey;
  VAR_8->authklen = VAR_4;
 } else if (FUNC_0(VAR_12)) {
  VAR_8->authkey = VAR_9->authkey;
  VAR_8->authklen = VAR_0;
 }

 VAR_8->src_nents = FUNC_13(VAR_7->src, VAR_7->nbytes);
 if (VAR_8->src_nents < 0) {
  FUNC_5(VAR_11->dev, "Invalid numbers of src SG.\n");
  return VAR_8->src_nents;
 }

 VAR_13 = FUNC_6(VAR_11->dev, VAR_7->src, VAR_8->src_nents, VAR_2);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_12(&VAR_8->result_sg, VAR_11->dma.result_buf, VAR_3);

 VAR_13 = FUNC_6(VAR_11->dev, &VAR_8->result_sg, 1, VAR_1);
 if (VAR_13 < 0)
  goto error_unmap_src;

 VAR_13 = FUNC_9(&VAR_11->dma, VAR_7->src, VAR_8->src_nents,
          &VAR_8->result_sg, 1, VAR_5, VAR_6);
 if (VAR_13)
  goto error_unmap_dst;

 FUNC_8(&VAR_11->dma);

 VAR_13 = FUNC_11(VAR_6, VAR_10->crypto_alg_type, 0, 0);
 if (VAR_13)
  goto error_terminate;

 return 0;

error_terminate:
 FUNC_10(&VAR_11->dma);
error_unmap_dst:
 FUNC_7(VAR_11->dev, &VAR_8->result_sg, 1, VAR_1);
error_unmap_src:
 FUNC_7(VAR_11->dev, VAR_7->src, VAR_8->src_nents, VAR_2);
 return VAR_13;
}
