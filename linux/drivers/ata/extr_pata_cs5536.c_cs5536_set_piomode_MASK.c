
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int pio_mode; scalar_t__ devno; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ata_device* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,int const) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_7, struct ata_device *VAR_8)
{
 static const u8 VAR_9[5] = {
  0x98, 0x55, 0x32, 0x21, 0x20,
 };

 static const u8 VAR_10[5] = {
  0x2, 0x1, 0x0, 0x0, 0x0,
 };

 static const u8 VAR_11[5] = {
  0x99, 0x92, 0x90, 0x22, 0x20,
 };

 struct pci_dev *VAR_12 = FUNC_5(VAR_7->host->dev);
 struct ata_device *VAR_13 = FUNC_0(VAR_8);
 int VAR_14 = VAR_8->pio_mode - VAR_6;
 int VAR_15 = VAR_14;
 int VAR_16 = VAR_8->devno ? VAR_4 : VAR_3;
 u32 VAR_17;

 if (VAR_13)
  VAR_15 = FUNC_4(VAR_14, VAR_13->pio_mode - VAR_6);

 FUNC_1(VAR_8, VAR_9[VAR_14]);

 FUNC_2(VAR_12, VAR_0, &VAR_17);

 VAR_17 &= ~(VAR_5 << VAR_16);
 VAR_17 |= VAR_10[VAR_14] << VAR_16;

 VAR_17 &= ~(VAR_1 << VAR_2);
 VAR_17 |= VAR_11[VAR_15] << VAR_2;

 FUNC_3(VAR_12, VAR_0, VAR_17);
}
