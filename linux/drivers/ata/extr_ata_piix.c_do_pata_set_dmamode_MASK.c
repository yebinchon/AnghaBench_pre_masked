
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {scalar_t__ dma_mode; int devno; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,scalar_t__) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 int VAR_5 ;
 int FUNC_5 (struct ata_port*,struct ata_device*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct pci_dev* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct ata_port *VAR_6, struct ata_device *VAR_7, int VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_8(VAR_6->host->dev);
 unsigned long VAR_10;
 u8 VAR_11 = VAR_7->dma_mode;
 int VAR_12 = VAR_7->devno + 2 * VAR_6->port_no;
 u8 VAR_13 = 0;

 if (VAR_11 >= VAR_4) {
  unsigned int VAR_14 = VAR_11 - VAR_4;
  u16 VAR_15;
  u16 VAR_16;
  int VAR_17, VAR_18;

  FUNC_6(&VAR_5, VAR_10);

  FUNC_1(VAR_9, 0x48, &VAR_13);
  VAR_18 = FUNC_0(2 - (VAR_14 & 1), VAR_14);
  if (VAR_14 == 5)
   VAR_17 = 0x1000;
  else if (VAR_14 > 2)
   VAR_17 = 1;
  else
   VAR_17 = 0;

  VAR_13 |= (1 << VAR_12);


  FUNC_2(VAR_9, 0x4A, &VAR_15);
  VAR_15 &= ~(3 << (4 * VAR_12));
  VAR_15 |= VAR_18 << (4 * VAR_12);
  FUNC_4(VAR_9, 0x4A, VAR_15);

  if (VAR_8) {

   FUNC_2(VAR_9, 0x54, &VAR_16);
   VAR_16 &= ~(0x1001 << VAR_12);
   VAR_16 |= VAR_17 << VAR_12;


   FUNC_4(VAR_9, 0x54, VAR_16);
  }

  FUNC_3(VAR_9, 0x48, VAR_13);

  FUNC_7(&VAR_5, VAR_10);
 } else {

  unsigned int VAR_19 = VAR_11 - VAR_0;
  const unsigned int VAR_20[3] = {
   VAR_1, VAR_2, VAR_3
  };
  int VAR_21 = VAR_20[VAR_19] - VAR_1;


  FUNC_5(VAR_6, VAR_7, VAR_21);
 }
}
