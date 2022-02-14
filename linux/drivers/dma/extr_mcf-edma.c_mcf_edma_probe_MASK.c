
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct mcf_edma_platform_data {int dma_channels; int slavecnt; int slave_map; } ;
struct TYPE_8__ {int mapcnt; int map; int fn; } ;
struct TYPE_10__ {int directions; TYPE_2__ filter; void* dst_addr_widths; void* src_addr_widths; int device_issue_pending; int device_terminate_all; int device_resume; int device_pause; int device_tx_status; int device_prep_slave_sg; int device_prep_dma_cyclic; int device_config; int device_free_chan_resources; int device_alloc_chan_resources; int * dev; int cap_mask; int channels; } ;
struct edma_regs {int * cr; int * intl; int * inth; TYPE_1__* tcd; } ;
struct fsl_edma_engine {int n_chans; int big_endian; TYPE_4__ dma_dev; TYPE_5__* drvdata; struct fsl_edma_chan* chans; struct edma_regs regs; int membase; int fsl_edma_mutex; } ;
struct TYPE_9__ {int desc_free; } ;
struct fsl_edma_chan {int slave_id; int idle; TYPE_3__ vchan; int dma_dir; struct fsl_edma_engine* edma; } ;
struct TYPE_11__ {int (* setup_irq ) (struct platform_device*,struct fsl_edma_engine*) ;} ;
struct TYPE_7__ {int csr; } ;


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
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 struct mcf_edma_platform_data* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,struct resource*) ;
 struct fsl_edma_engine* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (struct fsl_edma_engine*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_12 (int,int *) ;
 TYPE_5__ VAR_24 ;
 int VAR_25 ;
 int FUNC_13 (int *) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct fsl_edma_engine*) ;
 int FUNC_16 (struct platform_device*,struct fsl_edma_engine*) ;
 int FUNC_17 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_26)
{
 struct mcf_edma_platform_data *VAR_27;
 struct fsl_edma_engine *VAR_28;
 struct fsl_edma_chan *VAR_29;
 struct edma_regs *VAR_30;
 struct resource *VAR_31;
 int VAR_32, VAR_33, VAR_34, VAR_35;

 VAR_27 = FUNC_5(&VAR_26->dev);
 if (!VAR_27) {
  FUNC_4(&VAR_26->dev, "no platform data supplied\n");
  return -VAR_8;
 }

 VAR_35 = VAR_27->dma_channels;
 VAR_34 = sizeof(*VAR_28) + sizeof(*VAR_29) * VAR_35;
 VAR_28 = FUNC_8(&VAR_26->dev, VAR_34, VAR_11);
 if (!VAR_28)
  return -VAR_9;

 VAR_28->n_chans = VAR_35;


 VAR_28->drvdata = &VAR_24;
 VAR_28->big_endian = 1;

 if (!VAR_28->n_chans) {
  FUNC_6(&VAR_26->dev, "setting default channel number to 64");
  VAR_28->n_chans = 64;
 }

 FUNC_13(&VAR_28->fsl_edma_mutex);

 VAR_31 = FUNC_14(VAR_26, VAR_12, 0);

 VAR_28->membase = FUNC_7(&VAR_26->dev, VAR_31);
 if (FUNC_2(VAR_28->membase))
  return FUNC_3(VAR_28->membase);

 FUNC_11(VAR_28);
 VAR_30 = &VAR_28->regs;

 FUNC_1(&VAR_28->dma_dev.channels);
 for (VAR_33 = 0; VAR_33 < VAR_28->n_chans; VAR_33++) {
  struct fsl_edma_chan *VAR_36 = &VAR_28->chans[VAR_33];

  VAR_36->edma = VAR_28;
  VAR_36->slave_id = VAR_33;
  VAR_36->idle = 1;
  VAR_36->dma_dir = VAR_3;
  VAR_36->vchan.desc_free = VAR_15;
  FUNC_17(&VAR_36->vchan, &VAR_28->dma_dev);
  FUNC_12(0x0, &VAR_30->tcd[VAR_33].csr);
 }

 FUNC_12(~0, VAR_30->inth);
 FUNC_12(~0, VAR_30->intl);

 VAR_32 = VAR_28->drvdata->setup_irq(VAR_26, VAR_28);
 if (VAR_32)
  return VAR_32;

 FUNC_10(VAR_4, VAR_28->dma_dev.cap_mask);
 FUNC_10(VAR_5, VAR_28->dma_dev.cap_mask);
 FUNC_10(VAR_0, VAR_28->dma_dev.cap_mask);

 VAR_28->dma_dev.dev = &VAR_26->dev;
 VAR_28->dma_dev.device_alloc_chan_resources =
   VAR_13;
 VAR_28->dma_dev.device_free_chan_resources =
   VAR_14;
 VAR_28->dma_dev.device_config = VAR_21;
 VAR_28->dma_dev.device_prep_dma_cyclic =
   VAR_18;
 VAR_28->dma_dev.device_prep_slave_sg = VAR_19;
 VAR_28->dma_dev.device_tx_status = VAR_23;
 VAR_28->dma_dev.device_pause = VAR_17;
 VAR_28->dma_dev.device_resume = VAR_20;
 VAR_28->dma_dev.device_terminate_all = VAR_22;
 VAR_28->dma_dev.device_issue_pending = VAR_16;

 VAR_28->dma_dev.src_addr_widths = VAR_10;
 VAR_28->dma_dev.dst_addr_widths = VAR_10;
 VAR_28->dma_dev.directions =
   FUNC_0(VAR_1) | FUNC_0(VAR_2);

 VAR_28->dma_dev.filter.fn = VAR_25;
 VAR_28->dma_dev.filter.map = VAR_27->slave_map;
 VAR_28->dma_dev.filter.mapcnt = VAR_27->slavecnt;

 FUNC_15(VAR_26, VAR_28);

 VAR_32 = FUNC_9(&VAR_28->dma_dev);
 if (VAR_32) {
  FUNC_4(&VAR_26->dev,
   "Can't register Freescale eDMA engine. (%d)\n", VAR_32);
  return VAR_32;
 }


 FUNC_12(VAR_7 | VAR_6, VAR_30->cr);

 return 0;
}
