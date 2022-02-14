
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dn; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_hwif_t *VAR_0, ide_drive_t *VAR_1, int VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_0->dev);
 int VAR_4 = 0x54 + VAR_0->channel;
 u8 VAR_5;
 int VAR_6 = 4 * (VAR_1->dn & 1);

 FUNC_0(VAR_3, VAR_4, &VAR_5);
 VAR_5 &= ~(0x0F << VAR_6);
 VAR_5 |= (VAR_2 << VAR_6);
 FUNC_1(VAR_3, VAR_4, VAR_5);
}
