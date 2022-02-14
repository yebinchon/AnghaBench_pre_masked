
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qce_device {int (* async_req_done ) (struct qce_device*,int) ;int dev; int dma; } ;
struct qce_cipher_reqctx {int dst_tbl; int dst_nents; int dst_sg; int src_nents; int src_sg; } ;
struct qce_alg_template {struct qce_device* qce; } ;
struct crypto_async_request {int tfm; } ;
struct ablkcipher_request {scalar_t__ src; scalar_t__ dst; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ablkcipher_request* FUNC_0 (struct crypto_async_request*) ;
 struct qce_cipher_reqctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct qce_device*,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct qce_device*,int) ;
 struct qce_alg_template* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(void *VAR_3)
{
 struct crypto_async_request *VAR_4 = VAR_3;
 struct ablkcipher_request *VAR_5 = FUNC_0(VAR_4);
 struct qce_cipher_reqctx *VAR_6 = FUNC_1(VAR_5);
 struct qce_alg_template *VAR_7 = FUNC_8(VAR_4->tfm);
 struct qce_device *VAR_8 = VAR_7->qce;
 enum dma_data_direction VAR_9, VAR_10;
 u32 VAR_11;
 int VAR_12;
 bool VAR_13;

 VAR_13 = (VAR_5->src != VAR_5->dst) ? 1 : 0;
 VAR_9 = VAR_13 ? VAR_2 : VAR_0;
 VAR_10 = VAR_13 ? VAR_1 : VAR_0;

 VAR_12 = FUNC_5(&VAR_8->dma);
 if (VAR_12)
  FUNC_2(VAR_8->dev, "ablkcipher dma termination error (%d)\n",
   VAR_12);

 if (VAR_13)
  FUNC_3(VAR_8->dev, VAR_6->src_sg, VAR_6->src_nents, VAR_9);
 FUNC_3(VAR_8->dev, VAR_6->dst_sg, VAR_6->dst_nents, VAR_10);

 FUNC_6(&VAR_6->dst_tbl);

 VAR_12 = FUNC_4(VAR_8, &VAR_11);
 if (VAR_12 < 0)
  FUNC_2(VAR_8->dev, "ablkcipher operation error (%x)\n", VAR_11);

 VAR_8->async_req_done(VAR_7->qce, VAR_12);
}
