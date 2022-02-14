
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct hpt_info {scalar_t__ chip_type; } ;
struct TYPE_4__ {int irq; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dev_flags; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct hpt_info* FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(ide_drive_t *VAR_2, int VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_2->hwif;
 struct pci_dev *VAR_5 = FUNC_5(VAR_4->dev);
 struct hpt_info *VAR_6 = FUNC_2(VAR_4->dev);

 if ((VAR_2->dev_flags & VAR_1) == 0)
  return;

 if (VAR_6->chip_type >= VAR_0) {
  u8 VAR_7 = 0;

  FUNC_3(VAR_5, 0x5a, &VAR_7);
  if (((VAR_7 & 0x10) >> 4) != VAR_3) {
   if (VAR_3)
    VAR_7 |= 0x10;
   else
    VAR_7 &= ~0x10;
   FUNC_4(VAR_5, 0x5a, VAR_7);
  }
 } else if (VAR_3)
  FUNC_0(VAR_4->irq);
 else
  FUNC_1(VAR_4->irq);
}
