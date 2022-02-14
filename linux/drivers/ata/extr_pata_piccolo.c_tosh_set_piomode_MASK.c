
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {size_t pio_mode; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 static const u16 VAR_3[6] = {
  0x0566, 0x0433, 0x0311, 0x0201, 0x0200, 0x0100
 };
 struct pci_dev *VAR_4 = FUNC_2(VAR_1->host->dev);
 u16 VAR_5;
 FUNC_0(VAR_4, 0x50, &VAR_5);
 VAR_5 &= 0xE088;
 VAR_5 |= VAR_3[VAR_2->pio_mode - VAR_0];
 FUNC_1(VAR_4, 0x50, VAR_5);
}
