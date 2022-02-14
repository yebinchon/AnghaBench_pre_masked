
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int select_data; scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(ide_drive_t *VAR_0)
{
 ide_hwif_t *VAR_1 = VAR_0->hwif;
 struct pci_dev *VAR_2 = FUNC_3(VAR_1->dev);
 u8 VAR_3 = 0, VAR_4 = VAR_1->select_data;
 u8 VAR_5 = 0, VAR_6 = VAR_1->channel ? 0x02 : 0x01;

 FUNC_1(VAR_2, 0x6a, &VAR_5);
 FUNC_1(VAR_2, VAR_4, &VAR_3);
 if (VAR_5 & VAR_6)
  FUNC_2(VAR_2, VAR_4, VAR_3 | 0x30);
 return FUNC_0(VAR_0);
}
