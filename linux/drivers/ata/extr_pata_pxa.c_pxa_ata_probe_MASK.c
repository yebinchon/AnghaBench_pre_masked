
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int num_resources; int dev; } ;
struct pata_pxa_pdata {int reg_shift; int irq_flags; } ;
struct pata_pxa_data {int dma_chan; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; int dst_addr; int src_addr; void* dst_addr_width; void* src_addr_width; } ;
struct TYPE_2__ {void* cmd_addr; void* command_addr; void* status_addr; void* device_addr; void* lbah_addr; void* lbam_addr; void* lbal_addr; void* nsect_addr; void* feature_addr; void* error_addr; void* data_addr; void* ctl_addr; void* altstatus_addr; void* bmdma_addr; } ;
struct ata_port {struct pata_pxa_data* private_data; TYPE_1__ ioaddr; int mwdma_mask; int pio_mask; int * ops; } ;
struct ata_host {struct ata_port** ports; } ;
typedef int config ;


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
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct ata_host*,int ,int ,int ,int *) ;
 struct ata_host* FUNC_1 (int *,int) ;
 int VAR_20 ;
 int FUNC_2 (int *,char*,...) ;
 struct pata_pxa_pdata* FUNC_3 (int *) ;
 void* FUNC_4 (int *,int ,int ) ;
 struct pata_pxa_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ,struct dma_slave_config*) ;
 int FUNC_9 (struct dma_slave_config*,int ,int) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_11 (struct resource*) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_23)
{
 struct ata_host *VAR_24;
 struct ata_port *VAR_25;
 struct pata_pxa_data *VAR_26;
 struct resource *VAR_27;
 struct resource *VAR_28;
 struct resource *VAR_29;
 struct resource *VAR_30;
 struct pata_pxa_pdata *VAR_31 = FUNC_3(&VAR_23->dev);
 struct dma_slave_config VAR_32;
 int VAR_33 = 0;
 if (VAR_23->num_resources != 4) {
  FUNC_2(&VAR_23->dev, "invalid number of resources\n");
  return -VAR_14;
 }




 VAR_27 = FUNC_10(VAR_23, VAR_19, 0);
 if (FUNC_12(VAR_27 == ((void*)0)))
  return -VAR_14;




 VAR_28 = FUNC_10(VAR_23, VAR_19, 1);
 if (FUNC_12(VAR_28 == ((void*)0)))
  return -VAR_14;




 VAR_29 = FUNC_10(VAR_23, VAR_17, 0);
 if (FUNC_12(VAR_29 == ((void*)0)))
  return -VAR_14;




 VAR_30 = FUNC_10(VAR_23, VAR_18, 0);
 if (FUNC_12(VAR_30 == ((void*)0)))
  return -VAR_14;




 VAR_24 = FUNC_1(&VAR_23->dev, 1);
 if (!VAR_24)
  return -VAR_15;

 VAR_25 = VAR_24->ports[0];
 VAR_25->ops = &VAR_21;
 VAR_25->pio_mask = VAR_1;
 VAR_25->mwdma_mask = VAR_0;

 VAR_25->ioaddr.cmd_addr = FUNC_4(&VAR_23->dev, VAR_27->start,
      FUNC_11(VAR_27));
 VAR_25->ioaddr.ctl_addr = FUNC_4(&VAR_23->dev, VAR_28->start,
      FUNC_11(VAR_28));
 VAR_25->ioaddr.bmdma_addr = FUNC_4(&VAR_23->dev, VAR_29->start,
      FUNC_11(VAR_29));




 VAR_25->ioaddr.altstatus_addr = VAR_25->ioaddr.ctl_addr;
 VAR_25->ioaddr.data_addr = VAR_25->ioaddr.cmd_addr +
     (VAR_3 << VAR_31->reg_shift);
 VAR_25->ioaddr.error_addr = VAR_25->ioaddr.cmd_addr +
     (VAR_5 << VAR_31->reg_shift);
 VAR_25->ioaddr.feature_addr = VAR_25->ioaddr.cmd_addr +
     (VAR_6 << VAR_31->reg_shift);
 VAR_25->ioaddr.nsect_addr = VAR_25->ioaddr.cmd_addr +
     (VAR_10 << VAR_31->reg_shift);
 VAR_25->ioaddr.lbal_addr = VAR_25->ioaddr.cmd_addr +
     (VAR_8 << VAR_31->reg_shift);
 VAR_25->ioaddr.lbam_addr = VAR_25->ioaddr.cmd_addr +
     (VAR_9 << VAR_31->reg_shift);
 VAR_25->ioaddr.lbah_addr = VAR_25->ioaddr.cmd_addr +
     (VAR_7 << VAR_31->reg_shift);
 VAR_25->ioaddr.device_addr = VAR_25->ioaddr.cmd_addr +
     (VAR_4 << VAR_31->reg_shift);
 VAR_25->ioaddr.status_addr = VAR_25->ioaddr.cmd_addr +
     (VAR_11 << VAR_31->reg_shift);
 VAR_25->ioaddr.command_addr = VAR_25->ioaddr.cmd_addr +
     (VAR_2 << VAR_31->reg_shift);




 VAR_26 = FUNC_5(&VAR_23->dev, sizeof(struct pata_pxa_data),
        VAR_16);
 if (!VAR_26)
  return -VAR_15;

 VAR_25->private_data = VAR_26;

 FUNC_9(&VAR_32, 0, sizeof(VAR_32));
 VAR_32.src_addr_width = VAR_12;
 VAR_32.dst_addr_width = VAR_12;
 VAR_32.src_addr = VAR_29->start;
 VAR_32.dst_addr = VAR_29->start;
 VAR_32.src_maxburst = 32;
 VAR_32.dst_maxburst = 32;




 VAR_26->dma_chan =
  FUNC_7(&VAR_23->dev, "data");
 if (!VAR_26->dma_chan)
  return -VAR_13;
 VAR_33 = FUNC_8(VAR_26->dma_chan, &VAR_32);
 if (VAR_33 < 0) {
  FUNC_2(&VAR_23->dev, "dma configuration failed: %d\n", VAR_33);
  return VAR_33;
 }




 VAR_33 = FUNC_0(VAR_24, VAR_30->start, VAR_20,
    VAR_31->irq_flags, &VAR_22);
 if (VAR_33)
  FUNC_6(VAR_26->dma_chan);

 return VAR_33;
}
