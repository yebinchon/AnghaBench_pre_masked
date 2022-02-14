
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_timing {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {scalar_t__ class; scalar_t__ dma_mode; scalar_t__ pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ata_port*,struct ata_device*,int) ;
 int FUNC_1 (struct ata_port*,struct ata_device*,struct ata_timing*,int) ;
 struct ata_device* FUNC_2 (struct ata_device*) ;
 int FUNC_3 (struct ata_device*,scalar_t__,struct ata_timing*,unsigned long,int) ;
 int FUNC_4 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ata_port *VAR_5, struct ata_device *VAR_6)
{
 static u8 VAR_7[7] = { 0xC, 0xB, 0xA, 0x9, 0x8, 0xF, 0xD };
 struct ata_device *VAR_8 = FUNC_2(VAR_6);
 struct ata_timing VAR_9;
 unsigned long VAR_10 = 1000000000 / 33333;
 struct pci_dev *VAR_11 = FUNC_7(VAR_5->host->dev);


 if (VAR_6->class == VAR_0)
  FUNC_0(VAR_5, VAR_6, 0x08);

 if (VAR_6->dma_mode >= VAR_3) {
  FUNC_1(VAR_5, VAR_6, ((void*)0), VAR_7[VAR_6->dma_mode - VAR_3]);
  if (VAR_6->dma_mode >= VAR_4) {
   u8 VAR_12;
   FUNC_5(VAR_11, 0x4B, &VAR_12);
   VAR_12 |= 1;
   FUNC_6(VAR_11, 0x4B, VAR_12);
  }
 } else {
  FUNC_3(VAR_6, VAR_6->dma_mode, &VAR_9, VAR_10, 1);
  if (VAR_8) {
   struct ata_timing VAR_13;
   FUNC_3(VAR_8, VAR_8->pio_mode, &VAR_13, VAR_10, 1);
   FUNC_4(&VAR_13, &VAR_9, &VAR_9, VAR_2|VAR_1);
   if (VAR_8->dma_mode) {
    FUNC_3(VAR_8, VAR_8->dma_mode, &VAR_13, VAR_10, 1);
    FUNC_4(&VAR_13, &VAR_9, &VAR_9, VAR_2|VAR_1);
   }
  }
  FUNC_1(VAR_5, VAR_6, &VAR_9, 0);
 }
}
