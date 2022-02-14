
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct it821x_dev {int** want; int* mwdma; int* udma; scalar_t__ timing10; } ;
struct ata_port {int port_no; struct it821x_dev* private_data; TYPE_1__* host; } ;
struct ata_device {int devno; scalar_t__ dma_mode; } ;
struct TYPE_2__ {int dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ata_port*,struct ata_device*) ;
 int FUNC_1 (struct ata_port*,struct ata_device*,int) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_4, struct ata_device *VAR_5)
{
 static const u16 VAR_6[] = { 0x8866, 0x3222, 0x3121 };
 static const u8 VAR_7[] = { 128, 129, 128 };
 static const u16 VAR_8[] = { 0x4433, 0x4231, 0x3121, 0x2121, 0x1111, 0x2211, 0x1111 };
 static const u8 VAR_9[] = { 128, 130, 128, 129, 129, 130, 129 };

 struct pci_dev *VAR_10 = FUNC_4(VAR_4->host->dev);
 struct it821x_dev *VAR_11 = VAR_4->private_data;
 int VAR_12 = VAR_4->port_no;
 int VAR_13 = VAR_5->devno;
 u8 VAR_14;

 if (VAR_5->dma_mode >= VAR_3) {
  int VAR_15 = VAR_5->dma_mode - VAR_3;

  VAR_11->want[VAR_13][1] = VAR_9[VAR_15];
  VAR_11->want[VAR_13][0] = 3;
  VAR_11->mwdma[VAR_13] = VAR_0;
  VAR_11->udma[VAR_13] = VAR_8[VAR_15];
  if (VAR_15 >= 5)
   VAR_11->udma[VAR_13] |= 0x8080;


  FUNC_2(VAR_10, 0x50, &VAR_14);
  if (VAR_11->timing10)
   VAR_14 &= VAR_12 ? 0x9F: 0xE7;
  else
   VAR_14 &= ~ (1 << (3 + 2 * VAR_12 + VAR_13));
  FUNC_3(VAR_10, 0x50, VAR_14);
  FUNC_0(VAR_4, VAR_5);
  FUNC_1(VAR_4, VAR_5, VAR_11->udma[VAR_13]);
 } else {
  int VAR_16 = VAR_5->dma_mode - VAR_2;

  VAR_11->want[VAR_13][1] = VAR_7[VAR_16];
  VAR_11->want[VAR_13][0] = 2;
  VAR_11->mwdma[VAR_13] = VAR_6[VAR_16];
  VAR_11->udma[VAR_13] = VAR_1;


  FUNC_2(VAR_10, 0x50, &VAR_14);
  if (VAR_11->timing10)
   VAR_14 |= VAR_12 ? 0x60: 0x18;
  else
   VAR_14 |= 1 << (3 + 2 * VAR_12 + VAR_13);
  FUNC_3(VAR_10, 0x50, VAR_14);
  FUNC_0(VAR_4, VAR_5);
 }
}
