
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {scalar_t__ dma_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct ata_device*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_2->host->dev);
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 FUNC_0(VAR_4, VAR_5, &VAR_6);

 if (VAR_3->dma_mode < VAR_1) {

  static const u32 VAR_7[] = { 0x19154000, 0x06072000, 0x04062000 };
  static const u32 VAR_8[] = { 0x221C6000, 0x0C0A3000, 0x05093000 };
  int VAR_9 = VAR_3->dma_mode - VAR_0;

  VAR_6 &= 0xC0C00FFF;

  VAR_6 &= ~0x00000004;
  if (VAR_6 & 0x08)
   VAR_6 |= VAR_8[VAR_9];
  else
   VAR_6 |= VAR_7[VAR_9];
 } else {

  static const u32 VAR_10[] = { 0x6B0, 0x470, 0x350, 0x140, 0x120, 0x110, 0x000 };
  static const u32 VAR_11[] = { 0x9F0, 0x6A0, 0x470, 0x250, 0x230, 0x220, 0x210 };
  int VAR_12 = VAR_3->dma_mode - VAR_1;

  VAR_6 &= ~0x00000FF0;

  VAR_6 |= 0x00000004;
  if (VAR_6 & 0x08)
   VAR_6 |= VAR_11[VAR_12];
  else
   VAR_6 |= VAR_10[VAR_12];
 }
 FUNC_1(VAR_4, VAR_5, VAR_6);
}
