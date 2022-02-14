
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int dma_mode; scalar_t__ devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ata_device*,int const) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_7, struct ata_device *VAR_8)
{
 static const u8 VAR_9[6] = {
  0xc2, 0xc1, 0xc0, 0xc4, 0xc5, 0xc6,
 };

 static const u8 VAR_10[3] = {
  0x67, 0x21, 0x20,
 };

 struct pci_dev *VAR_11 = FUNC_3(VAR_7->host->dev);
 u32 VAR_12;
 int VAR_13 = VAR_8->dma_mode;
 int VAR_14 = VAR_8->devno ? VAR_2 : VAR_1;

 FUNC_1(VAR_11, VAR_0, &VAR_12);

 if (VAR_13 >= VAR_6) {
  VAR_12 &= ~(VAR_3 << VAR_14);
  VAR_12 |= VAR_9[VAR_13 - VAR_6] << VAR_14;
 } else {
  VAR_12 &= ~(VAR_4 << VAR_14);
  FUNC_0(VAR_8, VAR_10[VAR_13 - VAR_5]);
 }

 FUNC_2(VAR_11, VAR_0, VAR_12);
}
