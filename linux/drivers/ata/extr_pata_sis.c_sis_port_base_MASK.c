
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_2__* host; } ;
struct ata_device {int devno; TYPE_1__* link; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct ata_port* ap; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ata_device *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->link->ap;
 struct pci_dev *VAR_2 = FUNC_1(VAR_1->host->dev);
 int VAR_3 = 0x40;
 u32 VAR_4;


 FUNC_0(VAR_2, 0x54, &VAR_4);
 if (VAR_4 & 0x40000000)
  VAR_3 = 0x70;

 return VAR_3 + (8 * VAR_1->port_no) + (4 * VAR_0->devno);
}
