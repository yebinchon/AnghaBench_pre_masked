
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct img_hash_request_ctx {scalar_t__ dma_ct; } ;
struct img_hash_dev {int err; int dma_lch; int dev; int req; } ;
struct dma_async_tx_descriptor {struct img_hash_dev* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct img_hash_request_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct scatterlist*,int,int ) ;
 int FUNC_4 (int ,struct scatterlist*,int,int ) ;
 struct dma_async_tx_descriptor* FUNC_5 (int ,struct scatterlist*,scalar_t__,int ,int) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct img_hash_dev *VAR_6, struct scatterlist *VAR_7)
{
 struct dma_async_tx_descriptor *VAR_8;
 struct img_hash_request_ctx *VAR_9 = FUNC_0(VAR_6->req);

 VAR_9->dma_ct = FUNC_3(VAR_6->dev, VAR_7, 1, VAR_3);
 if (VAR_9->dma_ct == 0) {
  FUNC_1(VAR_6->dev, "Invalid DMA sg\n");
  VAR_6->err = -VAR_4;
  return -VAR_4;
 }

 VAR_8 = FUNC_5(VAR_6->dma_lch,
           VAR_7,
           VAR_9->dma_ct,
           VAR_1,
           VAR_2 | VAR_0);
 if (!VAR_8) {
  FUNC_1(VAR_6->dev, "Null DMA descriptor\n");
  VAR_6->err = -VAR_4;
  FUNC_4(VAR_6->dev, VAR_7, 1, VAR_3);
  return -VAR_4;
 }
 VAR_8->callback = VAR_5;
 VAR_8->callback_param = VAR_6;
 FUNC_6(VAR_8);
 FUNC_2(VAR_6->dma_lch);

 return 0;
}
