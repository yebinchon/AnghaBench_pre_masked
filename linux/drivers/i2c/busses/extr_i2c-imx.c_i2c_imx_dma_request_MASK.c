
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct imx_i2c_struct {struct imx_i2c_dma* dma; TYPE_2__* hwdata; TYPE_1__ adapter; } ;
struct imx_i2c_dma {void* chan_tx; void* chan_rx; int cmd_complete; } ;
struct dma_slave_config {int dst_maxburst; int src_maxburst; int direction; void* src_addr_width; void* src_addr; void* dst_addr_width; void* dst_addr; } ;
typedef void* dma_addr_t ;
struct TYPE_4__ {int regshift; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 int FUNC_4 (struct device*,struct imx_i2c_dma*) ;
 struct imx_i2c_dma* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (struct device*,char*) ;
 int FUNC_9 (void*,struct dma_slave_config*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct imx_i2c_struct *VAR_7,
      dma_addr_t VAR_8)
{
 struct imx_i2c_dma *VAR_9;
 struct dma_slave_config VAR_10;
 struct device *VAR_11 = &VAR_7->adapter.dev;
 int VAR_12;

 VAR_9 = FUNC_5(VAR_11, sizeof(*VAR_9), VAR_5);
 if (!VAR_9)
  return;

 VAR_9->chan_tx = FUNC_8(VAR_11, "tx");
 if (FUNC_0(VAR_9->chan_tx)) {
  VAR_12 = FUNC_1(VAR_9->chan_tx);
  if (VAR_12 != -VAR_3 && VAR_12 != -VAR_4)
   FUNC_2(VAR_11, "can't request DMA tx channel (%d)\n", VAR_12);
  goto fail_al;
 }

 VAR_10.dst_addr = VAR_8 +
    (VAR_6 << VAR_7->hwdata->regshift);
 VAR_10.dst_addr_width = VAR_2;
 VAR_10.dst_maxburst = 1;
 VAR_10.direction = VAR_1;
 VAR_12 = FUNC_9(VAR_9->chan_tx, &VAR_10);
 if (VAR_12 < 0) {
  FUNC_2(VAR_11, "can't configure tx channel (%d)\n", VAR_12);
  goto fail_tx;
 }

 VAR_9->chan_rx = FUNC_8(VAR_11, "rx");
 if (FUNC_0(VAR_9->chan_rx)) {
  VAR_12 = FUNC_1(VAR_9->chan_rx);
  if (VAR_12 != -VAR_3 && VAR_12 != -VAR_4)
   FUNC_2(VAR_11, "can't request DMA rx channel (%d)\n", VAR_12);
  goto fail_tx;
 }

 VAR_10.src_addr = VAR_8 +
    (VAR_6 << VAR_7->hwdata->regshift);
 VAR_10.src_addr_width = VAR_2;
 VAR_10.src_maxburst = 1;
 VAR_10.direction = VAR_0;
 VAR_12 = FUNC_9(VAR_9->chan_rx, &VAR_10);
 if (VAR_12 < 0) {
  FUNC_2(VAR_11, "can't configure rx channel (%d)\n", VAR_12);
  goto fail_rx;
 }

 VAR_7->dma = VAR_9;
 FUNC_10(&VAR_9->cmd_complete);
 FUNC_3(VAR_11, "using %s (tx) and %s (rx) for DMA transfers\n",
  FUNC_6(VAR_9->chan_tx), FUNC_6(VAR_9->chan_rx));

 return;

fail_rx:
 FUNC_7(VAR_9->chan_rx);
fail_tx:
 FUNC_7(VAR_9->chan_tx);
fail_al:
 FUNC_4(VAR_11, VAR_9);
}
