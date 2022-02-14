
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {scalar_t__ dma_mode; int devno; unsigned int const pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,scalar_t__) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7 (struct ata_port *VAR_6, struct ata_device *VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_6(VAR_6->host->dev);
 u8 VAR_9 = VAR_6->port_no ? 0x42 : 0x40;
 u16 VAR_10;
 u8 VAR_11 = VAR_7->dma_mode;
 int VAR_12 = VAR_7->devno + 2 * VAR_6->port_no;
 unsigned long VAR_13;
 u8 VAR_14;

 static const
 u8 VAR_15[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 FUNC_4(&VAR_5, VAR_13);

 FUNC_1(VAR_8, VAR_9, &VAR_10);
 FUNC_0(VAR_8, 0x48, &VAR_14);

 if (VAR_11 >= VAR_4) {
  unsigned int VAR_16 = VAR_7->dma_mode - VAR_4;
  u16 VAR_17;

  VAR_14 |= (1 << VAR_12);


  FUNC_1(VAR_8, 0x4A, &VAR_17);
  VAR_17 &= ~(7 << (4 * VAR_12));
  VAR_17 |= VAR_16 << (4 * VAR_12);
  FUNC_3(VAR_8, 0x4A, VAR_17);
 } else {





  unsigned int VAR_18 = VAR_7->dma_mode - VAR_0;
  unsigned int VAR_19;
  u8 VAR_20;
  const unsigned int VAR_21[3] = {
   VAR_1, VAR_2, VAR_3
  };
  int VAR_22 = VAR_21[VAR_18] - VAR_1;

  VAR_19 = 3;




  if (VAR_7->pio_mode < VAR_21[VAR_18])

   VAR_19 |= 8;

  if (VAR_7->devno) {
   VAR_10 &= 0xFF4F;
   VAR_10 |= VAR_19 << 4;
   FUNC_0(VAR_8, 0x44, &VAR_20);
   VAR_20 &= VAR_6->port_no ? 0x0F : 0xF0;

   VAR_20 |= ((VAR_15[VAR_22][0] << 2) | VAR_15[VAR_22][1]) << (VAR_6->port_no ? 4 : 0);
   FUNC_2(VAR_8, 0x44, VAR_20);
  } else {
   VAR_10 &= 0xCCF4;

   VAR_10 |= VAR_19;
   VAR_10 |=
    (VAR_15[VAR_22][0] << 12) |
    (VAR_15[VAR_22][1] << 8);
  }
  VAR_14 &= ~(1 << VAR_12);
  FUNC_3(VAR_8, VAR_9, VAR_10);
 }
 FUNC_2(VAR_8, 0x48, VAR_14);
 FUNC_5(&VAR_5, VAR_13);
}
