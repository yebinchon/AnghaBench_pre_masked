
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int select_data; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_0)
{
 ide_hwif_t *VAR_1 = VAR_0->hwif;
 struct pci_dev *VAR_2 = FUNC_1(VAR_1->dev);

 FUNC_0(VAR_2, VAR_1->select_data, 0x37);
 FUNC_2(10);
}
