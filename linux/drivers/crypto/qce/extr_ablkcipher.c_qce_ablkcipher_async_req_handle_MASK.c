
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_10__ {int result_buf; } ;
struct qce_device {int dev; TYPE_5__ dma; } ;
struct TYPE_9__ {scalar_t__ sgl; } ;
struct qce_cipher_reqctx {int src_nents; int dst_nents; scalar_t__ dst_sg; scalar_t__ src_sg; TYPE_2__ dst_tbl; int result_sg; int cryptlen; int ivsize; int iv; } ;
struct qce_alg_template {int crypto_alg_type; struct qce_device* qce; } ;
struct crypto_async_request {int tfm; } ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_8__ {int flags; } ;
struct ablkcipher_request {scalar_t__ src; scalar_t__ dst; int nbytes; TYPE_1__ base; int info; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*) ;
 int VAR_6 ;
 struct ablkcipher_request* FUNC_2 (struct crypto_async_request*) ;
 struct qce_cipher_reqctx* FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_5 (struct ablkcipher_request*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;
 int FUNC_8 (int ,scalar_t__,int,int) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,scalar_t__,int,scalar_t__,int,int ,struct crypto_async_request*) ;
 int FUNC_11 (TYPE_5__*) ;
 struct scatterlist* FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (struct crypto_async_request*,int ,int ,int ) ;
 int FUNC_14 (TYPE_2__*,int,int ) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (struct scatterlist*) ;
 void* FUNC_18 (scalar_t__,int ) ;
 struct qce_alg_template* FUNC_19 (int ) ;

__attribute__((used)) static int
FUNC_20(struct crypto_async_request *VAR_8)
{
 struct ablkcipher_request *VAR_9 = FUNC_2(VAR_8);
 struct qce_cipher_reqctx *VAR_10 = FUNC_3(VAR_9);
 struct crypto_ablkcipher *VAR_11 = FUNC_5(VAR_9);
 struct qce_alg_template *VAR_12 = FUNC_19(VAR_8->tfm);
 struct qce_device *VAR_13 = VAR_12->qce;
 enum dma_data_direction VAR_14, VAR_15;
 struct scatterlist *VAR_16;
 bool VAR_17;
 gfp_t VAR_18;
 int VAR_19;

 VAR_10->iv = VAR_9->info;
 VAR_10->ivsize = FUNC_4(VAR_11);
 VAR_10->cryptlen = VAR_9->nbytes;

 VAR_17 = (VAR_9->src != VAR_9->dst) ? 1 : 0;
 VAR_14 = VAR_17 ? VAR_3 : VAR_1;
 VAR_15 = VAR_17 ? VAR_2 : VAR_1;

 VAR_10->src_nents = FUNC_18(VAR_9->src, VAR_9->nbytes);
 if (VAR_17)
  VAR_10->dst_nents = FUNC_18(VAR_9->dst, VAR_9->nbytes);
 else
  VAR_10->dst_nents = VAR_10->src_nents;
 if (VAR_10->src_nents < 0) {
  FUNC_6(VAR_13->dev, "Invalid numbers of src SG.\n");
  return VAR_10->src_nents;
 }
 if (VAR_10->dst_nents < 0) {
  FUNC_6(VAR_13->dev, "Invalid numbers of dst SG.\n");
  return -VAR_10->dst_nents;
 }

 VAR_10->dst_nents += 1;

 VAR_18 = (VAR_9->base.flags & VAR_0) ?
      VAR_5 : VAR_4;

 VAR_19 = FUNC_14(&VAR_10->dst_tbl, VAR_10->dst_nents, VAR_18);
 if (VAR_19)
  return VAR_19;

 FUNC_16(&VAR_10->result_sg, VAR_13->dma.result_buf, VAR_6);

 VAR_16 = FUNC_12(&VAR_10->dst_tbl, VAR_9->dst);
 if (FUNC_0(VAR_16)) {
  VAR_19 = FUNC_1(VAR_16);
  goto error_free;
 }

 VAR_16 = FUNC_12(&VAR_10->dst_tbl, &VAR_10->result_sg);
 if (FUNC_0(VAR_16)) {
  VAR_19 = FUNC_1(VAR_16);
  goto error_free;
 }

 FUNC_17(VAR_16);
 VAR_10->dst_sg = VAR_10->dst_tbl.sgl;

 VAR_19 = FUNC_7(VAR_13->dev, VAR_10->dst_sg, VAR_10->dst_nents, VAR_15);
 if (VAR_19 < 0)
  goto error_free;

 if (VAR_17) {
  VAR_19 = FUNC_7(VAR_13->dev, VAR_9->src, VAR_10->src_nents, VAR_14);
  if (VAR_19 < 0)
   goto error_unmap_dst;
  VAR_10->src_sg = VAR_9->src;
 } else {
  VAR_10->src_sg = VAR_10->dst_sg;
 }

 VAR_19 = FUNC_10(&VAR_13->dma, VAR_10->src_sg, VAR_10->src_nents,
          VAR_10->dst_sg, VAR_10->dst_nents,
          VAR_7, VAR_8);
 if (VAR_19)
  goto error_unmap_src;

 FUNC_9(&VAR_13->dma);

 VAR_19 = FUNC_13(VAR_8, VAR_12->crypto_alg_type, VAR_9->nbytes, 0);
 if (VAR_19)
  goto error_terminate;

 return 0;

error_terminate:
 FUNC_11(&VAR_13->dma);
error_unmap_src:
 if (VAR_17)
  FUNC_8(VAR_13->dev, VAR_9->src, VAR_10->src_nents, VAR_14);
error_unmap_dst:
 FUNC_8(VAR_13->dev, VAR_10->dst_sg, VAR_10->dst_nents, VAR_15);
error_free:
 FUNC_15(&VAR_10->dst_tbl);
 return VAR_19;
}
