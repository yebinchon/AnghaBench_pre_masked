
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_14__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct of_device_id {struct fsl_edma_drvdata* data; } ;
struct TYPE_13__ {int directions; void* dst_addr_widths; void* src_addr_widths; int device_issue_pending; int device_synchronize; int device_terminate_all; int device_resume; int device_pause; int device_config; int device_prep_dma_cyclic; int device_prep_slave_sg; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; TYPE_4__* dev; int cap_mask; int channels; } ;
struct edma_regs {int cr; int intl; TYPE_1__* tcd; } ;
struct fsl_edma_engine {int n_chans; struct fsl_edma_drvdata const* drvdata; TYPE_3__ dma_dev; struct fsl_edma_chan* chans; int big_endian; void** muxclk; void** muxbase; void* dmaclk; struct edma_regs regs; void* membase; int fsl_edma_mutex; } ;
struct fsl_edma_drvdata {int dmamuxs; int (* setup_irq ) (struct platform_device*,struct fsl_edma_engine*) ;scalar_t__ has_dmaclk; } ;
struct TYPE_12__ {int desc_free; } ;
struct fsl_edma_chan {int idle; TYPE_2__ vchan; int dma_dir; scalar_t__ slave_id; int pm_state; struct fsl_edma_engine* edma; } ;
struct device_node {int dummy; } ;
struct TYPE_11__ {int csr; } ;


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
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_13 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_4__*,char*,...) ;
 void* FUNC_6 (TYPE_4__*,char*) ;
 void* FUNC_7 (TYPE_4__*,struct resource*) ;
 struct fsl_edma_engine* FUNC_8 (TYPE_4__*,int,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct fsl_edma_engine*,int,int ) ;
 int FUNC_13 (struct fsl_edma_engine*,int,int *) ;
 int FUNC_14 (struct fsl_edma_engine*,int) ;
 int VAR_14 ;
 int FUNC_15 (struct fsl_edma_chan*,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_16 (struct fsl_edma_engine*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct device_node*,int ,struct fsl_edma_engine*) ;
 struct of_device_id* FUNC_19 (int ,TYPE_4__*) ;
 int FUNC_20 (struct device_node*,char*) ;
 int FUNC_21 (struct device_node*,char*,int*) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int) ;
 int FUNC_23 (struct platform_device*,struct fsl_edma_engine*) ;
 int FUNC_24 (char*,char*,int) ;
 int FUNC_25 (struct platform_device*,struct fsl_edma_engine*) ;
 int FUNC_26 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_28)
{
 const struct of_device_id *VAR_29 =
   FUNC_19(VAR_15, &VAR_28->dev);
 struct device_node *VAR_30 = VAR_28->dev.of_node;
 struct fsl_edma_engine *VAR_31;
 const struct fsl_edma_drvdata *VAR_32 = ((void*)0);
 struct fsl_edma_chan *VAR_33;
 struct edma_regs *VAR_34;
 struct resource *VAR_35;
 int VAR_36, VAR_37;
 int VAR_38, VAR_39;

 if (VAR_29)
  VAR_32 = VAR_29->data;
 if (!VAR_32) {
  FUNC_5(&VAR_28->dev, "unable to find driver data\n");
  return -VAR_8;
 }

 VAR_38 = FUNC_21(VAR_30, "dma-channels", &VAR_37);
 if (VAR_38) {
  FUNC_5(&VAR_28->dev, "Can't get dma-channels.\n");
  return VAR_38;
 }

 VAR_36 = sizeof(*VAR_31) + sizeof(*VAR_33) * VAR_37;
 VAR_31 = FUNC_8(&VAR_28->dev, VAR_36, VAR_11);
 if (!VAR_31)
  return -VAR_9;

 VAR_31->drvdata = VAR_32;
 VAR_31->n_chans = VAR_37;
 FUNC_17(&VAR_31->fsl_edma_mutex);

 VAR_35 = FUNC_22(VAR_28, VAR_12, 0);
 VAR_31->membase = FUNC_7(&VAR_28->dev, VAR_35);
 if (FUNC_2(VAR_31->membase))
  return FUNC_3(VAR_31->membase);

 FUNC_16(VAR_31);
 VAR_34 = &VAR_31->regs;

 if (VAR_32->has_dmaclk) {
  VAR_31->dmaclk = FUNC_6(&VAR_28->dev, "dma");
  if (FUNC_2(VAR_31->dmaclk)) {
   FUNC_5(&VAR_28->dev, "Missing DMA block clock.\n");
   return FUNC_3(VAR_31->dmaclk);
  }

  VAR_38 = FUNC_4(VAR_31->dmaclk);
  if (VAR_38) {
   FUNC_5(&VAR_28->dev, "DMA clk block failed.\n");
   return VAR_38;
  }
 }

 for (VAR_39 = 0; VAR_39 < VAR_31->drvdata->dmamuxs; VAR_39++) {
  char VAR_40[32];

  VAR_35 = FUNC_22(VAR_28, VAR_12, 1 + VAR_39);
  VAR_31->muxbase[VAR_39] = FUNC_7(&VAR_28->dev, VAR_35);
  if (FUNC_2(VAR_31->muxbase[VAR_39])) {

   FUNC_14(VAR_31, VAR_39);
   return FUNC_3(VAR_31->muxbase[VAR_39]);
  }

  FUNC_24(VAR_40, "dmamux%d", VAR_39);
  VAR_31->muxclk[VAR_39] = FUNC_6(&VAR_28->dev, VAR_40);
  if (FUNC_2(VAR_31->muxclk[VAR_39])) {
   FUNC_5(&VAR_28->dev, "Missing DMAMUX block clock.\n");

   FUNC_14(VAR_31, VAR_39);
   return FUNC_3(VAR_31->muxclk[VAR_39]);
  }

  VAR_38 = FUNC_4(VAR_31->muxclk[VAR_39]);
  if (VAR_38)

   FUNC_14(VAR_31, VAR_39);

 }

 VAR_31->big_endian = FUNC_20(VAR_30, "big-endian");

 FUNC_1(&VAR_31->dma_dev.channels);
 for (VAR_39 = 0; VAR_39 < VAR_31->n_chans; VAR_39++) {
  struct fsl_edma_chan *VAR_41 = &VAR_31->chans[VAR_39];

  VAR_41->edma = VAR_31;
  VAR_41->pm_state = VAR_13;
  VAR_41->slave_id = 0;
  VAR_41->idle = 1;
  VAR_41->dma_dir = VAR_3;
  VAR_41->vchan.desc_free = VAR_17;
  FUNC_26(&VAR_41->vchan, &VAR_31->dma_dev);

  FUNC_13(VAR_31, 0x0, &VAR_34->tcd[VAR_39].csr);
  FUNC_15(VAR_41, 0, 0);
 }

 FUNC_12(VAR_31, ~0, VAR_34->intl);
 VAR_38 = VAR_31->drvdata->setup_irq(VAR_28, VAR_31);
 if (VAR_38)
  return VAR_38;

 FUNC_11(VAR_4, VAR_31->dma_dev.cap_mask);
 FUNC_11(VAR_5, VAR_31->dma_dev.cap_mask);
 FUNC_11(VAR_0, VAR_31->dma_dev.cap_mask);

 VAR_31->dma_dev.dev = &VAR_28->dev;
 VAR_31->dma_dev.device_alloc_chan_resources
  = VAR_14;
 VAR_31->dma_dev.device_free_chan_resources
  = VAR_16;
 VAR_31->dma_dev.device_tx_status = VAR_26;
 VAR_31->dma_dev.device_prep_slave_sg = VAR_21;
 VAR_31->dma_dev.device_prep_dma_cyclic = VAR_20;
 VAR_31->dma_dev.device_config = VAR_23;
 VAR_31->dma_dev.device_pause = VAR_19;
 VAR_31->dma_dev.device_resume = VAR_22;
 VAR_31->dma_dev.device_terminate_all = VAR_25;
 VAR_31->dma_dev.device_synchronize = VAR_24;
 VAR_31->dma_dev.device_issue_pending = VAR_18;

 VAR_31->dma_dev.src_addr_widths = VAR_10;
 VAR_31->dma_dev.dst_addr_widths = VAR_10;
 VAR_31->dma_dev.directions = FUNC_0(VAR_1) | FUNC_0(VAR_2);

 FUNC_23(VAR_28, VAR_31);

 VAR_38 = FUNC_9(&VAR_31->dma_dev);
 if (VAR_38) {
  FUNC_5(&VAR_28->dev,
   "Can't register Freescale eDMA engine. (%d)\n", VAR_38);
  FUNC_14(VAR_31, VAR_31->drvdata->dmamuxs);
  return VAR_38;
 }

 VAR_38 = FUNC_18(VAR_30, VAR_27, VAR_31);
 if (VAR_38) {
  FUNC_5(&VAR_28->dev,
   "Can't register Freescale eDMA of_dma. (%d)\n", VAR_38);
  FUNC_10(&VAR_31->dma_dev);
  FUNC_14(VAR_31, VAR_31->drvdata->dmamuxs);
  return VAR_38;
 }


 FUNC_12(VAR_31, VAR_7 | VAR_6, VAR_34->cr);

 return 0;
}
