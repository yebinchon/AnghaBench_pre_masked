
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct mpc_dma_tcd {int dummy; } ;
struct TYPE_3__ {int device_node; struct dma_device* device; } ;
struct mpc_dma_chan {TYPE_1__ chan; int lock; int completed; int active; int queued; int prepared; int free; } ;
struct dma_device {int channels; int cap_mask; int device_terminate_all; int device_config; int device_prep_slave_sg; int device_prep_dma_memcpy; int device_tx_status; int device_issue_pending; int device_free_chan_resources; int device_alloc_chan_resources; struct device* dev; } ;
struct mpc_dma {int is_mpc8308; void* irq; void* irq2; TYPE_2__* regs; int tasklet; struct mpc_dma_chan* channels; struct dma_device dma; int error_status_lock; struct mpc_dma_tcd* tcd; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int dmailsa; int dmaihsa; int dmaerrl; int dmaerrh; int dmaintl; int dmainth; int dmaeeil; int dmaeeih; int dmaerql; int dmaerqh; int dmacr; int dmagpor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct mpc_dma*) ;
 int FUNC_3 (struct device*,char*) ;
 TYPE_2__* FUNC_4 (struct device*,int ,int ) ;
 struct mpc_dma* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 int FUNC_7 (struct dma_device*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (void*,struct mpc_dma*) ;
 int FUNC_11 (void*) ;
 void* FUNC_12 (struct device_node*,int) ;
 int FUNC_13 (int *,int *) ;
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
 int FUNC_14 (struct device_node*,int ,struct resource*) ;
 scalar_t__ FUNC_15 (struct device_node*,char*) ;
 int FUNC_16 (struct device_node*,int ,struct mpc_dma*) ;
 int VAR_24 ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (void*,int *,int ,int ,struct mpc_dma*) ;
 int FUNC_19 (struct resource*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_25)
{
 struct device_node *VAR_26 = VAR_25->dev.of_node;
 struct device *VAR_27 = &VAR_25->dev;
 struct dma_device *VAR_28;
 struct mpc_dma *VAR_29;
 struct mpc_dma_chan *VAR_30;
 struct resource VAR_31;
 ulong VAR_32, VAR_33;
 int VAR_34, VAR_35;
 u8 VAR_36;

 VAR_29 = FUNC_5(VAR_27, sizeof(struct mpc_dma), VAR_6);
 if (!VAR_29) {
  VAR_34 = -VAR_5;
  goto err;
 }

 VAR_29->irq = FUNC_12(VAR_26, 0);
 if (!VAR_29->irq) {
  FUNC_1(VAR_27, "Error mapping IRQ!\n");
  VAR_34 = -VAR_4;
  goto err;
 }

 if (FUNC_15(VAR_26, "fsl,mpc8308-dma")) {
  VAR_29->is_mpc8308 = 1;
  VAR_29->irq2 = FUNC_12(VAR_26, 1);
  if (!VAR_29->irq2) {
   FUNC_1(VAR_27, "Error mapping IRQ!\n");
   VAR_34 = -VAR_4;
   goto err_dispose1;
  }
 }

 VAR_34 = FUNC_14(VAR_26, 0, &VAR_31);
 if (VAR_34) {
  FUNC_1(VAR_27, "Error parsing memory region!\n");
  goto err_dispose2;
 }

 VAR_32 = VAR_31.start;
 VAR_33 = FUNC_19(&VAR_31);

 if (!FUNC_6(VAR_27, VAR_32, VAR_33, VAR_2)) {
  FUNC_1(VAR_27, "Error requesting memory region!\n");
  VAR_34 = -VAR_3;
  goto err_dispose2;
 }

 VAR_29->regs = FUNC_4(VAR_27, VAR_32, VAR_33);
 if (!VAR_29->regs) {
  FUNC_1(VAR_27, "Error mapping memory region!\n");
  VAR_34 = -VAR_5;
  goto err_dispose2;
 }

 VAR_29->tcd = (struct mpc_dma_tcd *)((u8 *)(VAR_29->regs)
       + VAR_13);

 VAR_34 = FUNC_18(VAR_29->irq, &VAR_18, 0, VAR_2, VAR_29);
 if (VAR_34) {
  FUNC_1(VAR_27, "Error requesting IRQ!\n");
  VAR_34 = -VAR_4;
  goto err_dispose2;
 }

 if (VAR_29->is_mpc8308) {
  VAR_34 = FUNC_18(VAR_29->irq2, &VAR_18, 0,
       VAR_2, VAR_29);
  if (VAR_34) {
   FUNC_1(VAR_27, "Error requesting IRQ2!\n");
   VAR_34 = -VAR_4;
   goto err_free1;
  }
 }

 FUNC_20(&VAR_29->error_status_lock);

 VAR_28 = &VAR_29->dma;
 VAR_28->dev = VAR_27;
 VAR_28->device_alloc_chan_resources = VAR_14;
 VAR_28->device_free_chan_resources = VAR_17;
 VAR_28->device_issue_pending = VAR_19;
 VAR_28->device_tx_status = VAR_23;
 VAR_28->device_prep_dma_memcpy = VAR_20;
 VAR_28->device_prep_slave_sg = VAR_21;
 VAR_28->device_config = VAR_15;
 VAR_28->device_terminate_all = VAR_16;

 FUNC_0(&VAR_28->channels);
 FUNC_8(VAR_0, VAR_28->cap_mask);
 FUNC_8(VAR_1, VAR_28->cap_mask);

 if (VAR_29->is_mpc8308)
  VAR_36 = VAR_8;
 else
  VAR_36 = VAR_7;

 for (VAR_35 = 0; VAR_35 < VAR_36; VAR_35++) {
  VAR_30 = &VAR_29->channels[VAR_35];

  VAR_30->chan.device = VAR_28;
  FUNC_9(&VAR_30->chan);

  FUNC_0(&VAR_30->free);
  FUNC_0(&VAR_30->prepared);
  FUNC_0(&VAR_30->queued);
  FUNC_0(&VAR_30->active);
  FUNC_0(&VAR_30->completed);

  FUNC_20(&VAR_30->lock);
  FUNC_13(&VAR_30->chan.device_node, &VAR_28->channels);
 }

 FUNC_21(&VAR_29->tasklet, VAR_22, (unsigned long)VAR_29);







 if (VAR_29->is_mpc8308) {

  FUNC_17(&VAR_29->regs->dmacr, VAR_10);


  FUNC_17(&VAR_29->regs->dmagpor, VAR_12);

  FUNC_17(&VAR_29->regs->dmaeeil, 0);


  FUNC_17(&VAR_29->regs->dmaintl, 0xFFFF);
  FUNC_17(&VAR_29->regs->dmaerrl, 0xFFFF);
 } else {
  FUNC_17(&VAR_29->regs->dmacr, VAR_9 |
      VAR_11 |
      VAR_10);


  FUNC_17(&VAR_29->regs->dmaerqh, 0);
  FUNC_17(&VAR_29->regs->dmaerql, 0);


  FUNC_17(&VAR_29->regs->dmaeeih, 0);
  FUNC_17(&VAR_29->regs->dmaeeil, 0);


  FUNC_17(&VAR_29->regs->dmainth, 0xFFFFFFFF);
  FUNC_17(&VAR_29->regs->dmaintl, 0xFFFFFFFF);
  FUNC_17(&VAR_29->regs->dmaerrh, 0xFFFFFFFF);
  FUNC_17(&VAR_29->regs->dmaerrl, 0xFFFFFFFF);


  FUNC_17(&VAR_29->regs->dmaihsa, 0);
  FUNC_17(&VAR_29->regs->dmailsa, 0);
 }


 FUNC_2(VAR_27, VAR_29);
 VAR_34 = FUNC_7(VAR_28);
 if (VAR_34)
  goto err_free2;


 if (VAR_27->of_node) {
  VAR_34 = FUNC_16(VAR_27->of_node,
      VAR_24, VAR_29);
  if (VAR_34)
   FUNC_3(VAR_27, "Could not register for OF lookup\n");
 }

 return 0;

err_free2:
 if (VAR_29->is_mpc8308)
  FUNC_10(VAR_29->irq2, VAR_29);
err_free1:
 FUNC_10(VAR_29->irq, VAR_29);
err_dispose2:
 if (VAR_29->is_mpc8308)
  FUNC_11(VAR_29->irq2);
err_dispose1:
 FUNC_11(VAR_29->irq);
err:
 return VAR_34;
}
