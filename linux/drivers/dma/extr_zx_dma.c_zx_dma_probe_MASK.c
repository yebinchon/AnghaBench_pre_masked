
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct zx_dma_phy {int idx; scalar_t__ base; } ;
struct TYPE_14__ {int directions; int residue_granularity; void* dst_addr_widths; void* src_addr_widths; int copy_align; int device_resume; int device_pause; int device_terminate_all; int device_config; int device_issue_pending; int device_prep_dma_cyclic; int device_prep_slave_sg; int device_prep_dma_memcpy; int device_tx_status; int device_free_chan_resources; TYPE_3__* dev; int cap_mask; int channels; } ;
struct zx_dma_dev {int dma_channels; int dma_requests; scalar_t__ clk; TYPE_2__ slave; int chan_pending; int lock; struct zx_dma_chan* chans; scalar_t__ base; struct zx_dma_phy* phy; int pool; int irq; } ;
struct TYPE_13__ {int desc_free; } ;
struct zx_dma_chan {TYPE_1__ vc; int node; int status; } ;
struct resource {int dummy; } ;
struct TYPE_15__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_3 (scalar_t__) ;
 void* VAR_16 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_3__*,struct resource*) ;
 void* FUNC_10 (TYPE_3__*,int,int,int ) ;
 struct zx_dma_dev* FUNC_11 (TYPE_3__*,int,int ) ;
 int FUNC_12 (TYPE_3__*,int ,int ,int ,int ,struct zx_dma_dev*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,TYPE_3__*,int ,int,int ) ;
 int FUNC_17 (int ,int ,struct zx_dma_dev*) ;
 int FUNC_18 (int ,char*,int*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct zx_dma_dev*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (TYPE_1__*,TYPE_2__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_24 (struct zx_dma_dev*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_30)
{
 struct zx_dma_dev *VAR_31;
 struct resource *VAR_32;
 int VAR_33, VAR_34 = 0;

 VAR_32 = FUNC_20(VAR_30, VAR_14, 0);
 if (!VAR_32)
  return -VAR_11;

 VAR_31 = FUNC_11(&VAR_30->dev, sizeof(*VAR_31), VAR_13);
 if (!VAR_31)
  return -VAR_12;

 VAR_31->base = FUNC_9(&VAR_30->dev, VAR_32);
 if (FUNC_2(VAR_31->base))
  return FUNC_3(VAR_31->base);

 FUNC_18((&VAR_30->dev)->of_node,
        "dma-channels", &VAR_31->dma_channels);
 FUNC_18((&VAR_30->dev)->of_node,
        "dma-requests", &VAR_31->dma_requests);
 if (!VAR_31->dma_requests || !VAR_31->dma_channels)
  return -VAR_11;

 VAR_31->clk = FUNC_8(&VAR_30->dev, ((void*)0));
 if (FUNC_2(VAR_31->clk)) {
  FUNC_6(&VAR_30->dev, "no dma clk\n");
  return FUNC_3(VAR_31->clk);
 }

 VAR_31->irq = FUNC_19(VAR_30, 0);
 VAR_34 = FUNC_12(&VAR_30->dev, VAR_31->irq, VAR_20,
          0, VAR_10, VAR_31);
 if (VAR_34)
  return VAR_34;


 VAR_31->pool = FUNC_16(VAR_10, &VAR_30->dev,
   VAR_15, 32, 0);
 if (!VAR_31->pool)
  return -VAR_12;


 VAR_31->phy = FUNC_10(&VAR_30->dev,
  VAR_31->dma_channels, sizeof(struct zx_dma_phy), VAR_13);
 if (!VAR_31->phy)
  return -VAR_12;

 for (VAR_33 = 0; VAR_33 < VAR_31->dma_channels; VAR_33++) {
  struct zx_dma_phy *VAR_35 = &VAR_31->phy[VAR_33];

  VAR_35->idx = VAR_33;
  VAR_35->base = VAR_31->base + VAR_33 * 0x40;
 }

 FUNC_1(&VAR_31->slave.channels);
 FUNC_15(VAR_9, VAR_31->slave.cap_mask);
 FUNC_15(VAR_4, VAR_31->slave.cap_mask);
 FUNC_15(VAR_1, VAR_31->slave.cap_mask);
 FUNC_15(VAR_7, VAR_31->slave.cap_mask);
 VAR_31->slave.dev = &VAR_30->dev;
 VAR_31->slave.device_free_chan_resources = VAR_18;
 VAR_31->slave.device_tx_status = VAR_28;
 VAR_31->slave.device_prep_dma_memcpy = VAR_23;
 VAR_31->slave.device_prep_slave_sg = VAR_24;
 VAR_31->slave.device_prep_dma_cyclic = VAR_22;
 VAR_31->slave.device_issue_pending = VAR_21;
 VAR_31->slave.device_config = VAR_17;
 VAR_31->slave.device_terminate_all = VAR_25;
 VAR_31->slave.device_pause = VAR_26;
 VAR_31->slave.device_resume = VAR_27;
 VAR_31->slave.copy_align = VAR_0;
 VAR_31->slave.src_addr_widths = VAR_16;
 VAR_31->slave.dst_addr_widths = VAR_16;
 VAR_31->slave.directions = FUNC_0(VAR_6) | FUNC_0(VAR_5)
   | FUNC_0(VAR_2);
 VAR_31->slave.residue_granularity = VAR_8;


 VAR_31->chans = FUNC_10(&VAR_30->dev,
  VAR_31->dma_requests, sizeof(struct zx_dma_chan), VAR_13);
 if (!VAR_31->chans)
  return -VAR_12;

 for (VAR_33 = 0; VAR_33 < VAR_31->dma_requests; VAR_33++) {
  struct zx_dma_chan *VAR_36 = &VAR_31->chans[VAR_33];

  VAR_36->status = VAR_3;
  FUNC_1(&VAR_36->node);
  VAR_36->vc.desc_free = VAR_19;
  FUNC_23(&VAR_36->vc, &VAR_31->slave);
 }


 VAR_34 = FUNC_5(VAR_31->clk);
 if (VAR_34 < 0) {
  FUNC_6(&VAR_30->dev, "clk_prepare_enable failed: %d\n", VAR_34);
  goto zx_dma_out;
 }

 FUNC_24(VAR_31);

 FUNC_22(&VAR_31->lock);
 FUNC_1(&VAR_31->chan_pending);
 FUNC_21(VAR_30, VAR_31);

 VAR_34 = FUNC_13(&VAR_31->slave);
 if (VAR_34)
  goto clk_dis;

 VAR_34 = FUNC_17((&VAR_30->dev)->of_node,
      VAR_29, VAR_31);
 if (VAR_34)
  goto of_dma_register_fail;

 FUNC_7(&VAR_30->dev, "initialized\n");
 return 0;

of_dma_register_fail:
 FUNC_14(&VAR_31->slave);
clk_dis:
 FUNC_4(VAR_31->clk);
zx_dma_out:
 return VAR_34;
}
