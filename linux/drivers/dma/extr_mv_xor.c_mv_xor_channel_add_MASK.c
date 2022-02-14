
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mv_xor_device {scalar_t__ xor_type; int xor_high_base; int xor_base; } ;
struct TYPE_2__ {int device_node; struct dma_device* device; } ;
struct dma_device {int max_xor; int cap_mask; int channels; int device_prep_dma_xor; int device_prep_dma_memcpy; int device_prep_dma_interrupt; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; int * dev; } ;
struct mv_xor_chan {int idx; int irq; scalar_t__ op_in_desc; int dma_desc_pool; int dma_desc_pool_virt; TYPE_1__ dmachan; int allocated_slots; int free_slots; int completed_slots; int chain; int lock; int irq_tasklet; int mmr_high_base; int mmr_base; int dummy_dst; void* dummy_dst_addr; int dummy_src; void* dummy_src_addr; struct mv_xor_device* xordev; struct dma_device dmadev; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mv_xor_chan* FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,char*,char*,char*,char*) ;
 int FUNC_4 (int *) ;
 struct mv_xor_chan* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,int *,int ) ;
 int FUNC_7 (struct dma_device*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 void* FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (int,struct mv_xor_chan*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (struct mv_xor_chan*) ;
 int FUNC_15 (struct mv_xor_chan*) ;
 int FUNC_16 (struct mv_xor_chan*,int ) ;
 int FUNC_17 (struct mv_xor_chan*) ;
 int FUNC_18 (struct mv_xor_chan*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_19 (int,int ,int ,int ,struct mv_xor_chan*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,unsigned long) ;

__attribute__((used)) static struct mv_xor_chan *
FUNC_22(struct mv_xor_device *VAR_23,
     struct platform_device *VAR_24,
     int VAR_25, dma_cap_mask_t VAR_26, int VAR_27)
{
 int VAR_28 = 0;
 struct mv_xor_chan *VAR_29;
 struct dma_device *VAR_30;

 VAR_29 = FUNC_5(&VAR_24->dev, sizeof(*VAR_29), VAR_6);
 if (!VAR_29)
  return FUNC_0(-VAR_5);

 VAR_29->idx = VAR_25;
 VAR_29->irq = VAR_27;
 if (VAR_23->xor_type == VAR_13)
  VAR_29->op_in_desc = VAR_10;
 else
  VAR_29->op_in_desc = VAR_9;

 VAR_30 = &VAR_29->dmadev;
 VAR_30->dev = &VAR_24->dev;
 VAR_29->xordev = VAR_23;






 VAR_29->dummy_src_addr = FUNC_11(VAR_30->dev,
  VAR_29->dummy_src, VAR_7, VAR_0);
 VAR_29->dummy_dst_addr = FUNC_11(VAR_30->dev,
  VAR_29->dummy_dst, VAR_7, VAR_3);





 VAR_29->dma_desc_pool_virt =
   FUNC_6(&VAR_24->dev, VAR_8, &VAR_29->dma_desc_pool,
         VAR_6);
 if (!VAR_29->dma_desc_pool_virt)
  return FUNC_0(-VAR_5);


 VAR_30->cap_mask = VAR_26;

 FUNC_1(&VAR_30->channels);


 VAR_30->device_alloc_chan_resources = VAR_14;
 VAR_30->device_free_chan_resources = VAR_15;
 VAR_30->device_tx_status = VAR_21;
 VAR_30->device_issue_pending = VAR_17;


 if (FUNC_10(VAR_1, VAR_30->cap_mask))
  VAR_30->device_prep_dma_interrupt = VAR_18;
 if (FUNC_10(VAR_2, VAR_30->cap_mask))
  VAR_30->device_prep_dma_memcpy = VAR_19;
 if (FUNC_10(VAR_4, VAR_30->cap_mask)) {
  VAR_30->max_xor = 8;
  VAR_30->device_prep_dma_xor = VAR_20;
 }

 VAR_29->mmr_base = VAR_23->xor_base;
 VAR_29->mmr_high_base = VAR_23->xor_high_base;
 FUNC_21(&VAR_29->irq_tasklet, VAR_22, (unsigned long)
       VAR_29);


 FUNC_14(VAR_29);

 VAR_28 = FUNC_19(VAR_29->irq, VAR_16,
     0, FUNC_4(&VAR_24->dev), VAR_29);
 if (VAR_28)
  goto err_free_dma;

 FUNC_17(VAR_29);

 if (VAR_29->op_in_desc == VAR_9)
  FUNC_16(VAR_29, VAR_11);
 else
  FUNC_16(VAR_29, VAR_12);

 FUNC_20(&VAR_29->lock);
 FUNC_1(&VAR_29->chain);
 FUNC_1(&VAR_29->completed_slots);
 FUNC_1(&VAR_29->free_slots);
 FUNC_1(&VAR_29->allocated_slots);
 VAR_29->dmachan.device = VAR_30;
 FUNC_8(&VAR_29->dmachan);

 FUNC_13(&VAR_29->dmachan.device_node, &VAR_30->channels);

 if (FUNC_10(VAR_2, VAR_30->cap_mask)) {
  VAR_28 = FUNC_15(VAR_29);
  FUNC_2(&VAR_24->dev, "memcpy self test returned %d\n", VAR_28);
  if (VAR_28)
   goto err_free_irq;
 }

 if (FUNC_10(VAR_4, VAR_30->cap_mask)) {
  VAR_28 = FUNC_18(VAR_29);
  FUNC_2(&VAR_24->dev, "xor self test returned %d\n", VAR_28);
  if (VAR_28)
   goto err_free_irq;
 }

 FUNC_3(&VAR_24->dev, "Marvell XOR (%s): ( %s%s%s)\n",
   VAR_29->op_in_desc ? "Descriptor Mode" : "Registers Mode",
   FUNC_10(VAR_4, VAR_30->cap_mask) ? "xor " : "",
   FUNC_10(VAR_2, VAR_30->cap_mask) ? "cpy " : "",
   FUNC_10(VAR_1, VAR_30->cap_mask) ? "intr " : "");

 VAR_28 = FUNC_7(VAR_30);
 if (VAR_28)
  goto err_free_irq;

 return VAR_29;

err_free_irq:
 FUNC_12(VAR_29->irq, VAR_29);
err_free_dma:
 FUNC_9(&VAR_24->dev, VAR_8,
     VAR_29->dma_desc_pool_virt, VAR_29->dma_desc_pool);
 return FUNC_0(VAR_28);
}
