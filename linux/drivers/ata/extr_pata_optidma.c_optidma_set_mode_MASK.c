
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_link {int * device; struct ata_port* ap; } ;
struct ata_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ata_link*,struct ata_device**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ata_link *VAR_0, struct ata_device **VAR_1)
{
 struct ata_port *VAR_2 = VAR_0->ap;
 u8 VAR_3;
 int VAR_4 = 4 * VAR_2->port_no;
 struct pci_dev *VAR_5 = FUNC_4(VAR_2->host->dev);
 int VAR_6 = FUNC_0(VAR_0, VAR_1);
 if (VAR_6 == 0) {
  FUNC_2(VAR_5, 0x43, &VAR_3);

  VAR_3 &= (0x0F << VAR_4);
  VAR_3 |= (FUNC_1(&VAR_0->device[0]) +
       (FUNC_1(&VAR_0->device[0]) << 2)) << VAR_4;
  FUNC_3(VAR_5, 0x43, VAR_3);
 }
 return VAR_6;
}
