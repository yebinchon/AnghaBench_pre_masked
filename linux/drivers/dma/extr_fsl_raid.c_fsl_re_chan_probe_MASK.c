
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dma_device {int dummy; } ;
struct fsl_re_drv_private {int hw_desc_pool; struct fsl_re_chan** re_jrs; scalar_t__ re_regs; struct dma_device dma_dev; } ;
struct fsl_re_chan_cfg {int jr_command; int jr_config_1; int oubring_size; int inbring_size; int oubring_base_l; int inbring_base_l; int oubring_base_h; int inbring_base_h; } ;
struct TYPE_2__ {struct fsl_re_chan* private; struct dma_device* device; } ;
struct fsl_re_chan {int inb_phys_addr; int oub_phys_addr; void* inb_ring_virt_addr; struct fsl_re_drv_private* re_dev; struct fsl_re_chan_cfg* jrregs; void* oub_ring_virt_addr; int free_q; int submit_q; int active_q; int ack_q; int desc_lock; struct device* dev; TYPE_1__ chan; int name; int irq; int irqtask; } ;
struct device_node {int dummy; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct fsl_re_drv_private* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct fsl_re_chan*) ;
 struct fsl_re_chan* FUNC_4 (struct device*,int,int ) ;
 void* FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,void*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device_node*,int ) ;
 struct platform_device* FUNC_9 (struct device_node*,int *,struct device*) ;
 int FUNC_10 (struct device_node*,char*,int*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ,int ,int ,int ,struct device*) ;
 int FUNC_13 (int ,int,char*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_14,
        struct device_node *VAR_15, u8 VAR_16, u32 VAR_17)
{
 struct device *VAR_18, *VAR_19;
 struct fsl_re_drv_private *VAR_20;
 struct fsl_re_chan *VAR_21;
 struct dma_device *VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 int VAR_25 = 0, VAR_26;
 struct platform_device *VAR_27;

 VAR_18 = &VAR_14->dev;
 VAR_20 = FUNC_2(VAR_18);
 VAR_22 = &VAR_20->dma_dev;

 VAR_21 = FUNC_4(VAR_18, sizeof(*VAR_21), VAR_11);
 if (!VAR_21)
  return -VAR_2;


 VAR_27 = FUNC_9(VAR_15, ((void*)0), VAR_18);
 if (!VAR_27) {
  FUNC_1(VAR_18, "Not able to create ofdev for jr %d\n", VAR_16);
  VAR_25 = -VAR_0;
  goto err_free;
 }


 VAR_26 = FUNC_10(VAR_15, "reg", &VAR_23);
 if (VAR_26) {
  FUNC_1(VAR_18, "Reg property not found in jr %d\n", VAR_16);
  VAR_25 = -VAR_1;
  goto err_free;
 }

 VAR_21->jrregs = (struct fsl_re_chan_cfg *)((u8 *)VAR_20->re_regs +
   VAR_17 + VAR_23);


 VAR_21->irq = FUNC_8(VAR_15, 0);
 if (!VAR_21->irq) {
  FUNC_1(VAR_18, "No IRQ defined for JR %d\n", VAR_16);
  VAR_25 = -VAR_1;
  goto err_free;
 }

 FUNC_13(VAR_21->name, sizeof(VAR_21->name), "re_jr%02d", VAR_16);

 VAR_19 = &VAR_27->dev;
 FUNC_15(&VAR_21->irqtask, VAR_12, (unsigned long)VAR_19);

 VAR_25 = FUNC_12(VAR_21->irq, VAR_13, 0, VAR_21->name, VAR_19);
 if (VAR_25) {
  FUNC_1(VAR_18, "Unable to register interrupt for JR %d\n", VAR_16);
  VAR_25 = -VAR_0;
  goto err_free;
 }

 VAR_20->re_jrs[VAR_16] = VAR_21;
 VAR_21->chan.device = VAR_22;
 VAR_21->chan.private = VAR_21;
 VAR_21->dev = VAR_19;
 VAR_21->re_dev = VAR_20;

 FUNC_14(&VAR_21->desc_lock);
 FUNC_0(&VAR_21->ack_q);
 FUNC_0(&VAR_21->active_q);
 FUNC_0(&VAR_21->submit_q);
 FUNC_0(&VAR_21->free_q);

 VAR_21->inb_ring_virt_addr = FUNC_5(VAR_21->re_dev->hw_desc_pool,
  VAR_11, &VAR_21->inb_phys_addr);
 if (!VAR_21->inb_ring_virt_addr) {
  FUNC_1(VAR_18, "No dma memory for inb_ring_virt_addr\n");
  VAR_25 = -VAR_2;
  goto err_free;
 }

 VAR_21->oub_ring_virt_addr = FUNC_5(VAR_21->re_dev->hw_desc_pool,
  VAR_11, &VAR_21->oub_phys_addr);
 if (!VAR_21->oub_ring_virt_addr) {
  FUNC_1(VAR_18, "No dma memory for oub_ring_virt_addr\n");
  VAR_25 = -VAR_2;
  goto err_free_1;
 }


 FUNC_11(&VAR_21->jrregs->inbring_base_h,
   VAR_21->inb_phys_addr & VAR_3);
 FUNC_11(&VAR_21->jrregs->oubring_base_h,
   VAR_21->oub_phys_addr & VAR_3);
 FUNC_11(&VAR_21->jrregs->inbring_base_l,
   VAR_21->inb_phys_addr >> VAR_4);
 FUNC_11(&VAR_21->jrregs->oubring_base_l,
   VAR_21->oub_phys_addr >> VAR_4);
 FUNC_11(&VAR_21->jrregs->inbring_size,
   VAR_9 << VAR_10);
 FUNC_11(&VAR_21->jrregs->oubring_size,
   VAR_9 << VAR_10);


 VAR_24 = FUNC_7(&VAR_21->jrregs->jr_config_1) & VAR_8;


 FUNC_11(&VAR_21->jrregs->jr_config_1,
   VAR_6 | VAR_5 | VAR_24);

 FUNC_3(VAR_19, VAR_21);


 FUNC_11(&VAR_21->jrregs->jr_command, VAR_7);

 return 0;

err_free_1:
 FUNC_6(VAR_21->re_dev->hw_desc_pool, VAR_21->inb_ring_virt_addr,
        VAR_21->inb_phys_addr);
err_free:
 return VAR_25;
}
