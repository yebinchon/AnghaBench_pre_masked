
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_6__ {int tx_submit; } ;
struct mv_xor_v2_sw_desc {int idx; int free_list; TYPE_2__ async_tx; } ;
struct TYPE_5__ {int device_node; struct dma_device* device; } ;
struct dma_device {int max_xor; int channels; int device_prep_dma_xor; int device_prep_dma_interrupt; int device_prep_dma_memcpy; int * dev; int device_issue_pending; int device_tx_status; int cap_mask; } ;
struct mv_xor_v2_device {int desc_size; void* reg_clk; void* clk; int hw_desq; int hw_desq_virt; TYPE_1__ dmachan; struct dma_device dmadev; int free_sw_desc; struct mv_xor_v2_sw_desc* sw_desq; int lock; int irq_tasklet; struct msi_desc* msi_desc; void* glob_base; void* dma_base; } ;
struct mv_xor_v2_descriptor {int dummy; } ;
struct msi_desc {int irq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 void* FUNC_10 (int *,char*) ;
 void* FUNC_11 (int *,struct resource*) ;
 struct mv_xor_v2_sw_desc* FUNC_12 (int *,int,int,int ) ;
 struct mv_xor_v2_device* FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int ,int ,int ,int ,struct mv_xor_v2_device*) ;
 int FUNC_15 (int *,int,int *,int ) ;
 int FUNC_16 (struct dma_device*) ;
 int FUNC_17 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_21 (int *,int,int ,int ) ;
 int FUNC_22 (int *,int ) ;
 struct msi_desc* FUNC_23 (int *) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (struct mv_xor_v2_device*) ;
 int FUNC_27 (struct mv_xor_v2_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_28 (struct mv_xor_v2_device*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct resource* FUNC_29 (struct platform_device*,int ,int) ;
 int FUNC_30 (int *,int,int ) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (struct platform_device*,struct mv_xor_v2_device*) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_35(struct platform_device *VAR_19)
{
 struct mv_xor_v2_device *VAR_20;
 struct resource *VAR_21;
 int VAR_22, VAR_23 = 0;
 struct dma_device *VAR_24;
 struct mv_xor_v2_sw_desc *VAR_25;
 struct msi_desc *VAR_26;

 FUNC_0(sizeof(struct mv_xor_v2_descriptor) !=
       VAR_9);

 VAR_20 = FUNC_13(&VAR_19->dev, sizeof(*VAR_20), VAR_6);
 if (!VAR_20)
  return -VAR_4;

 VAR_21 = FUNC_29(VAR_19, VAR_7, 0);
 VAR_20->dma_base = FUNC_11(&VAR_19->dev, VAR_21);
 if (FUNC_3(VAR_20->dma_base))
  return FUNC_4(VAR_20->dma_base);

 VAR_21 = FUNC_29(VAR_19, VAR_7, 1);
 VAR_20->glob_base = FUNC_11(&VAR_19->dev, VAR_21);
 if (FUNC_3(VAR_20->glob_base))
  return FUNC_4(VAR_20->glob_base);

 FUNC_32(VAR_19, VAR_20);

 VAR_23 = FUNC_22(&VAR_19->dev, FUNC_1(40));
 if (VAR_23)
  return VAR_23;

 VAR_20->reg_clk = FUNC_10(&VAR_19->dev, "reg");
 if (FUNC_4(VAR_20->reg_clk) != -VAR_3) {
  if (!FUNC_3(VAR_20->reg_clk)) {
   VAR_23 = FUNC_7(VAR_20->reg_clk);
   if (VAR_23)
    return VAR_23;
  } else {
   return FUNC_4(VAR_20->reg_clk);
  }
 }

 VAR_20->clk = FUNC_10(&VAR_19->dev, ((void*)0));
 if (FUNC_3(VAR_20->clk) && FUNC_4(VAR_20->clk) == -VAR_5) {
  VAR_23 = VAR_5;
  goto disable_reg_clk;
 }
 if (!FUNC_3(VAR_20->clk)) {
  VAR_23 = FUNC_7(VAR_20->clk);
  if (VAR_23)
   goto disable_reg_clk;
 }

 VAR_23 = FUNC_30(&VAR_19->dev, 1,
          VAR_16);
 if (VAR_23)
  goto disable_clk;

 VAR_26 = FUNC_23(&VAR_19->dev);
 if (!VAR_26)
  goto free_msi_irqs;
 VAR_20->msi_desc = VAR_26;

 VAR_23 = FUNC_14(&VAR_19->dev, VAR_26->irq,
          VAR_11, 0,
          FUNC_8(&VAR_19->dev), VAR_20);
 if (VAR_23)
  goto free_msi_irqs;

 FUNC_34(&VAR_20->irq_tasklet, VAR_17,
       (unsigned long) VAR_20);

 VAR_20->desc_size = FUNC_28(VAR_20);

 FUNC_20(&VAR_20->dmachan);






 VAR_20->hw_desq_virt =
  FUNC_15(&VAR_19->dev,
       VAR_20->desc_size * VAR_8,
       &VAR_20->hw_desq, VAR_6);
 if (!VAR_20->hw_desq_virt) {
  VAR_23 = -VAR_4;
  goto free_msi_irqs;
 }


 VAR_20->sw_desq = FUNC_12(&VAR_19->dev,
     VAR_8, sizeof(*VAR_25),
     VAR_6);
 if (!VAR_20->sw_desq) {
  VAR_23 = -VAR_4;
  goto free_hw_desq;
 }

 FUNC_33(&VAR_20->lock);


 FUNC_2(&VAR_20->free_sw_desc);


 for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
  struct mv_xor_v2_sw_desc *VAR_27 =
   VAR_20->sw_desq + VAR_22;
  VAR_27->idx = VAR_22;
  FUNC_17(&VAR_27->async_tx,
          &VAR_20->dmachan);
  VAR_27->async_tx.tx_submit = VAR_18;
  FUNC_5(&VAR_27->async_tx);

  FUNC_24(&VAR_27->free_list,
    &VAR_20->free_sw_desc);
 }

 VAR_24 = &VAR_20->dmadev;


 FUNC_19(VAR_24->cap_mask);
 FUNC_18(VAR_1, VAR_24->cap_mask);
 FUNC_18(VAR_2, VAR_24->cap_mask);
 FUNC_18(VAR_0, VAR_24->cap_mask);


 FUNC_2(&VAR_24->channels);


 VAR_24->device_tx_status = VAR_10;
 VAR_24->device_issue_pending = VAR_12;
 VAR_24->dev = &VAR_19->dev;

 VAR_24->device_prep_dma_memcpy = VAR_14;
 VAR_24->device_prep_dma_interrupt = VAR_13;
 VAR_24->max_xor = 8;
 VAR_24->device_prep_dma_xor = VAR_15;

 VAR_20->dmachan.device = VAR_24;

 FUNC_25(&VAR_20->dmachan.device_node,
        &VAR_24->channels);

 FUNC_27(VAR_20);

 FUNC_26(VAR_20);

 VAR_23 = FUNC_16(VAR_24);
 if (VAR_23)
  goto free_hw_desq;

 FUNC_9(&VAR_19->dev, "Marvell Version 2 XOR driver\n");

 return 0;

free_hw_desq:
 FUNC_21(&VAR_19->dev,
     VAR_20->desc_size * VAR_8,
     VAR_20->hw_desq_virt, VAR_20->hw_desq);
free_msi_irqs:
 FUNC_31(&VAR_19->dev);
disable_clk:
 FUNC_6(VAR_20->clk);
disable_reg_clk:
 FUNC_6(VAR_20->reg_clk);
 return VAR_23;
}
