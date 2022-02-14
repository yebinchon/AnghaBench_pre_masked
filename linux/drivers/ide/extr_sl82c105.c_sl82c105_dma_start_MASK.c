
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct pci_dev*,int,unsigned long) ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ide_drive_t *VAR_0)
{
 ide_hwif_t *VAR_1 = VAR_0->hwif;
 struct pci_dev *VAR_2 = FUNC_4(VAR_1->dev);
 int VAR_3 = 0x44 + VAR_0->dn * 4;

 FUNC_2(VAR_2, VAR_3,
         (unsigned long)FUNC_1(VAR_0) >> 16);

 FUNC_3(VAR_2);
 FUNC_0(VAR_0);
}
