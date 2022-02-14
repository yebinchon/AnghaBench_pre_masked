
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_timing {scalar_t__ udma; scalar_t__ recover; scalar_t__ active; scalar_t__ rec8b; scalar_t__ act8b; scalar_t__ setup; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;




 struct ata_device* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,int,struct ata_timing*,unsigned long,unsigned long) ;
 int FUNC_2 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int ) ;
 int FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ata_port *VAR_1, struct ata_device *VAR_2,
       int VAR_3, int VAR_4, int VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_6(VAR_1->host->dev);
 struct ata_device *VAR_7 = FUNC_0(VAR_2);
 struct ata_timing VAR_8, VAR_9;
 static int VAR_10 = 33333;
 unsigned long VAR_11 = 1000000000 / VAR_10;
 unsigned long VAR_12 = VAR_11;
 int VAR_13;
 int VAR_14 = 3 - (2*VAR_1->port_no) - VAR_2->devno;

 switch (VAR_5) {
 case 130:
  VAR_12 = VAR_11 / 2; break;
 case 129:
  VAR_12 = VAR_11 / 3; break;
 case 128:
  VAR_12 = VAR_11 / 4; break;
 }


 FUNC_1(VAR_2, VAR_3, &VAR_8, VAR_11, VAR_12);


 if (VAR_7) {
  if (VAR_7->pio_mode) {
   FUNC_1(VAR_7, VAR_7->pio_mode, &VAR_9, VAR_11, VAR_12);
   FUNC_2(&VAR_9, &VAR_8, &VAR_8, VAR_0);
  }
 }


 if (VAR_4) {
  u8 VAR_15;
  int VAR_16 = 2 * VAR_14;

  FUNC_4(VAR_6, 0x4C, &VAR_15);
  VAR_15 &= ~(3 << VAR_16);
  VAR_15 |= (FUNC_3(VAR_8.setup, 1, 4) - 1) << VAR_16;
  FUNC_5(VAR_6, 0x4C, VAR_15);
 }


 FUNC_5(VAR_6, 0x4F - VAR_1->port_no,
  ((FUNC_3(VAR_8.act8b, 1, 16) - 1) << 4) | (FUNC_3(VAR_8.rec8b, 1, 16) - 1));
 FUNC_5(VAR_6, 0x48 + VAR_14,
  ((FUNC_3(VAR_8.active, 1, 16) - 1) << 4) | (FUNC_3(VAR_8.recover, 1, 16) - 1));


 switch (VAR_5) {
 case 131:
 default:
  VAR_13 = VAR_8.udma ? (0xe0 | (FUNC_3(VAR_8.udma, 2, 5) - 2)) : 0x03;
  break;
 case 130:
  VAR_13 = VAR_8.udma ? (0xe8 | (FUNC_3(VAR_8.udma, 2, 9) - 2)) : 0x0f;
  break;
 case 129:
  VAR_13 = VAR_8.udma ? (0xe0 | (FUNC_3(VAR_8.udma, 2, 9) - 2)) : 0x07;
  break;
 case 128:
  VAR_13 = VAR_8.udma ? (0xe0 | (FUNC_3(VAR_8.udma, 2, 9) - 2)) : 0x07;
  break;
 }


 if (VAR_5) {
  u8 VAR_17;

  FUNC_4(VAR_6, 0x50 + VAR_14, &VAR_17);


  VAR_17 &= ~0x20;

  if (VAR_8.udma) {

   VAR_17 &= 0x10;
   VAR_17 |= VAR_13;
  }

  FUNC_5(VAR_6, 0x50 + VAR_14, VAR_17);
 }
}
