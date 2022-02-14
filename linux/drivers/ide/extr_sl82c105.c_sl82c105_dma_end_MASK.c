
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_7__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct pci_dev*,int,unsigned long) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(ide_drive_t *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_3(VAR_0->hwif->dev);
 int VAR_2 = 0x44 + VAR_0->dn * 4;
 int VAR_3 = FUNC_0(VAR_0);

 FUNC_2(VAR_1, VAR_2,
         (unsigned long)FUNC_1(VAR_0));

 return VAR_3;
}
