
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct dma_device {void* src_addr_widths; void* dst_addr_widths; TYPE_1__* dev; int device_config; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; int device_issue_pending; int device_terminate_all; int device_prep_dma_memcpy; int cap_mask; int channels; } ;
struct zynqmp_dma_device {TYPE_1__* dev; TYPE_3__* chan; struct dma_device common; void* clk_apb; void* clk_main; } ;
struct TYPE_17__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_18__ {int bus_width; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 void* FUNC_7 (TYPE_1__*,char*) ;
 struct zynqmp_dma_device* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (struct dma_device*) ;
 int FUNC_10 (struct dma_device*) ;
 int FUNC_11 (int ,int ) ;
 int VAR_4 ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (int ,int ,struct zynqmp_dma_device*) ;
 int VAR_5 ;
 int FUNC_14 (struct platform_device*,struct zynqmp_dma_device*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,int ) ;
 int FUNC_22 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_23 (struct zynqmp_dma_device*,struct platform_device*) ;
 int FUNC_24 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_12)
{
 struct zynqmp_dma_device *VAR_13;
 struct dma_device *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_8(&VAR_12->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->dev = &VAR_12->dev;
 FUNC_2(&VAR_13->common.channels);

 FUNC_12(&VAR_12->dev, FUNC_1(44));
 FUNC_11(VAR_0, VAR_13->common.cap_mask);

 VAR_14 = &VAR_13->common;
 VAR_14->device_prep_dma_memcpy = VAR_11;
 VAR_14->device_terminate_all = VAR_8;
 VAR_14->device_issue_pending = VAR_10;
 VAR_14->device_alloc_chan_resources = VAR_6;
 VAR_14->device_free_chan_resources = VAR_9;
 VAR_14->device_tx_status = VAR_4;
 VAR_14->device_config = VAR_7;
 VAR_14->dev = &VAR_12->dev;

 VAR_13->clk_main = FUNC_7(&VAR_12->dev, "clk_main");
 if (FUNC_3(VAR_13->clk_main)) {
  FUNC_5(&VAR_12->dev, "main clock not found.\n");
  return FUNC_4(VAR_13->clk_main);
 }

 VAR_13->clk_apb = FUNC_7(&VAR_12->dev, "clk_apb");
 if (FUNC_3(VAR_13->clk_apb)) {
  FUNC_5(&VAR_12->dev, "apb clock not found.\n");
  return FUNC_4(VAR_13->clk_apb);
 }

 FUNC_14(VAR_12, VAR_13);
 FUNC_21(VAR_13->dev, VAR_3);
 FUNC_22(VAR_13->dev);
 FUNC_16(VAR_13->dev);
 FUNC_18(VAR_13->dev);
 if (!FUNC_17(VAR_13->dev)) {
  VAR_15 = FUNC_25(VAR_13->dev);
  if (VAR_15)
   return VAR_15;
 }

 VAR_15 = FUNC_23(VAR_13, VAR_12);
 if (VAR_15) {
  FUNC_5(&VAR_12->dev, "Probing channel failed\n");
  goto err_disable_pm;
 }

 VAR_14->dst_addr_widths = FUNC_0(VAR_13->chan->bus_width / 8);
 VAR_14->src_addr_widths = FUNC_0(VAR_13->chan->bus_width / 8);

 FUNC_9(&VAR_13->common);

 VAR_15 = FUNC_13(VAR_12->dev.of_node,
      VAR_5, VAR_13);
 if (VAR_15) {
  FUNC_5(&VAR_12->dev, "Unable to register DMA to DT\n");
  FUNC_10(&VAR_13->common);
  goto free_chan_resources;
 }

 FUNC_19(VAR_13->dev);
 FUNC_20(VAR_13->dev);

 FUNC_6(&VAR_12->dev, "ZynqMP DMA driver Probe success\n");

 return 0;

free_chan_resources:
 FUNC_24(VAR_13->chan);
err_disable_pm:
 if (!FUNC_17(VAR_13->dev))
  FUNC_26(VAR_13->dev);
 FUNC_15(VAR_13->dev);
 return VAR_15;
}
