
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int device; } ;
struct ata_link {int pmp; TYPE_2__* ap; } ;
struct TYPE_4__ {int port_no; TYPE_1__* host; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ata_link *VAR_1, unsigned int VAR_2, u32 VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_1->ap->host->dev);
 int VAR_5 = 2 * VAR_1->ap->port_no + VAR_1->pmp;
 u32 VAR_6 = 0;

 switch (VAR_2) {
 case 128:

  FUNC_0(VAR_4->device != 0x5287);
  FUNC_2(VAR_4, 0xB0 + VAR_5 * 4, VAR_3);
  return 0;

 case 129:

  VAR_6 |= ((VAR_3 & 0x4) >> 1) | (VAR_3 & 0x1);


  VAR_6 |= ((VAR_3 >> 8) & 0x3) << 2;

  FUNC_1(VAR_4, 0xA4 + VAR_5, VAR_6);
  return 0;

 default:
  return -VAR_0;
 }
}
