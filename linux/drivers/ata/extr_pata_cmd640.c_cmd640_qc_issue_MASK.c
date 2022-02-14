
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct cmd640_reg {size_t last; int * reg58; } ;
struct ata_queued_cmd {struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {scalar_t__ port_no; struct cmd640_reg* private_data; TYPE_1__* host; } ;
struct ata_device {size_t devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct ata_device *VAR_3 = VAR_1->dev;
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->host->dev);
 struct cmd640_reg *VAR_5 = VAR_2->private_data;

 if (VAR_2->port_no != 0 && VAR_3->devno != VAR_5->last) {
  FUNC_1(VAR_4, VAR_0, VAR_5->reg58[VAR_3->devno]);
  VAR_5->last = VAR_3->devno;
 }
 return FUNC_0(VAR_1);
}
