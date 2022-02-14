
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct dma_slave_config {int direction; int src_addr_width; int dst_addr_width; scalar_t__ src_addr; scalar_t__ dst_addr; void* dst_maxburst; void* src_maxburst; } ;
struct dma_async_tx_descriptor {struct atmel_aes_dev* callback_param; int * callback; } ;
struct atmel_aes_dma {int chan; int sg_len; int sg; } ;
struct atmel_aes_dev {scalar_t__ phys_base; struct atmel_aes_dma dst; struct atmel_aes_dma src; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
typedef int * dma_async_tx_callback ;
typedef int config ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (int ,int ,int ,int,int) ;
 int FUNC_4 (int ,struct dma_slave_config*) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (struct dma_slave_config*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct atmel_aes_dev *VAR_5,
     enum dma_slave_buswidth VAR_6,
     enum dma_transfer_direction VAR_7,
     u32 VAR_8)
{
 struct dma_async_tx_descriptor *VAR_9;
 struct dma_slave_config VAR_10;
 dma_async_tx_callback VAR_11;
 struct atmel_aes_dma *VAR_12;
 int VAR_13;

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.direction = VAR_7;
 VAR_10.src_addr_width = VAR_6;
 VAR_10.dst_addr_width = VAR_6;
 VAR_10.src_maxburst = VAR_8;
 VAR_10.dst_maxburst = VAR_8;

 switch (VAR_7) {
 case 128:
  VAR_12 = &VAR_5->src;
  VAR_11 = ((void*)0);
  VAR_10.dst_addr = VAR_5->phys_base + FUNC_0(0);
  break;

 case 129:
  VAR_12 = &VAR_5->dst;
  VAR_11 = VAR_4;
  VAR_10.src_addr = VAR_5->phys_base + FUNC_1(0);
  break;

 default:
  return -VAR_2;
 }

 VAR_13 = FUNC_4(VAR_12->chan, &VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_9 = FUNC_3(VAR_12->chan, VAR_12->sg, VAR_12->sg_len, VAR_7,
           VAR_1 | VAR_0);
 if (!VAR_9)
  return -VAR_3;

 VAR_9->callback = VAR_11;
 VAR_9->callback_param = VAR_5;
 FUNC_5(VAR_9);
 FUNC_2(VAR_12->chan);

 return 0;
}
