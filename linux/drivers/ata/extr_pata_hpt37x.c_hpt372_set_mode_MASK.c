
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*,int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_2, struct ata_device *VAR_3,
       u8 VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_5(VAR_2->host->dev);
 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9, VAR_10;
 u8 VAR_11;

 VAR_6 = 0x40 + 4 * (VAR_3->devno + 2 * VAR_2->port_no);
 VAR_7 = 0x51 + 4 * VAR_2->port_no;


 FUNC_1(VAR_5, VAR_7, &VAR_11);
 VAR_11 &= ~0x07;
 FUNC_3(VAR_5, VAR_7, VAR_11);


 if (VAR_4 < VAR_0)
  VAR_10 = 0xcfc3ffff;
 else if (VAR_4 < VAR_1)
  VAR_10 = 0x31c001ff;
 else
  VAR_10 = 0x303c0000;

 VAR_9 = FUNC_0(VAR_2, VAR_4);

 FUNC_2(VAR_5, VAR_6, &VAR_8);
 VAR_8 = (VAR_8 & ~VAR_10) | (VAR_9 & VAR_10);
 FUNC_4(VAR_5, VAR_6, VAR_8);
}
