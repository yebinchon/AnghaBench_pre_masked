
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ctl_addr; } ;
struct ata_port {int ctl; int last_ctl; TYPE_2__ ioaddr; TYPE_1__* ops; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_3__ {scalar_t__ sff_set_devctl; int (* sff_dev_select ) (struct ata_port*,int) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ata_port*,int ) ;
 int FUNC_2 (struct ata_link*,unsigned int*) ;
 int FUNC_3 (struct ata_port*,int) ;
 int FUNC_4 (struct ata_port*,int) ;

void FUNC_5(struct ata_link *VAR_1, unsigned int *VAR_2)
{
 struct ata_port *VAR_3 = VAR_1->ap;

 FUNC_2(VAR_1, VAR_2);


 if (VAR_2[0] != VAR_0)
  VAR_3->ops->sff_dev_select(VAR_3, 1);
 if (VAR_2[1] != VAR_0)
  VAR_3->ops->sff_dev_select(VAR_3, 0);


 if (VAR_2[0] == VAR_0 && VAR_2[1] == VAR_0) {
  FUNC_0("EXIT, no device\n");
  return;
 }


 if (VAR_3->ops->sff_set_devctl || VAR_3->ioaddr.ctl_addr) {
  FUNC_1(VAR_3, VAR_3->ctl);
  VAR_3->last_ctl = VAR_3->ctl;
 }
}
