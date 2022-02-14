
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t u32 ;
struct resource {int start; } ;
struct TYPE_13__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_12__ {int desc_free; } ;
struct mtk_cqdma_vchan {int issue_completion; TYPE_2__ vc; } ;
struct dma_device {int channels; TYPE_3__* dev; int residue_granularity; int directions; void* dst_addr_widths; void* src_addr_widths; int device_terminate_all; int device_prep_dma_memcpy; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; int copy_align; int cap_mask; } ;
struct mtk_cqdma_device {int dma_requests; int dma_channels; TYPE_1__** pc; struct mtk_cqdma_vchan* vc; int clk; struct dma_device ddev; } ;
struct TYPE_11__ {int tasklet; int irq; int base; int refcnt; int lock; int queue; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (TYPE_3__*,char*,...) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*,struct resource*) ;
 void* FUNC_9 (TYPE_3__*,int,int,int ) ;
 struct mtk_cqdma_device* FUNC_10 (TYPE_3__*,int,int ) ;
 int FUNC_11 (TYPE_3__*,int ,int ,int ,int,struct mtk_cqdma_device*) ;
 int FUNC_12 (struct dma_device*) ;
 int FUNC_13 (struct dma_device*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (struct mtk_cqdma_device*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_17 (scalar_t__,int ,struct mtk_cqdma_device*) ;
 int VAR_21 ;
 scalar_t__ FUNC_18 (scalar_t__,char*,int*) ;
 struct resource* FUNC_19 (struct platform_device*,int ,size_t) ;
 int FUNC_20 (struct platform_device*,struct mtk_cqdma_device*) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int ,unsigned long) ;
 int FUNC_24 (TYPE_2__*,struct dma_device*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_22)
{
 struct mtk_cqdma_device *VAR_23;
 struct mtk_cqdma_vchan *VAR_24;
 struct dma_device *VAR_25;
 struct resource *VAR_26;
 int VAR_27;
 u32 VAR_28;

 VAR_23 = FUNC_10(&VAR_22->dev, sizeof(*VAR_23), VAR_5);
 if (!VAR_23)
  return -VAR_4;

 VAR_25 = &VAR_23->ddev;

 VAR_23->clk = FUNC_7(&VAR_22->dev, "cqdma");
 if (FUNC_2(VAR_23->clk)) {
  FUNC_4(&VAR_22->dev, "No clock for %s\n",
   FUNC_6(&VAR_22->dev));
  return FUNC_3(VAR_23->clk);
 }

 FUNC_14(VAR_0, VAR_25->cap_mask);

 VAR_25->copy_align = VAR_8;
 VAR_25->device_alloc_chan_resources = VAR_12;
 VAR_25->device_free_chan_resources = VAR_13;
 VAR_25->device_tx_status = VAR_19;
 VAR_25->device_issue_pending = VAR_15;
 VAR_25->device_prep_dma_memcpy = VAR_16;
 VAR_25->device_terminate_all = VAR_18;
 VAR_25->src_addr_widths = VAR_9;
 VAR_25->dst_addr_widths = VAR_9;
 VAR_25->directions = FUNC_0(VAR_1);
 VAR_25->residue_granularity = VAR_2;
 VAR_25->dev = &VAR_22->dev;
 FUNC_1(&VAR_25->channels);

 if (VAR_22->dev.of_node && FUNC_18(VAR_22->dev.of_node,
            "dma-requests",
            &VAR_23->dma_requests)) {
  FUNC_5(&VAR_22->dev,
    "Using %u as missing dma-requests property\n",
    VAR_11);

  VAR_23->dma_requests = VAR_11;
 }

 if (VAR_22->dev.of_node && FUNC_18(VAR_22->dev.of_node,
            "dma-channels",
            &VAR_23->dma_channels)) {
  FUNC_5(&VAR_22->dev,
    "Using %u as missing dma-channels property\n",
    VAR_10);

  VAR_23->dma_channels = VAR_10;
 }

 VAR_23->pc = FUNC_9(&VAR_22->dev, VAR_23->dma_channels,
     sizeof(*VAR_23->pc), VAR_5);
 if (!VAR_23->pc)
  return -VAR_4;


 for (VAR_28 = 0; VAR_28 < VAR_23->dma_channels; ++VAR_28) {
  VAR_23->pc[VAR_28] = FUNC_9(&VAR_22->dev, 1,
         sizeof(**VAR_23->pc), VAR_5);
  if (!VAR_23->pc[VAR_28])
   return -VAR_4;

  FUNC_1(&VAR_23->pc[VAR_28]->queue);
  FUNC_22(&VAR_23->pc[VAR_28]->lock);
  FUNC_21(&VAR_23->pc[VAR_28]->refcnt, 0);

  VAR_26 = FUNC_19(VAR_22, VAR_7, VAR_28);
  if (!VAR_26) {
   FUNC_4(&VAR_22->dev, "No mem resource for %s\n",
    FUNC_6(&VAR_22->dev));
   return -VAR_3;
  }

  VAR_23->pc[VAR_28]->base = FUNC_8(&VAR_22->dev, VAR_26);
  if (FUNC_2(VAR_23->pc[VAR_28]->base))
   return FUNC_3(VAR_23->pc[VAR_28]->base);


  VAR_26 = FUNC_19(VAR_22, VAR_6, VAR_28);
  if (!VAR_26) {
   FUNC_4(&VAR_22->dev, "No irq resource for %s\n",
    FUNC_6(&VAR_22->dev));
   return -VAR_3;
  }
  VAR_23->pc[VAR_28]->irq = VAR_26->start;

  VAR_27 = FUNC_11(&VAR_22->dev, VAR_23->pc[VAR_28]->irq,
           VAR_14, 0, FUNC_6(&VAR_22->dev),
           VAR_23);
  if (VAR_27) {
   FUNC_4(&VAR_22->dev,
    "request_irq failed with err %d\n", VAR_27);
   return -VAR_3;
  }
 }


 VAR_23->vc = FUNC_9(&VAR_22->dev, VAR_23->dma_requests,
     sizeof(*VAR_23->vc), VAR_5);
 if (!VAR_23->vc)
  return -VAR_4;

 for (VAR_28 = 0; VAR_28 < VAR_23->dma_requests; VAR_28++) {
  VAR_24 = &VAR_23->vc[VAR_28];
  VAR_24->vc.desc_free = VAR_20;
  FUNC_24(&VAR_24->vc, VAR_25);
  FUNC_15(&VAR_24->issue_completion);
 }

 VAR_27 = FUNC_12(VAR_25);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_17(VAR_22->dev.of_node,
      VAR_21, VAR_23);
 if (VAR_27) {
  FUNC_4(&VAR_22->dev,
   "MediaTek CQDMA OF registration failed %d\n", VAR_27);
  goto err_unregister;
 }

 VAR_27 = FUNC_16(VAR_23);
 if (VAR_27) {
  FUNC_4(&VAR_22->dev,
   "MediaTek CQDMA HW initialization failed %d\n", VAR_27);
  goto err_unregister;
 }

 FUNC_20(VAR_22, VAR_23);


 for (VAR_28 = 0; VAR_28 < VAR_23->dma_channels; ++VAR_28)
  FUNC_23(&VAR_23->pc[VAR_28]->tasklet, VAR_17,
        (unsigned long)VAR_23->pc[VAR_28]);

 FUNC_5(&VAR_22->dev, "MediaTek CQDMA driver registered\n");

 return 0;

err_unregister:
 FUNC_13(VAR_25);

 return VAR_27;
}
