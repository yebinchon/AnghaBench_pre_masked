
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_12__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_11__ {int desc_free; } ;
struct mtk_hsdma_vchan {int desc_hw_processing; int issue_completion; TYPE_1__ vc; } ;
struct dma_device {int channels; TYPE_2__* dev; int residue_granularity; int directions; void* dst_addr_widths; void* src_addr_widths; int device_terminate_all; int device_prep_dma_memcpy; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; int copy_align; int cap_mask; } ;
struct mtk_hsdma_device {int dma_requests; int irq; struct mtk_hsdma_vchan* vc; void* pc; int lock; int pc_refcnt; int clk; int soc; int base; struct dma_device ddev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,struct resource*) ;
 void* FUNC_9 (TYPE_2__*,int,int,int ) ;
 struct mtk_hsdma_device* FUNC_10 (TYPE_2__*,int,int ) ;
 int FUNC_11 (TYPE_2__*,int ,int ,int ,int,struct mtk_hsdma_device*) ;
 int FUNC_12 (struct dma_device*) ;
 int FUNC_13 (struct dma_device*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (struct mtk_hsdma_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (scalar_t__,int ,struct mtk_hsdma_device*) ;
 int VAR_21 ;
 scalar_t__ FUNC_19 (scalar_t__,char*,int*) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct mtk_hsdma_device*) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (TYPE_1__*,struct dma_device*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_22)
{
 struct mtk_hsdma_device *VAR_23;
 struct mtk_hsdma_vchan *VAR_24;
 struct dma_device *VAR_25;
 struct resource *VAR_26;
 int VAR_27, VAR_28;

 VAR_23 = FUNC_10(&VAR_22->dev, sizeof(*VAR_23), VAR_6);
 if (!VAR_23)
  return -VAR_5;

 VAR_25 = &VAR_23->ddev;

 VAR_26 = FUNC_20(VAR_22, VAR_8, 0);
 VAR_23->base = FUNC_8(&VAR_22->dev, VAR_26);
 if (FUNC_2(VAR_23->base))
  return FUNC_3(VAR_23->base);

 VAR_23->soc = FUNC_17(&VAR_22->dev);
 if (!VAR_23->soc) {
  FUNC_4(&VAR_22->dev, "No device match found\n");
  return -VAR_4;
 }

 VAR_23->clk = FUNC_7(&VAR_22->dev, "hsdma");
 if (FUNC_2(VAR_23->clk)) {
  FUNC_4(&VAR_22->dev, "No clock for %s\n",
   FUNC_6(&VAR_22->dev));
  return FUNC_3(VAR_23->clk);
 }

 VAR_26 = FUNC_20(VAR_22, VAR_7, 0);
 if (!VAR_26) {
  FUNC_4(&VAR_22->dev, "No irq resource for %s\n",
   FUNC_6(&VAR_22->dev));
  return -VAR_3;
 }
 VAR_23->irq = VAR_26->start;

 FUNC_22(&VAR_23->pc_refcnt, 0);
 FUNC_23(&VAR_23->lock);

 FUNC_14(VAR_0, VAR_25->cap_mask);

 VAR_25->copy_align = VAR_9;
 VAR_25->device_alloc_chan_resources = VAR_13;
 VAR_25->device_free_chan_resources = VAR_14;
 VAR_25->device_tx_status = VAR_19;
 VAR_25->device_issue_pending = VAR_16;
 VAR_25->device_prep_dma_memcpy = VAR_17;
 VAR_25->device_terminate_all = VAR_18;
 VAR_25->src_addr_widths = VAR_10;
 VAR_25->dst_addr_widths = VAR_10;
 VAR_25->directions = FUNC_0(VAR_1);
 VAR_25->residue_granularity = VAR_2;
 VAR_25->dev = &VAR_22->dev;
 FUNC_1(&VAR_25->channels);

 VAR_23->dma_requests = VAR_12;
 if (VAR_22->dev.of_node && FUNC_19(VAR_22->dev.of_node,
            "dma-requests",
            &VAR_23->dma_requests)) {
  FUNC_5(&VAR_22->dev,
    "Using %u as missing dma-requests property\n",
    VAR_12);
 }

 VAR_23->pc = FUNC_9(&VAR_22->dev, VAR_11,
     sizeof(*VAR_23->pc), VAR_6);
 if (!VAR_23->pc)
  return -VAR_5;

 VAR_23->vc = FUNC_9(&VAR_22->dev, VAR_23->dma_requests,
     sizeof(*VAR_23->vc), VAR_6);
 if (!VAR_23->vc)
  return -VAR_5;

 for (VAR_27 = 0; VAR_27 < VAR_23->dma_requests; VAR_27++) {
  VAR_24 = &VAR_23->vc[VAR_27];
  VAR_24->vc.desc_free = VAR_20;
  FUNC_24(&VAR_24->vc, VAR_25);
  FUNC_15(&VAR_24->issue_completion);
  FUNC_1(&VAR_24->desc_hw_processing);
 }

 VAR_28 = FUNC_12(VAR_25);
 if (VAR_28)
  return VAR_28;

 VAR_28 = FUNC_18(VAR_22->dev.of_node,
      VAR_21, VAR_23);
 if (VAR_28) {
  FUNC_4(&VAR_22->dev,
   "MediaTek HSDMA OF registration failed %d\n", VAR_28);
  goto err_unregister;
 }

 FUNC_16(VAR_23);

 VAR_28 = FUNC_11(&VAR_22->dev, VAR_23->irq,
          VAR_15, 0,
          FUNC_6(&VAR_22->dev), VAR_23);
 if (VAR_28) {
  FUNC_4(&VAR_22->dev,
   "request_irq failed with err %d\n", VAR_28);
  goto err_unregister;
 }

 FUNC_21(VAR_22, VAR_23);

 FUNC_5(&VAR_22->dev, "MediaTek HSDMA driver registered\n");

 return 0;

err_unregister:
 FUNC_13(VAR_25);

 return VAR_28;
}
