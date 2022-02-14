
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_20__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct mdc_hw_list_desc {int dummy; } ;
struct TYPE_19__ {int directions; int src_addr_widths; int dst_addr_widths; int channels; int residue_granularity; int device_config; int device_synchronize; int device_terminate_all; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; int device_prep_dma_memcpy; int device_prep_dma_cyclic; int device_prep_slave_sg; TYPE_3__* dev; int cap_mask; } ;
struct mdc_dma {int nr_channels; int nr_threads; int bus_width; int max_burst_mult; TYPE_2__ dma_dev; int desc_pool; struct mdc_chan* channels; scalar_t__ max_xfer_size; int clk; int periph_regs; int regs; int soc; } ;
struct TYPE_18__ {int desc_free; } ;
struct mdc_chan {unsigned int chan_nr; scalar_t__ irq; TYPE_1__ vc; struct mdc_dma* mdma; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,char*,unsigned int,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,struct resource*) ;
 struct mdc_dma* FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,int,int ,int ,int ,struct mdc_chan*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,TYPE_3__*,int,int,int ) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_17 (struct mdc_dma*,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (int ,int ,struct mdc_dma*) ;
 int FUNC_20 (int ,char*,int*) ;
 scalar_t__ FUNC_21 (struct platform_device*,unsigned int) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int ) ;
 int FUNC_23 (struct platform_device*,struct mdc_dma*) ;
 int FUNC_24 (TYPE_3__*) ;
 int FUNC_25 (TYPE_3__*) ;
 int FUNC_26 (TYPE_3__*) ;
 int FUNC_27 (int ,char*) ;
 int FUNC_28 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_32)
{
 struct mdc_dma *VAR_33;
 struct resource *VAR_34;
 unsigned int VAR_35;
 u32 VAR_36;
 int VAR_37;

 VAR_33 = FUNC_8(&VAR_32->dev, sizeof(*VAR_33), VAR_8);
 if (!VAR_33)
  return -VAR_7;
 FUNC_23(VAR_32, VAR_33);

 VAR_33->soc = FUNC_18(&VAR_32->dev);

 VAR_34 = FUNC_22(VAR_32, VAR_9, 0);
 VAR_33->regs = FUNC_7(&VAR_32->dev, VAR_34);
 if (FUNC_2(VAR_33->regs))
  return FUNC_3(VAR_33->regs);

 VAR_33->periph_regs = FUNC_27(VAR_32->dev.of_node,
           "img,cr-periph");
 if (FUNC_2(VAR_33->periph_regs))
  return FUNC_3(VAR_33->periph_regs);

 VAR_33->clk = FUNC_6(&VAR_32->dev, "sys");
 if (FUNC_2(VAR_33->clk))
  return FUNC_3(VAR_33->clk);

 FUNC_13(VAR_33->dma_dev.cap_mask);
 FUNC_12(VAR_6, VAR_33->dma_dev.cap_mask);
 FUNC_12(VAR_4, VAR_33->dma_dev.cap_mask);
 FUNC_12(VAR_0, VAR_33->dma_dev.cap_mask);
 FUNC_12(VAR_2, VAR_33->dma_dev.cap_mask);

 VAR_36 = FUNC_17(VAR_33, VAR_11);
 VAR_33->nr_channels = (VAR_36 >> VAR_13) &
  VAR_12;
 VAR_33->nr_threads =
  1 << ((VAR_36 >> VAR_17) &
        VAR_16);
 VAR_33->bus_width =
  (1 << ((VAR_36 >> VAR_15) &
         VAR_14)) / 8;
 VAR_33->max_xfer_size = VAR_18 + 1 - VAR_33->bus_width;

 FUNC_20(VAR_32->dev.of_node, "dma-channels",
        &VAR_33->nr_channels);
 VAR_37 = FUNC_20(VAR_32->dev.of_node,
       "img,max-burst-multiplier",
       &VAR_33->max_burst_mult);
 if (VAR_37)
  return VAR_37;

 VAR_33->dma_dev.dev = &VAR_32->dev;
 VAR_33->dma_dev.device_prep_slave_sg = VAR_27;
 VAR_33->dma_dev.device_prep_dma_cyclic = VAR_25;
 VAR_33->dma_dev.device_prep_dma_memcpy = VAR_26;
 VAR_33->dma_dev.device_alloc_chan_resources = VAR_19;
 VAR_33->dma_dev.device_free_chan_resources = VAR_22;
 VAR_33->dma_dev.device_tx_status = VAR_31;
 VAR_33->dma_dev.device_issue_pending = VAR_23;
 VAR_33->dma_dev.device_terminate_all = VAR_30;
 VAR_33->dma_dev.device_synchronize = VAR_29;
 VAR_33->dma_dev.device_config = VAR_28;

 VAR_33->dma_dev.directions = FUNC_0(VAR_1) | FUNC_0(VAR_3);
 VAR_33->dma_dev.residue_granularity = VAR_5;
 for (VAR_35 = 1; VAR_35 <= VAR_33->bus_width; VAR_35 <<= 1) {
  VAR_33->dma_dev.src_addr_widths |= FUNC_0(VAR_35);
  VAR_33->dma_dev.dst_addr_widths |= FUNC_0(VAR_35);
 }

 FUNC_1(&VAR_33->dma_dev.channels);
 for (VAR_35 = 0; VAR_35 < VAR_33->nr_channels; VAR_35++) {
  struct mdc_chan *VAR_38 = &VAR_33->channels[VAR_35];

  VAR_38->mdma = VAR_33;
  VAR_38->chan_nr = VAR_35;
  VAR_38->irq = FUNC_21(VAR_32, VAR_35);
  if (VAR_38->irq < 0)
   return VAR_38->irq;

  VAR_37 = FUNC_9(&VAR_32->dev, VAR_38->irq, VAR_20,
           VAR_10,
           FUNC_5(&VAR_32->dev), VAR_38);
  if (VAR_37 < 0)
   return VAR_37;

  VAR_38->vc.desc_free = VAR_21;
  FUNC_28(&VAR_38->vc, &VAR_33->dma_dev);
 }

 VAR_33->desc_pool = FUNC_14(FUNC_5(&VAR_32->dev), &VAR_32->dev,
        sizeof(struct mdc_hw_list_desc),
        4, 0);
 if (!VAR_33->desc_pool)
  return -VAR_7;

 FUNC_25(&VAR_32->dev);
 if (!FUNC_26(&VAR_32->dev)) {
  VAR_37 = FUNC_15(&VAR_32->dev);
  if (VAR_37)
   return VAR_37;
 }

 VAR_37 = FUNC_10(&VAR_33->dma_dev);
 if (VAR_37)
  goto suspend;

 VAR_37 = FUNC_19(VAR_32->dev.of_node, VAR_24, VAR_33);
 if (VAR_37)
  goto unregister;

 FUNC_4(&VAR_32->dev, "MDC with %u channels and %u threads\n",
   VAR_33->nr_channels, VAR_33->nr_threads);

 return 0;

unregister:
 FUNC_11(&VAR_33->dma_dev);
suspend:
 if (!FUNC_26(&VAR_32->dev))
  FUNC_16(&VAR_32->dev);
 FUNC_24(&VAR_32->dev);
 return VAR_37;
}
