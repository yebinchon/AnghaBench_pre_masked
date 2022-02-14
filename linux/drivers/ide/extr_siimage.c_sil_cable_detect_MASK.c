
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct pci_dev*,unsigned long) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static u8 FUNC_3(ide_hwif_t *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_2->dev);
 unsigned long VAR_4 = FUNC_0(VAR_2, 0);
 u8 VAR_5 = FUNC_1(VAR_3, VAR_4);

 return (VAR_5 & 0x01) ? VAR_1 : VAR_0;
}
