
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int devfn; } ;
struct TYPE_3__ {int channel; struct TYPE_3__* mate; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int FUNC_0 (int ) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ide_hwif_t *VAR_0)
{
 static ide_hwif_t *VAR_1;
 struct pci_dev *VAR_2 = FUNC_1(VAR_0->dev);

 if (FUNC_0(VAR_2->devfn) == 1)
  VAR_1 = VAR_0;
 else {
  VAR_0->mate = VAR_1;
  VAR_0->channel = 1;
 }
}
