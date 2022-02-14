
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct atmel_sha_dev* callback_param; int callback; } ;
struct atmel_sha_dma {int nents; struct scatterlist* sg; struct dma_chan* chan; struct dma_slave_config dma_conf; } ;
struct atmel_sha_dev {int dev; int resume; struct atmel_sha_dma dma_lch_in; } ;
typedef int dma_cookie_t ;
typedef int atmel_sha_fn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atmel_sha_dev*,int) ;
 int VAR_6 ;
 int FUNC_1 (struct dma_chan*) ;
 unsigned int FUNC_2 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct scatterlist*,int ,int ) ;
 struct dma_async_tx_descriptor* FUNC_5 (struct dma_chan*,struct scatterlist*,unsigned int,int ,int) ;
 int FUNC_6 (struct dma_chan*,struct dma_slave_config*) ;
 int FUNC_7 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static int FUNC_8(struct atmel_sha_dev *VAR_7,
          struct scatterlist *VAR_8,
          size_t VAR_9,
          atmel_sha_fn_t VAR_10)
{
 struct atmel_sha_dma *VAR_11 = &VAR_7->dma_lch_in;
 struct dma_slave_config *VAR_12 = &VAR_11->dma_conf;
 struct dma_chan *VAR_13 = VAR_11->chan;
 struct dma_async_tx_descriptor *VAR_14;
 dma_cookie_t VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 VAR_7->resume = VAR_10;





 VAR_11->sg = VAR_8;
 VAR_16 = FUNC_2(VAR_7->dev, VAR_11->sg, VAR_11->nents, VAR_3);
 if (!VAR_16) {
  VAR_17 = -VAR_5;
  goto exit;
 }

 VAR_12->src_maxburst = 16;
 VAR_12->dst_maxburst = 16;
 VAR_17 = FUNC_6(VAR_13, VAR_12);
 if (VAR_17)
  goto unmap_sg;

 VAR_14 = FUNC_5(VAR_13, VAR_11->sg, VAR_16, VAR_1,
           VAR_2 | VAR_0);
 if (!VAR_14) {
  VAR_17 = -VAR_5;
  goto unmap_sg;
 }

 VAR_14->callback = VAR_6;
 VAR_14->callback_param = VAR_7;
 VAR_15 = FUNC_7(VAR_14);
 VAR_17 = FUNC_3(VAR_15);
 if (VAR_17)
  goto unmap_sg;

 FUNC_1(VAR_13);

 return -VAR_4;

unmap_sg:
 FUNC_4(VAR_7->dev, VAR_11->sg, VAR_11->nents, VAR_3);
exit:
 return FUNC_0(VAR_7, VAR_17);
}
