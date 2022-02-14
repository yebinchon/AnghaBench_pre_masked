
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {unsigned int pio_mode; scalar_t__ class; int devno; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,unsigned int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8 (struct ata_port *VAR_3, struct ata_device *VAR_4)
{
 unsigned int VAR_5 = VAR_4->pio_mode - VAR_1;
 struct pci_dev *VAR_6 = FUNC_7(VAR_3->host->dev);
 unsigned int VAR_7 = VAR_3->port_no ? 0x42 : 0x40;
 unsigned long VAR_8;
 u16 VAR_9;
 u8 VAR_10;
 int VAR_11 = 0;






 static const
 u8 VAR_12[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 if (VAR_5 > 1)
  VAR_11 |= 1;
 if (FUNC_0(VAR_4))
  VAR_11 |= 2;

 if (VAR_4->class == VAR_0)
  VAR_11 |= 4;

 FUNC_5(&VAR_2, VAR_8);

 FUNC_2(VAR_6, VAR_7, &VAR_9);


 if (VAR_4->devno == 0) {
  VAR_9 &= 0xCCF0;
  VAR_9 |= VAR_11;
  VAR_9 |= (VAR_12[VAR_5][0] << 12) |
   (VAR_12[VAR_5][1] << 8);
 } else {
  int VAR_13 = 4 * VAR_3->port_no;
  u8 VAR_14;

  VAR_9 &= 0xFF0F;
  VAR_9 |= (VAR_11 << 4);


  FUNC_1(VAR_6, 0x44, &VAR_14);
  VAR_14 &= VAR_3->port_no ? 0x0F : 0xF0;
  VAR_14 |= ((VAR_12[VAR_5][0] << 2) | VAR_12[VAR_5][1]) << VAR_13;
  FUNC_3(VAR_6, 0x44, VAR_14);
 }

 VAR_9 |= 0x4000;
 FUNC_4(VAR_6, VAR_7, VAR_9);

 FUNC_1(VAR_6, 0x48, &VAR_10);
 VAR_10 &= ~(1 << (2 * VAR_3->port_no + VAR_4->devno));
 FUNC_3(VAR_6, 0x48, VAR_10);
 FUNC_6(&VAR_2, VAR_8);
}
