
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int const) ;
 int FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct ata_port*,struct ata_device*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_1->host->dev);
 int VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = VAR_2->pio_mode - VAR_0;

 static const u8 VAR_6[] = { 0x00, 0x67, 0x44, 0x33, 0x31 };

 FUNC_2(VAR_1, VAR_2);

 FUNC_0(VAR_3, VAR_4, VAR_6[VAR_5]);
}
