
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct stm32_i2c_dma {int dma_data_dir; int dma_len; int dma_buf; TYPE_2__* chan_using; int dma_complete; int dma_transfer_dir; TYPE_2__* chan_tx; TYPE_2__* chan_rx; } ;
struct dma_async_tx_descriptor {void* callback_param; int callback; } ;
struct device {int dummy; } ;
typedef int dma_async_tx_callback ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct device*,int *,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int ,int ,int ) ;
 struct dma_async_tx_descriptor* FUNC_6 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_7 (struct dma_async_tx_descriptor*) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct device *VAR_6, struct stm32_i2c_dma *VAR_7,
       bool VAR_8, u32 VAR_9, u8 *VAR_10,
       dma_async_tx_callback VAR_11,
       void *VAR_12)
{
 struct dma_async_tx_descriptor *VAR_13;
 struct device *VAR_14;
 int VAR_15;

 if (VAR_8) {
  VAR_7->chan_using = VAR_7->chan_rx;
  VAR_7->dma_transfer_dir = VAR_0;
  VAR_7->dma_data_dir = VAR_1;
 } else {
  VAR_7->chan_using = VAR_7->chan_tx;
  VAR_7->dma_transfer_dir = VAR_2;
  VAR_7->dma_data_dir = VAR_4;
 }

 VAR_7->dma_len = VAR_9;
 VAR_14 = VAR_7->chan_using->device->dev;

 VAR_7->dma_buf = FUNC_2(VAR_14, VAR_10, VAR_7->dma_len,
          VAR_7->dma_data_dir);
 if (FUNC_3(VAR_14, VAR_7->dma_buf)) {
  FUNC_0(VAR_6, "DMA mapping failed\n");
  return -VAR_5;
 }

 VAR_13 = FUNC_6(VAR_7->chan_using, VAR_7->dma_buf,
          VAR_7->dma_len,
          VAR_7->dma_transfer_dir,
          VAR_3);
 if (!VAR_13) {
  FUNC_0(VAR_6, "Not able to get desc for DMA xfer\n");
  VAR_15 = -VAR_5;
  goto err;
 }

 FUNC_8(&VAR_7->dma_complete);

 VAR_13->callback = VAR_11;
 VAR_13->callback_param = VAR_12;
 VAR_15 = FUNC_4(FUNC_7(VAR_13));
 if (VAR_15 < 0) {
  FUNC_0(VAR_6, "DMA submit failed\n");
  goto err;
 }

 FUNC_1(VAR_7->chan_using);

 return 0;

err:
 FUNC_5(VAR_14, VAR_7->dma_buf, VAR_7->dma_len,
    VAR_7->dma_data_dir);
 return VAR_15;
}
