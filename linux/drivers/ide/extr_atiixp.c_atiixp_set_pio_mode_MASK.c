
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {int dn; int pio_mode; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_8__ {int recover_width; int command_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(ide_hwif_t *VAR_5, ide_drive_t *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_6(VAR_5->dev);
 unsigned long VAR_8;
 int VAR_9 = (VAR_6->dn ^ 1) * 8;
 u32 VAR_10;
 u16 VAR_11;
 const u8 VAR_12 = VAR_6->pio_mode - VAR_2;

 FUNC_4(&VAR_3, VAR_8);

 FUNC_1(VAR_7, VAR_0, &VAR_11);
 VAR_11 &= ~(0x07 << (VAR_6->dn * 4));
 VAR_11 |= (VAR_12 << (VAR_6->dn * 4));
 FUNC_3(VAR_7, VAR_0, VAR_11);

 FUNC_0(VAR_7, VAR_1, &VAR_10);
 VAR_10 &= ~(0xff << VAR_9);
 VAR_10 |= (VAR_4[VAR_12].recover_width << VAR_9) |
   (VAR_4[VAR_12].command_width << (VAR_9 + 4));
 FUNC_2(VAR_7, VAR_1, VAR_10);

 FUNC_5(&VAR_3, VAR_8);
}
