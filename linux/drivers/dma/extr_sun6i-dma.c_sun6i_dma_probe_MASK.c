
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int desc_free; } ;
struct sun6i_vchan {TYPE_1__ vc; int node; } ;
struct sun6i_pchan {int idx; void* base; } ;
struct sun6i_dma_lli {int dummy; } ;
struct TYPE_19__ {int directions; TYPE_4__* dev; int residue_granularity; int dst_addr_widths; int src_addr_widths; int device_terminate_all; int device_resume; int device_pause; int device_config; int copy_align; int device_prep_dma_cyclic; int device_prep_dma_memcpy; int device_prep_slave_sg; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int channels; int cap_mask; } ;
struct sun6i_dma_dev {scalar_t__ irq; int num_pchans; int num_vchans; int max_request; void* rstc; void* clk; void* clk_mbus; TYPE_2__ slave; TYPE_3__* cfg; struct sun6i_vchan* vchans; void* base; struct sun6i_pchan* pchans; int task; int lock; int pending; int pool; } ;
struct resource {int dummy; } ;
struct TYPE_21__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_20__ {int nr_max_channels; int nr_max_vchans; int nr_max_requests; int (* clock_autogate_enable ) (struct sun6i_dma_dev*) ;scalar_t__ has_mbus_clk; int dst_addr_widths; int src_addr_widths; } ;


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
 int FUNC_1 (int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_4__*,char*,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 void* FUNC_10 (TYPE_4__*,char*) ;
 void* FUNC_11 (TYPE_4__*,struct resource*) ;
 void* FUNC_12 (TYPE_4__*,int,int,int ) ;
 struct sun6i_dma_dev* FUNC_13 (TYPE_4__*,int,int ) ;
 int FUNC_14 (TYPE_4__*,int,int ,int ,int ,struct sun6i_dma_dev*) ;
 void* FUNC_15 (TYPE_4__*,int *) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,TYPE_4__*,int,int,int ) ;
 TYPE_3__* FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (struct device_node*,int ,struct sun6i_dma_dev*) ;
 int FUNC_22 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_23 (struct platform_device*,int ) ;
 struct resource* FUNC_24 (struct platform_device*,int ,int ) ;
 int FUNC_25 (struct platform_device*,struct sun6i_dma_dev*) ;
 int FUNC_26 (void*) ;
 int FUNC_27 (void*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct sun6i_dma_dev*) ;
 int VAR_13 ;
 int FUNC_30 (struct sun6i_dma_dev*) ;
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
 int FUNC_31 (struct sun6i_dma_dev*) ;
 int FUNC_32 (int *,int ,unsigned long) ;
 int FUNC_33 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_27)
{
 struct device_node *VAR_28 = VAR_27->dev.of_node;
 struct sun6i_dma_dev *VAR_29;
 struct resource *VAR_30;
 int VAR_31, VAR_32;

 VAR_29 = FUNC_13(&VAR_27->dev, sizeof(*VAR_29), VAR_11);
 if (!VAR_29)
  return -VAR_10;

 VAR_29->cfg = FUNC_20(&VAR_27->dev);
 if (!VAR_29->cfg)
  return -VAR_9;

 VAR_30 = FUNC_24(VAR_27, VAR_12, 0);
 VAR_29->base = FUNC_11(&VAR_27->dev, VAR_30);
 if (FUNC_2(VAR_29->base))
  return FUNC_3(VAR_29->base);

 VAR_29->irq = FUNC_23(VAR_27, 0);
 if (VAR_29->irq < 0)
  return VAR_29->irq;

 VAR_29->clk = FUNC_10(&VAR_27->dev, ((void*)0));
 if (FUNC_2(VAR_29->clk)) {
  FUNC_6(&VAR_27->dev, "No clock specified\n");
  return FUNC_3(VAR_29->clk);
 }

 if (VAR_29->cfg->has_mbus_clk) {
  VAR_29->clk_mbus = FUNC_10(&VAR_27->dev, "mbus");
  if (FUNC_2(VAR_29->clk_mbus)) {
   FUNC_6(&VAR_27->dev, "No mbus clock specified\n");
   return FUNC_3(VAR_29->clk_mbus);
  }
 }

 VAR_29->rstc = FUNC_15(&VAR_27->dev, ((void*)0));
 if (FUNC_2(VAR_29->rstc)) {
  FUNC_6(&VAR_27->dev, "No reset controller specified\n");
  return FUNC_3(VAR_29->rstc);
 }

 VAR_29->pool = FUNC_19(FUNC_8(&VAR_27->dev), &VAR_27->dev,
         sizeof(struct sun6i_dma_lli), 4, 0);
 if (!VAR_29->pool) {
  FUNC_6(&VAR_27->dev, "No memory for descriptors dma pool\n");
  return -VAR_10;
 }

 FUNC_25(VAR_27, VAR_29);
 FUNC_1(&VAR_29->pending);
 FUNC_28(&VAR_29->lock);

 FUNC_18(VAR_6, VAR_29->slave.cap_mask);
 FUNC_18(VAR_4, VAR_29->slave.cap_mask);
 FUNC_18(VAR_8, VAR_29->slave.cap_mask);
 FUNC_18(VAR_2, VAR_29->slave.cap_mask);

 FUNC_1(&VAR_29->slave.channels);
 VAR_29->slave.device_free_chan_resources = VAR_14;
 VAR_29->slave.device_tx_status = VAR_26;
 VAR_29->slave.device_issue_pending = VAR_17;
 VAR_29->slave.device_prep_slave_sg = VAR_22;
 VAR_29->slave.device_prep_dma_memcpy = VAR_21;
 VAR_29->slave.device_prep_dma_cyclic = VAR_20;
 VAR_29->slave.copy_align = VAR_0;
 VAR_29->slave.device_config = VAR_13;
 VAR_29->slave.device_pause = VAR_19;
 VAR_29->slave.device_resume = VAR_23;
 VAR_29->slave.device_terminate_all = VAR_25;
 VAR_29->slave.src_addr_widths = VAR_29->cfg->src_addr_widths;
 VAR_29->slave.dst_addr_widths = VAR_29->cfg->dst_addr_widths;
 VAR_29->slave.directions = FUNC_0(VAR_3) |
        FUNC_0(VAR_5);
 VAR_29->slave.residue_granularity = VAR_7;
 VAR_29->slave.dev = &VAR_27->dev;

 VAR_29->num_pchans = VAR_29->cfg->nr_max_channels;
 VAR_29->num_vchans = VAR_29->cfg->nr_max_vchans;
 VAR_29->max_request = VAR_29->cfg->nr_max_requests;

 VAR_31 = FUNC_22(VAR_28, "dma-channels", &VAR_29->num_pchans);
 if (VAR_31 && !VAR_29->num_pchans) {
  FUNC_6(&VAR_27->dev, "Can't get dma-channels.\n");
  return VAR_31;
 }

 VAR_31 = FUNC_22(VAR_28, "dma-requests", &VAR_29->max_request);
 if (VAR_31 && !VAR_29->max_request) {
  FUNC_7(&VAR_27->dev, "Missing dma-requests, using %u.\n",
    VAR_1);
  VAR_29->max_request = VAR_1;
 }





 if (!VAR_29->num_vchans)
  VAR_29->num_vchans = 2 * (VAR_29->max_request + 1);

 VAR_29->pchans = FUNC_12(&VAR_27->dev, VAR_29->num_pchans,
       sizeof(struct sun6i_pchan), VAR_11);
 if (!VAR_29->pchans)
  return -VAR_10;

 VAR_29->vchans = FUNC_12(&VAR_27->dev, VAR_29->num_vchans,
       sizeof(struct sun6i_vchan), VAR_11);
 if (!VAR_29->vchans)
  return -VAR_10;

 FUNC_32(&VAR_29->task, VAR_24, (unsigned long)VAR_29);

 for (VAR_32 = 0; VAR_32 < VAR_29->num_pchans; VAR_32++) {
  struct sun6i_pchan *VAR_33 = &VAR_29->pchans[VAR_32];

  VAR_33->idx = VAR_32;
  VAR_33->base = VAR_29->base + 0x100 + VAR_32 * 0x40;
 }

 for (VAR_32 = 0; VAR_32 < VAR_29->num_vchans; VAR_32++) {
  struct sun6i_vchan *VAR_34 = &VAR_29->vchans[VAR_32];

  FUNC_1(&VAR_34->node);
  VAR_34->vc.desc_free = VAR_15;
  FUNC_33(&VAR_34->vc, &VAR_29->slave);
 }

 VAR_31 = FUNC_27(VAR_29->rstc);
 if (VAR_31) {
  FUNC_6(&VAR_27->dev, "Couldn't deassert the device from reset\n");
  goto err_chan_free;
 }

 VAR_31 = FUNC_5(VAR_29->clk);
 if (VAR_31) {
  FUNC_6(&VAR_27->dev, "Couldn't enable the clock\n");
  goto err_reset_assert;
 }

 if (VAR_29->cfg->has_mbus_clk) {
  VAR_31 = FUNC_5(VAR_29->clk_mbus);
  if (VAR_31) {
   FUNC_6(&VAR_27->dev, "Couldn't enable mbus clock\n");
   goto err_clk_disable;
  }
 }

 VAR_31 = FUNC_14(&VAR_27->dev, VAR_29->irq, VAR_16, 0,
          FUNC_8(&VAR_27->dev), VAR_29);
 if (VAR_31) {
  FUNC_6(&VAR_27->dev, "Cannot request IRQ\n");
  goto err_mbus_clk_disable;
 }

 VAR_31 = FUNC_16(&VAR_29->slave);
 if (VAR_31) {
  FUNC_9(&VAR_27->dev, "Failed to register DMA engine device\n");
  goto err_irq_disable;
 }

 VAR_31 = FUNC_21(VAR_27->dev.of_node, VAR_18,
      VAR_29);
 if (VAR_31) {
  FUNC_6(&VAR_27->dev, "of_dma_controller_register failed\n");
  goto err_dma_unregister;
 }

 if (VAR_29->cfg->clock_autogate_enable)
  VAR_29->cfg->clock_autogate_enable(VAR_29);

 return 0;

err_dma_unregister:
 FUNC_17(&VAR_29->slave);
err_irq_disable:
 FUNC_31(VAR_29);
err_mbus_clk_disable:
 FUNC_4(VAR_29->clk_mbus);
err_clk_disable:
 FUNC_4(VAR_29->clk);
err_reset_assert:
 FUNC_26(VAR_29->rstc);
err_chan_free:
 FUNC_30(VAR_29);
 return VAR_31;
}
