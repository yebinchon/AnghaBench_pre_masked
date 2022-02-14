
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {int pio_mode; int dn; scalar_t__ media; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int const) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(ide_hwif_t *VAR_2, ide_drive_t *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_5(VAR_2->dev);
 u16 VAR_5;
 u32 VAR_6;
 const u8 VAR_7 = VAR_3->pio_mode - VAR_0;







 static const u8 VAR_8[] = { 0x3f, 0x3c, 0x1b, 0x12, 0x0a };

 FUNC_2(VAR_4, 0x40, &VAR_5);
 FUNC_1(VAR_4, 0x44, &VAR_6);






 VAR_5 |= 0x4000;

 VAR_5 &= VAR_3->dn ? 0xc006 : 0xc060;
 if (VAR_3->media == VAR_1)

  VAR_5 |= 0x0004 << (VAR_3->dn * 4);
 if (FUNC_0(VAR_3, VAR_7))

  VAR_5 |= 0x0002 << (VAR_3->dn * 4);

 VAR_6 &= VAR_3->dn ? 0x00003f00 : 0x000fc000;
 VAR_6 |= VAR_8[VAR_7] << (VAR_3->dn * 6 + 8);

 FUNC_4(VAR_4, 0x40, VAR_5);
 FUNC_3(VAR_4, 0x44, VAR_6);
}
