
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int dma_mode; int devno; int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ata_port*,struct ata_device*,int) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct pci_dev* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct ata_port *VAR_7, struct ata_device *VAR_8)
{
 static u8 VAR_9[5] = { 0x77, 0x21, 0x20 };

 struct pci_dev *VAR_10 = FUNC_8(VAR_7->host->dev);
 int VAR_11 = VAR_8->dma_mode;
 int VAR_12 = 2 * VAR_7->port_no + VAR_8->devno;
 int VAR_13;
 unsigned long VAR_14;

 FUNC_6(&VAR_6, VAR_14);

 if (VAR_8->dma_mode >= VAR_5) {
  u16 VAR_15;

  VAR_11 -= VAR_5;

  FUNC_3(VAR_10, VAR_1, &VAR_15);
  VAR_15 &= ~(0x7 << (4 * VAR_12));
  VAR_15 |= VAR_11 << (4 * VAR_12);
  FUNC_5(VAR_10, VAR_1, VAR_15);
 } else {
  int VAR_16 = (16 * VAR_7->port_no) + 8 * (VAR_8->devno ^ 1);
  u32 VAR_17;

  VAR_11 -= VAR_2;

  FUNC_2(VAR_10, VAR_0,
          &VAR_17);
  VAR_17 &= ~(0xFF << VAR_16);
  VAR_17 |= (VAR_9[VAR_11] << VAR_16);
  FUNC_4(VAR_10, VAR_0,
           VAR_17);
 }




 if (VAR_8->dma_mode >= VAR_4)
  VAR_13 = 4;
 else if (VAR_8->dma_mode == VAR_3)
  VAR_13 = 3;
 else if (VAR_8->dma_mode == VAR_2)
  VAR_13 = 0;
 else FUNC_0();

 if (VAR_8->pio_mode != VAR_13)
  FUNC_1(VAR_7, VAR_8, VAR_13);
 FUNC_7(&VAR_6, VAR_14);
}
