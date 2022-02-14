
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int dev; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int** VAR_4 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_5, const u8 VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_2(VAR_5->hwif->dev);
 u8 VAR_8 = 0x40 + VAR_5->dn * 2, VAR_9 = 0, VAR_10 = VAR_1;

 FUNC_0(VAR_7, VAR_8 + 1, &VAR_9);


 VAR_9 |= 0x80;

 VAR_9 &= ~((0xff >> (8 - VAR_3[VAR_10])) << VAR_2[VAR_10]);

 VAR_9 |= VAR_4[VAR_10][VAR_6 - VAR_0] << VAR_2[VAR_10];

 FUNC_1(VAR_7, VAR_8 + 1, VAR_9);
}
