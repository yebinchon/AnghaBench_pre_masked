
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_1(VAR_0->hwif->dev);

 FUNC_0(VAR_1);
}
