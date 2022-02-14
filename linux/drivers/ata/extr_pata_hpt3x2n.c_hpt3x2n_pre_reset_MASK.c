
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ata_link*,unsigned long) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ata_link *VAR_0, unsigned long VAR_1)
{
 struct ata_port *VAR_2 = VAR_0->ap;
 struct pci_dev *VAR_3 = FUNC_2(VAR_2->host->dev);


 FUNC_1(VAR_3, 0x50 + 4 * VAR_2->port_no, 0x37);
 FUNC_3(100);

 return FUNC_0(VAR_0, VAR_1);
}
