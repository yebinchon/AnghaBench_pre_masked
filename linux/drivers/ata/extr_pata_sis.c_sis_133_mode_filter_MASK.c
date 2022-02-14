
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_2__* host; } ;
struct ata_device {TYPE_1__* link; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct ata_device*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct ata_device *VAR_1, unsigned long VAR_2)
{
 struct ata_port *VAR_3 = VAR_1->link->ap;
 struct pci_dev *VAR_4 = FUNC_2(VAR_3->host->dev);
 int VAR_5 = FUNC_1(VAR_1);
 u32 VAR_6;

 FUNC_0(VAR_4, VAR_5, &VAR_6);

 if (!(VAR_6 & 0x08))
  VAR_2 &= ~(0xC0 << VAR_0);
 return VAR_2;
}
