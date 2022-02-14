
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int const) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 static const u8 VAR_3[] = { 0x5d, 0x47, 0x34, 0x22, 0x20 };
 int VAR_4 = 1 + 2 * VAR_1->port_no - VAR_2->devno;
 int VAR_5 = (2 * VAR_1->port_no + VAR_2->devno) * 4;
 u16 VAR_6;
 struct pci_dev *VAR_7 = FUNC_4(VAR_1->host->dev);
 int VAR_8 = VAR_2->pio_mode - VAR_0;

 FUNC_1(VAR_7, 0x40 + VAR_4, VAR_3[VAR_8]);



 if (FUNC_3(VAR_7)) {
  FUNC_0(VAR_7, 0x4A, &VAR_6);
  VAR_6 &= ~(0x0F << VAR_5);
  FUNC_2(VAR_7, 0x4A, VAR_6 | (VAR_8 << VAR_5));
 }
}
