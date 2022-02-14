
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


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->host->dev);
 u32 VAR_5;
 FUNC_0(VAR_4, 0x5C, &VAR_5);
 VAR_5 &= 0x78FFE088;
 if (VAR_3->dma_mode >= VAR_1) {
  int VAR_6 = VAR_3->dma_mode - VAR_1;
  VAR_5 |= 0x80000000;
  VAR_5 |= (VAR_6 + 2) << 28;
  VAR_5 |= (2 - VAR_6) * 0x111;
 } else {
  static const u32 VAR_7[4] = {
   0x0655, 0x0200, 0x0200, 0x0100
  };
  VAR_5 |= VAR_7[VAR_3->dma_mode - VAR_0];
 }
 FUNC_1(VAR_4, 0x5C, VAR_5);
}
