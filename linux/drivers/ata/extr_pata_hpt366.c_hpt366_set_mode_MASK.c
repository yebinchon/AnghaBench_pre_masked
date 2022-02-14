
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int devno; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ata_port*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_2, struct ata_device *VAR_3,
       u8 VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_3(VAR_2->host->dev);
 u32 VAR_6 = 0x40 + 4 * VAR_3->devno;
 u32 VAR_7, VAR_8, VAR_9;


 if (VAR_4 < VAR_0)
  VAR_7 = 0xc1f8ffff;
 else if (VAR_4 < VAR_1)
  VAR_7 = 0x303800ff;
 else
  VAR_7 = 0x30070000;

 VAR_9 = FUNC_0(VAR_2, VAR_4);






 FUNC_1(VAR_5, VAR_6, &VAR_8);
 VAR_8 = ((VAR_8 & ~VAR_7) | (VAR_9 & VAR_7)) & ~0xc0000000;
 FUNC_2(VAR_5, VAR_6, VAR_8);
}
