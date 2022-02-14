
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;
struct imx_i2c_struct {TYPE_1__ adapter; struct imx_i2c_dma* dma; } ;
struct imx_i2c_dma {int dma_data_dir; int dma_len; int dma_buf; TYPE_3__* chan_using; int cmd_complete; int dma_transfer_dir; } ;
struct i2c_msg {int buf; } ;
struct dma_async_tx_descriptor {struct imx_i2c_struct* callback_param; int callback; } ;
struct TYPE_8__ {TYPE_2__* device; } ;
struct TYPE_7__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int ,int ,int ) ;
 struct dma_async_tx_descriptor* FUNC_6 (TYPE_3__*,int ,int ,int ,int) ;
 int FUNC_7 (struct dma_async_tx_descriptor*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct imx_i2c_struct *VAR_4,
     struct i2c_msg *VAR_5)
{
 struct imx_i2c_dma *VAR_6 = VAR_4->dma;
 struct dma_async_tx_descriptor *VAR_7;
 struct device *VAR_8 = &VAR_4->adapter.dev;
 struct device *VAR_9 = VAR_6->chan_using->device->dev;

 VAR_6->dma_buf = FUNC_2(VAR_9, VAR_5->buf,
     VAR_6->dma_len, VAR_6->dma_data_dir);
 if (FUNC_3(VAR_9, VAR_6->dma_buf)) {
  FUNC_0(VAR_8, "DMA mapping failed\n");
  goto err_map;
 }

 VAR_7 = FUNC_6(VAR_6->chan_using, VAR_6->dma_buf,
     VAR_6->dma_len, VAR_6->dma_transfer_dir,
     VAR_1 | VAR_0);
 if (!VAR_7) {
  FUNC_0(VAR_8, "Not able to get desc for DMA xfer\n");
  goto err_desc;
 }

 FUNC_9(&VAR_6->cmd_complete);
 VAR_7->callback = VAR_3;
 VAR_7->callback_param = VAR_4;
 if (FUNC_4(FUNC_7(VAR_7))) {
  FUNC_0(VAR_8, "DMA submit failed\n");
  goto err_submit;
 }

 FUNC_1(VAR_6->chan_using);
 return 0;

err_submit:
 FUNC_8(VAR_6->chan_using);
err_desc:
 FUNC_5(VAR_9, VAR_6->dma_buf,
   VAR_6->dma_len, VAR_6->dma_data_dir);
err_map:
 return -VAR_2;
}
