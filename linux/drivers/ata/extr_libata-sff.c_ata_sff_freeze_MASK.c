
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ctl_addr; } ;
struct ata_port {TYPE_1__* ops; int ctl; TYPE_2__ ioaddr; int last_ctl; } ;
struct TYPE_3__ {int (* sff_irq_clear ) (struct ata_port*) ;int (* sff_check_status ) (struct ata_port*) ;scalar_t__ sff_set_devctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*,int ) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*) ;

void FUNC_3(struct ata_port *VAR_1)
{
 VAR_1->ctl |= VAR_0;
 VAR_1->last_ctl = VAR_1->ctl;

 if (VAR_1->ops->sff_set_devctl || VAR_1->ioaddr.ctl_addr)
  FUNC_0(VAR_1, VAR_1->ctl);





 VAR_1->ops->sff_check_status(VAR_1);

 if (VAR_1->ops->sff_irq_clear)
  VAR_1->ops->sff_irq_clear(VAR_1);
}
