
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int pio_mode; int devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct ata_device* FUNC_0 (struct ata_device*) ;
 scalar_t__ FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct pci_dev*,unsigned long,int*) ;
 int FUNC_3 (struct pci_dev*,unsigned long,int*) ;
 int FUNC_4 (struct pci_dev*,unsigned long,int) ;
 int FUNC_5 (struct pci_dev*,unsigned long,int const) ;
 unsigned long FUNC_6 (struct ata_port*,struct ata_device*,int) ;
 unsigned long FUNC_7 (struct ata_port*,int) ;
 struct pci_dev* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 static const u16 VAR_3[5] = {
  0x328A, 0x2283, 0x1104, 0x10C3, 0x10C1
 };
 static const u16 VAR_4[5] = {
  0x328A, 0x2283, 0x1281, 0x10C3, 0x10C1
 };

 unsigned long VAR_5 = FUNC_7(VAR_1, 0x02);
 unsigned long VAR_6 = FUNC_6(VAR_1, VAR_2, 0x04);
 unsigned long VAR_7 = 0x80 + 4 * VAR_1->port_no;
 struct pci_dev *VAR_8 = FUNC_8(VAR_1->host->dev);
 int VAR_9 = VAR_2->pio_mode - VAR_0;
 int VAR_10 = VAR_9;
 int VAR_11 = 4 * VAR_2->devno;
 u16 VAR_12;
 u8 VAR_13;

 struct ata_device *VAR_14 = FUNC_0(VAR_2);

 if (VAR_14 != ((void*)0) && VAR_2->pio_mode > VAR_14->pio_mode)
  VAR_10 = VAR_14->pio_mode - VAR_0;

 FUNC_5(VAR_8, VAR_6, VAR_3[VAR_9]);
 FUNC_5(VAR_8, VAR_5, VAR_4[VAR_10]);

 FUNC_3(VAR_8, VAR_5-2, &VAR_12);
 FUNC_2(VAR_8, VAR_7, &VAR_13);

 VAR_12 &= ~0x0200;
 VAR_13 &= ~(3 << VAR_11);

 if (FUNC_1(VAR_2)) {
  VAR_12 |= 0x0200;
  VAR_13 |= 1 << VAR_11;
 }
 FUNC_5(VAR_8, VAR_5-2, VAR_12);
 FUNC_4(VAR_8, VAR_7, VAR_13);
}
