
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct ata_timing {int udma; int setup; int act8b; int rec8b; int active; int recover; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; int dma_mode; int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ata_device* FUNC_0 (struct ata_device*) ;
 scalar_t__ FUNC_1 (struct ata_device*,int,struct ata_timing*,int,int) ;
 int FUNC_2 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int ) ;
 size_t FUNC_3 (int,int,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ata_port *VAR_3, struct ata_device *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 static const unsigned char VAR_8[] = {
  6, 6, 5, 4, 0, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 7
 };

 struct pci_dev *VAR_9 = FUNC_7(VAR_3->host->dev);
 struct ata_device *VAR_10 = FUNC_0(VAR_4);
 int VAR_11 = VAR_3->port_no * 2 + VAR_4->devno;
 struct ata_timing VAR_12, VAR_13;
 int VAR_14, VAR_15;
 const int VAR_16 = 33333;
 u8 VAR_17;

 VAR_14 = 1000000000 / VAR_16;
 VAR_15 = VAR_14;
 if (VAR_7 >= 2)
  VAR_15 = VAR_14 / 2;

 if (FUNC_1(VAR_4, VAR_6, &VAR_12, VAR_14, VAR_15) < 0) {
  FUNC_4(&VAR_9->dev, "unknown mode %d\n", VAR_6);
  return;
 }

 if (VAR_10) {

  if (VAR_10->dma_mode) {
   FUNC_1(VAR_10, VAR_10->dma_mode, &VAR_13, VAR_14, VAR_15);
   FUNC_2(&VAR_13, &VAR_12, &VAR_12, VAR_0);
  }
  FUNC_1(VAR_10, VAR_10->pio_mode, &VAR_13, VAR_14, VAR_15);
  FUNC_2(&VAR_13, &VAR_12, &VAR_12, VAR_0);
 }

 if (VAR_6 == VAR_1 && VAR_16 <= 33333) VAR_12.udma = 1;
 if (VAR_6 == VAR_2 && VAR_16 <= 33333) VAR_12.udma = 15;






 FUNC_5(VAR_9, VAR_5 + 0x0C, &VAR_17);
 VAR_17 = (VAR_17 & ~(3 << ((3 - VAR_11) << 1))) | ((FUNC_3(VAR_12.setup, 1, 4) - 1) << ((3 - VAR_11) << 1));
 FUNC_6(VAR_9, VAR_5 + 0x0C , VAR_17);


 FUNC_6(VAR_9, VAR_5 + 0x0E + (1 - (VAR_11 >> 1)),
  ((FUNC_3(VAR_12.act8b, 1, 16) - 1) << 4) | (FUNC_3(VAR_12.rec8b, 1, 16) - 1));


 FUNC_6(VAR_9, VAR_5 + 0x08 + (3 - VAR_11),
  ((FUNC_3(VAR_12.active, 1, 16) - 1) << 4) | (FUNC_3(VAR_12.recover, 1, 16) - 1));

 switch (VAR_7) {
  case 1:
  VAR_17 = VAR_12.udma ? (0xc0 | (FUNC_3(VAR_12.udma, 2, 5) - 2)) : 0x03;
  break;

  case 2:
  VAR_17 = VAR_12.udma ? (0xc0 | VAR_8[FUNC_3(VAR_12.udma, 2, 10)]) : 0x03;
  break;

  case 3:
  VAR_17 = VAR_12.udma ? (0xc0 | VAR_8[FUNC_3(VAR_12.udma, 1, 10)]) : 0x03;
  break;

  case 4:
  VAR_17 = VAR_12.udma ? (0xc0 | VAR_8[FUNC_3(VAR_12.udma, 1, 15)]) : 0x03;
  break;

  default:
   return;
 }


 if (VAR_12.udma)
  FUNC_6(VAR_9, VAR_5 + 0x10 + (3 - VAR_11), VAR_17);
}
