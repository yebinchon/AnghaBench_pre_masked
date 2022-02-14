
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pata_icside_info {int nr_ports; int * port; int base; int mwdma_mask; int state; int irqops; int irqmask; scalar_t__ irqaddr; struct expansion_card* ec; } ;
struct expansion_card {int irq; int dev; TYPE_1__* ops; int irqmask; scalar_t__ irqaddr; } ;
struct ata_port {int * ops; int flags; int mwdma_mask; int pio_mask; } ;
struct ata_host {struct ata_port** ports; int flags; int private_data; } ;
struct TYPE_2__ {int (* irqdisable ) (struct expansion_card*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_host*,int ,int ,int ,int *) ;
 struct ata_host* FUNC_1 (int *,int) ;
 int FUNC_2 (struct expansion_card*,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct ata_port*,int ,struct pata_icside_info*,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct expansion_card*,int ) ;

__attribute__((used)) static int FUNC_5(struct pata_icside_info *VAR_7)
{
 struct expansion_card *VAR_8 = VAR_7->ec;
 struct ata_host *VAR_9;
 int VAR_10;

 if (VAR_7->irqaddr) {
  VAR_8->irqaddr = VAR_7->irqaddr;
  VAR_8->irqmask = VAR_7->irqmask;
 }
 if (VAR_7->irqops)
  FUNC_2(VAR_8, VAR_7->irqops, VAR_7->state);




 VAR_8->ops->irqdisable(VAR_8, VAR_8->irq);

 VAR_9 = FUNC_1(&VAR_8->dev, VAR_7->nr_ports);
 if (!VAR_9)
  return -VAR_3;

 VAR_9->private_data = VAR_7->state;
 VAR_9->flags = VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_7->nr_ports; VAR_10++) {
  struct ata_port *VAR_11 = VAR_9->ports[VAR_10];

  VAR_11->pio_mask = VAR_2;
  VAR_11->mwdma_mask = VAR_7->mwdma_mask;
  VAR_11->flags |= VAR_0;
  VAR_11->ops = &VAR_5;

  FUNC_3(VAR_11, VAR_7->base, VAR_7, VAR_7->port[VAR_10]);
 }

 return FUNC_0(VAR_9, VAR_8->irq, VAR_4, 0,
     &VAR_6);
}
