
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {struct ata_device* private_data; TYPE_1__* host; } ;
struct ata_device {scalar_t__ dma_mode; unsigned int const pio_mode; int devno; scalar_t__ xfer_mode; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (struct ata_port *VAR_6, struct ata_device *VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_4(VAR_6->host->dev);
 u16 VAR_9;
 u8 VAR_10;

 static const
 u8 VAR_11[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 1 },
       { 2, 2 },
       { 3, 3 }, };






 FUNC_1(VAR_8, 0x40, &VAR_9);
 FUNC_0(VAR_8, 0x48, &VAR_10);

 if (VAR_7->dma_mode < VAR_4) {
  unsigned int VAR_12 = VAR_7->dma_mode - VAR_0;
  const unsigned int VAR_13[3] = {
   VAR_1, VAR_2, VAR_3
  };
  int VAR_14 = VAR_13[VAR_12] - VAR_1;
  int VAR_15 = 3;




  if (VAR_7->pio_mode < VAR_13[VAR_12])
   VAR_15 = 1;




  VAR_9 &= 0xCCCC;
  VAR_9 |= VAR_15 << (4 * VAR_7->devno);
  VAR_9 |= (VAR_11[VAR_14][0] << 12) | (VAR_11[VAR_14][1] << 8);

  VAR_10 &= ~(1 << VAR_7->devno);
 } else {
  u8 VAR_16;



  FUNC_0(VAR_8, 0x4A, &VAR_16);

  if (VAR_7->xfer_mode == VAR_5)
   VAR_16 &= ~(2 << (VAR_7->devno * 4));
  else
   VAR_16 |= (2 << (VAR_7->devno * 4));

  FUNC_2(VAR_8, 0x4A, VAR_16);

  VAR_10 |= (1 << VAR_7->devno);
 }
 FUNC_3(VAR_8, 0x40, VAR_9);
 FUNC_2(VAR_8, 0x48, VAR_10);


 VAR_6->private_data = VAR_7;
}
