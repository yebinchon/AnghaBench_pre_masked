
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int pio_mode; size_t dn; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int const,int const) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ide_hwif_t *VAR_1, ide_drive_t *VAR_2)
{
 static const u8 VAR_3[] = { 0x5d, 0x47, 0x34, 0x22, 0x20 };
 static const u8 VAR_4[] = { 0x41, 0x40, 0x43, 0x42 };

 struct pci_dev *VAR_5 = FUNC_4(VAR_1->dev);
 const u8 VAR_6 = VAR_2->pio_mode - VAR_0;

 FUNC_1(VAR_5, VAR_4[VAR_2->dn], VAR_3[VAR_6]);

 if (FUNC_3(VAR_5)) {
  u16 VAR_7 = 0;

  FUNC_0(VAR_5, 0x4a, &VAR_7);

  VAR_7 &= ~(0x0f << (4 * VAR_2->dn));
  VAR_7 |= (VAR_6 << (4 * VAR_2->dn));

  FUNC_2(VAR_5, 0x4a, VAR_7);
 }
}
