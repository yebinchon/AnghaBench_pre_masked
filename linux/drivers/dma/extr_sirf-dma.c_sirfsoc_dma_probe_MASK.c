
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct sirfsoc_dmadata {int type; int exec; } ;
struct TYPE_6__ {int device_node; struct dma_device* device; } ;
struct sirfsoc_dma_chan {TYPE_3__ chan; int lock; int completed; int active; int queued; int prepared; int free; } ;
struct dma_device {int directions; int channels; int cap_mask; void* dst_addr_widths; void* src_addr_widths; int device_prep_dma_cyclic; int device_prep_interleaved_dma; int device_tx_status; int device_terminate_all; int device_resume; int device_pause; int device_config; int device_issue_pending; int device_free_chan_resources; int device_alloc_chan_resources; struct device* dev; } ;
struct sirfsoc_dma {int irq; int tasklet; struct sirfsoc_dma_chan* channels; struct dma_device dma; int base; int clk; int type; int exec_desc; } ;
struct resource {int start; } ;
struct device {TYPE_1__* driver; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {int of_match_table; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,struct sirfsoc_dma*) ;
 int FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct device*,int ,int ) ;
 struct sirfsoc_dma* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct dma_device*) ;
 int FUNC_11 (struct dma_device*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int ,struct sirfsoc_dma*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct device_node*,int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (struct device_node*,int ,struct resource*) ;
 int FUNC_19 (struct device_node*,int ,struct sirfsoc_dma*) ;
 int VAR_13 ;
 TYPE_2__* FUNC_20 (int ,struct device*) ;
 scalar_t__ FUNC_21 (struct device_node*,char*,int *) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (int ,int *,int ,int ,struct sirfsoc_dma*) ;
 int FUNC_24 (struct resource*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_26)
{
 struct device_node *VAR_27 = VAR_26->dev.of_node;
 struct device *VAR_28 = &VAR_26->dev;
 struct dma_device *VAR_29;
 struct sirfsoc_dma *VAR_30;
 struct sirfsoc_dma_chan *VAR_31;
 struct sirfsoc_dmadata *VAR_32;
 struct resource VAR_33;
 ulong VAR_34, VAR_35;
 u32 VAR_36;
 int VAR_37, VAR_38;

 VAR_30 = FUNC_9(VAR_28, sizeof(*VAR_30), VAR_10);
 if (!VAR_30)
  return -VAR_9;

 VAR_32 = (struct sirfsoc_dmadata *)
  (FUNC_20(VAR_26->dev.driver->of_match_table,
     &VAR_26->dev)->data);
 VAR_30->exec_desc = VAR_32->exec;
 VAR_30->type = VAR_32->type;

 if (FUNC_21(VAR_27, "cell-index", &VAR_36)) {
  FUNC_4(VAR_28, "Fail to get DMAC index\n");
  return -VAR_8;
 }

 VAR_30->irq = FUNC_16(VAR_27, 0);
 if (!VAR_30->irq) {
  FUNC_4(VAR_28, "Error mapping IRQ!\n");
  return -VAR_7;
 }

 VAR_30->clk = FUNC_7(VAR_28, ((void*)0));
 if (FUNC_2(VAR_30->clk)) {
  FUNC_4(VAR_28, "failed to get a clock.\n");
  return FUNC_3(VAR_30->clk);
 }

 VAR_37 = FUNC_18(VAR_27, 0, &VAR_33);
 if (VAR_37) {
  FUNC_4(VAR_28, "Error parsing memory region!\n");
  goto irq_dispose;
 }

 VAR_34 = VAR_33.start;
 VAR_35 = FUNC_24(&VAR_33);

 VAR_30->base = FUNC_8(VAR_28, VAR_34, VAR_35);
 if (!VAR_30->base) {
  FUNC_4(VAR_28, "Error mapping memory region!\n");
  VAR_37 = -VAR_9;
  goto irq_dispose;
 }

 VAR_37 = FUNC_23(VAR_30->irq, &VAR_16, 0, VAR_6, VAR_30);
 if (VAR_37) {
  FUNC_4(VAR_28, "Error requesting IRQ!\n");
  VAR_37 = -VAR_7;
  goto irq_dispose;
 }

 VAR_29 = &VAR_30->dma;
 VAR_29->dev = VAR_28;

 VAR_29->device_alloc_chan_resources = VAR_14;
 VAR_29->device_free_chan_resources = VAR_15;
 VAR_29->device_issue_pending = VAR_17;
 VAR_29->device_config = VAR_22;
 VAR_29->device_pause = VAR_18;
 VAR_29->device_resume = VAR_21;
 VAR_29->device_terminate_all = VAR_24;
 VAR_29->device_tx_status = VAR_25;
 VAR_29->device_prep_interleaved_dma = VAR_20;
 VAR_29->device_prep_dma_cyclic = VAR_19;
 VAR_29->src_addr_widths = VAR_11;
 VAR_29->dst_addr_widths = VAR_11;
 VAR_29->directions = FUNC_0(VAR_1) | FUNC_0(VAR_3);

 FUNC_1(&VAR_29->channels);
 FUNC_12(VAR_5, VAR_29->cap_mask);
 FUNC_12(VAR_0, VAR_29->cap_mask);
 FUNC_12(VAR_2, VAR_29->cap_mask);
 FUNC_12(VAR_4, VAR_29->cap_mask);

 for (VAR_38 = 0; VAR_38 < VAR_12; VAR_38++) {
  VAR_31 = &VAR_30->channels[VAR_38];

  VAR_31->chan.device = VAR_29;
  FUNC_13(&VAR_31->chan);

  FUNC_1(&VAR_31->free);
  FUNC_1(&VAR_31->prepared);
  FUNC_1(&VAR_31->queued);
  FUNC_1(&VAR_31->active);
  FUNC_1(&VAR_31->completed);

  FUNC_25(&VAR_31->lock);
  FUNC_17(&VAR_31->chan.device_node, &VAR_29->channels);
 }

 FUNC_26(&VAR_30->tasklet, VAR_23, (unsigned long)VAR_30);


 FUNC_6(VAR_28, VAR_30);

 VAR_37 = FUNC_10(VAR_29);
 if (VAR_37)
  goto free_irq;


 VAR_37 = FUNC_19(VAR_27, VAR_13, VAR_30);
 if (VAR_37) {
  FUNC_4(VAR_28, "failed to register DMA controller\n");
  goto unreg_dma_dev;
 }

 FUNC_22(&VAR_26->dev);
 FUNC_5(VAR_28, "initialized SIRFSOC DMAC driver\n");

 return 0;

unreg_dma_dev:
 FUNC_11(VAR_29);
free_irq:
 FUNC_14(VAR_30->irq, VAR_30);
irq_dispose:
 FUNC_15(VAR_30->irq);
 return VAR_37;
}
