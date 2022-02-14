
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {int dn; size_t pio_mode; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_8__ {int recovery; int assert; } ;


 size_t VAR_0 ;
 TYPE_5__* VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ide_hwif_t *VAR_2, ide_drive_t *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_2->dev);
 int VAR_5 = VAR_3->dn > 1 ? 1 : 0;
 const u8 VAR_6 = VAR_3->pio_mode - VAR_0;


 FUNC_0(VAR_4, 0x62 + VAR_5,
  (VAR_1[VAR_6].recovery << 4) |
  (VAR_1[VAR_6].assert));





 FUNC_0(VAR_4, 0x64 + 4*VAR_5 + (VAR_3->dn&1),
  (VAR_1[VAR_6].recovery << 4) |
  (VAR_1[VAR_6].assert));

 FUNC_0(VAR_4, 0x66 + 4*VAR_5 + (VAR_3->dn&1),
  (VAR_1[VAR_6].recovery << 4) |
  (VAR_1[VAR_6].assert));
}
