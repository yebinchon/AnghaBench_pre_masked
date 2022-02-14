
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
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,scalar_t__) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;
 int VAR_5 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ata_port *VAR_6, struct ata_device *VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_7(VAR_6->host->dev);
 unsigned long VAR_9;
 u8 VAR_10 = VAR_6->port_no ? 0x42 : 0x40;
 u16 VAR_11;
 u8 VAR_12 = VAR_7->dma_mode;
 int VAR_13 = VAR_7->devno + 2 * VAR_6->port_no;
 u8 VAR_14 = 0;

 static const
 u8 VAR_15[][2] = { { 0, 0 },
       { 0, 0 },
       { 1, 0 },
       { 2, 1 },
       { 2, 3 }, };

 FUNC_5(&VAR_5, VAR_9);

 FUNC_2(VAR_8, VAR_10, &VAR_11);
 FUNC_1(VAR_8, 0x48, &VAR_14);

 if (VAR_12 >= VAR_4) {
  unsigned int VAR_16 = VAR_7->dma_mode - VAR_4;
  u16 VAR_17;
  u16 VAR_18;
  int VAR_19, VAR_20;
  VAR_20 = FUNC_0(2 - (VAR_16 & 1), VAR_16);
  if (VAR_16 == 5)
   VAR_19 = 0x1000;
  else if (VAR_16 > 2)
   VAR_19 = 1;
  else
   VAR_19 = 0;

  VAR_14 |= (1 << VAR_13);


  FUNC_2(VAR_8, 0x4A, &VAR_17);
  VAR_17 &= ~(3 << (4 * VAR_13));
  VAR_17 |= VAR_20 << (4 * VAR_13);
  FUNC_4(VAR_8, 0x4A, VAR_17);


  FUNC_2(VAR_8, 0x54, &VAR_18);
  VAR_18 &= ~(0x1001 << VAR_13);
  VAR_18 |= VAR_19 << VAR_13;
  FUNC_4(VAR_8, 0x54, VAR_18);
 } else {





  unsigned int VAR_21 = VAR_7->dma_mode - VAR_0;
  unsigned int VAR_22;
  u8 VAR_23;
  const unsigned int VAR_24[3] = {
   VAR_1, VAR_2, VAR_3
  };
  int VAR_25 = VAR_24[VAR_21] - VAR_1;

  VAR_22 = 3;




  if (VAR_7->pio_mode < VAR_24[VAR_21])

   VAR_22 |= 8;

  if (VAR_7->devno) {
   VAR_11 &= 0xFF4F;
   VAR_11 |= VAR_22 << 4;
   FUNC_1(VAR_8, 0x44, &VAR_23);
   VAR_23 &= (VAR_6->port_no ? 0x0f : 0xf0);

   VAR_23 |= ((VAR_15[VAR_25][0] << 2) | VAR_15[VAR_25][1]) << (VAR_6->port_no ? 4 : 0);
   FUNC_3(VAR_8, 0x44, VAR_23);
  } else {
   VAR_11 &= 0xCCF4;

   VAR_11 |= VAR_22;
   VAR_11 |=
    (VAR_15[VAR_25][0] << 12) |
    (VAR_15[VAR_25][1] << 8);
  }

  VAR_14 &= ~(1 << VAR_13);
  FUNC_4(VAR_8, VAR_10, VAR_11);
 }
 FUNC_3(VAR_8, 0x48, VAR_14);

 FUNC_6(&VAR_5, VAR_9);
}
