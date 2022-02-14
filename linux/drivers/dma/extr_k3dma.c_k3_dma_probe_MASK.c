
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_18__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {int dummy; } ;
struct k3dma_soc_data {int flags; } ;
struct k3_dma_phy {int idx; scalar_t__ base; } ;
struct TYPE_17__ {int copy_align; int device_synchronize; int device_terminate_all; int device_resume; int device_pause; int device_config; int device_issue_pending; int device_prep_dma_cyclic; int device_prep_slave_sg; int device_prep_dma_memcpy; int device_tx_status; int device_free_chan_resources; TYPE_3__* dev; int cap_mask; int channels; } ;
struct k3_dma_dev {int dma_channels; int dma_requests; int dma_channel_mask; int irq; scalar_t__ clk; TYPE_2__ slave; int task; int chan_pending; int lock; struct k3_dma_chan* chans; scalar_t__ base; struct k3_dma_phy* phy; int pool; } ;
struct TYPE_16__ {int desc_free; } ;
struct k3_dma_chan {TYPE_1__ vc; int node; int status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 struct k3dma_soc_data* FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_11 (TYPE_3__*,struct resource*) ;
 void* FUNC_12 (TYPE_3__*,int,int,int ) ;
 struct k3_dma_dev* FUNC_13 (TYPE_3__*,int,int ) ;
 int FUNC_14 (TYPE_3__*,int,int ,int ,int ,struct k3_dma_dev*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,TYPE_3__*,int ,int,int ) ;
 int VAR_12 ;
 int FUNC_19 (struct k3_dma_dev*,int) ;
 int VAR_13 ;
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
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_20 (int ,int ,struct k3_dma_dev*) ;
 struct of_device_id* FUNC_21 (int ,TYPE_3__*) ;
 int FUNC_22 (int ,char*,int*) ;
 int FUNC_23 (struct platform_device*,int ) ;
 struct resource* FUNC_24 (struct platform_device*,int ,int ) ;
 int FUNC_25 (struct platform_device*,struct k3_dma_dev*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int ,unsigned long) ;
 int FUNC_28 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_28)
{
 const struct k3dma_soc_data *VAR_29;
 struct k3_dma_dev *VAR_30;
 const struct of_device_id *VAR_31;
 struct resource *VAR_32;
 int VAR_33, VAR_34, VAR_35 = 0;

 VAR_32 = FUNC_24(VAR_28, VAR_9, 0);
 if (!VAR_32)
  return -VAR_6;

 VAR_30 = FUNC_13(&VAR_28->dev, sizeof(*VAR_30), VAR_8);
 if (!VAR_30)
  return -VAR_7;

 VAR_29 = FUNC_9(&VAR_28->dev);
 if (!VAR_29)
  return -VAR_6;

 VAR_30->base = FUNC_11(&VAR_28->dev, VAR_32);
 if (FUNC_2(VAR_30->base))
  return FUNC_3(VAR_30->base);

 VAR_31 = FUNC_21(VAR_27, &VAR_28->dev);
 if (VAR_31) {
  FUNC_22((&VAR_28->dev)->of_node,
    "dma-channels", &VAR_30->dma_channels);
  FUNC_22((&VAR_28->dev)->of_node,
    "dma-requests", &VAR_30->dma_requests);
  VAR_34 = FUNC_22((&VAR_28->dev)->of_node,
    "dma-channel-mask", &VAR_30->dma_channel_mask);
  if (VAR_34) {
   FUNC_8(&VAR_28->dev,
     "dma-channel-mask doesn't exist, considering all as available.\n");
   VAR_30->dma_channel_mask = (u32)~0UL;
  }
 }

 if (!(VAR_29->flags & VAR_10)) {
  VAR_30->clk = FUNC_10(&VAR_28->dev, ((void*)0));
  if (FUNC_2(VAR_30->clk)) {
   FUNC_6(&VAR_28->dev, "no dma clk\n");
   return FUNC_3(VAR_30->clk);
  }
 }

 VAR_35 = FUNC_23(VAR_28, 0);
 VAR_34 = FUNC_14(&VAR_28->dev, VAR_35,
   VAR_15, 0, VAR_5, VAR_30);
 if (VAR_34)
  return VAR_34;

 VAR_30->irq = VAR_35;


 VAR_30->pool = FUNC_18(VAR_5, &VAR_28->dev,
     VAR_11, 32, 0);
 if (!VAR_30->pool)
  return -VAR_7;


 VAR_30->phy = FUNC_12(&VAR_28->dev,
  VAR_30->dma_channels, sizeof(struct k3_dma_phy), VAR_8);
 if (VAR_30->phy == ((void*)0))
  return -VAR_7;

 for (VAR_33 = 0; VAR_33 < VAR_30->dma_channels; VAR_33++) {
  struct k3_dma_phy *VAR_36;

  if (!(VAR_30->dma_channel_mask & FUNC_0(VAR_33)))
   continue;

  VAR_36 = &VAR_30->phy[VAR_33];
  VAR_36->idx = VAR_33;
  VAR_36->base = VAR_30->base + VAR_33 * 0x40;
 }

 FUNC_1(&VAR_30->slave.channels);
 FUNC_17(VAR_4, VAR_30->slave.cap_mask);
 FUNC_17(VAR_3, VAR_30->slave.cap_mask);
 FUNC_17(VAR_1, VAR_30->slave.cap_mask);
 VAR_30->slave.dev = &VAR_28->dev;
 VAR_30->slave.device_free_chan_resources = VAR_13;
 VAR_30->slave.device_tx_status = VAR_25;
 VAR_30->slave.device_prep_dma_memcpy = VAR_18;
 VAR_30->slave.device_prep_slave_sg = VAR_19;
 VAR_30->slave.device_prep_dma_cyclic = VAR_17;
 VAR_30->slave.device_issue_pending = VAR_16;
 VAR_30->slave.device_config = VAR_12;
 VAR_30->slave.device_pause = VAR_23;
 VAR_30->slave.device_resume = VAR_24;
 VAR_30->slave.device_terminate_all = VAR_22;
 VAR_30->slave.device_synchronize = VAR_20;
 VAR_30->slave.copy_align = VAR_0;


 VAR_30->chans = FUNC_12(&VAR_28->dev,
  VAR_30->dma_requests, sizeof(struct k3_dma_chan), VAR_8);
 if (VAR_30->chans == ((void*)0))
  return -VAR_7;

 for (VAR_33 = 0; VAR_33 < VAR_30->dma_requests; VAR_33++) {
  struct k3_dma_chan *VAR_37 = &VAR_30->chans[VAR_33];

  VAR_37->status = VAR_2;
  FUNC_1(&VAR_37->node);
  VAR_37->vc.desc_free = VAR_14;
  FUNC_28(&VAR_37->vc, &VAR_30->slave);
 }


 VAR_34 = FUNC_5(VAR_30->clk);
 if (VAR_34 < 0) {
  FUNC_6(&VAR_28->dev, "clk_prepare_enable failed: %d\n", VAR_34);
  return VAR_34;
 }

 FUNC_19(VAR_30, 1);

 VAR_34 = FUNC_15(&VAR_30->slave);
 if (VAR_34)
  goto dma_async_register_fail;

 VAR_34 = FUNC_20((&VAR_28->dev)->of_node,
     VAR_26, VAR_30);
 if (VAR_34)
  goto of_dma_register_fail;

 FUNC_26(&VAR_30->lock);
 FUNC_1(&VAR_30->chan_pending);
 FUNC_27(&VAR_30->task, VAR_21, (unsigned long)VAR_30);
 FUNC_25(VAR_28, VAR_30);
 FUNC_7(&VAR_28->dev, "initialized\n");

 return 0;

of_dma_register_fail:
 FUNC_16(&VAR_30->slave);
dma_async_register_fail:
 FUNC_4(VAR_30->clk);
 return VAR_34;
}
