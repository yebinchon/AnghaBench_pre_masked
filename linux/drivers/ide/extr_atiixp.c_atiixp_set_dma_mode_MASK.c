
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
struct TYPE_7__ {int dn; int dma_mode; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_8__ {int recover_width; int command_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(ide_hwif_t *VAR_7, ide_drive_t *VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_6(VAR_7->dev);
 unsigned long VAR_10;
 int VAR_11 = (VAR_8->dn ^ 1) * 8;
 u32 VAR_12;
 u16 VAR_13;
 u16 VAR_14 = 0;
 const u8 VAR_15 = VAR_8->dma_mode;

 FUNC_4(&VAR_5, VAR_10);

 FUNC_1(VAR_9, VAR_1, &VAR_14);

 if (VAR_15 >= VAR_4) {
  FUNC_1(VAR_9, VAR_2, &VAR_13);
  VAR_13 &= ~(0x07 << (VAR_8->dn * 4));
  VAR_13 |= ((VAR_15 & 0x07) << (VAR_8->dn * 4));
  FUNC_3(VAR_9, VAR_2, VAR_13);

  VAR_14 |= (1 << VAR_8->dn);
 } else if (VAR_15 >= VAR_3) {
  u8 VAR_16 = VAR_15 & 0x03;

  FUNC_0(VAR_9, VAR_0, &VAR_12);
  VAR_12 &= ~(0xff << VAR_11);
  VAR_12 |= (VAR_6[VAR_16].recover_width << VAR_11) |
    (VAR_6[VAR_16].command_width << (VAR_11 + 4));
  FUNC_2(VAR_9, VAR_0, VAR_12);

  VAR_14 &= ~(1 << VAR_8->dn);
 }

 FUNC_3(VAR_9, VAR_1, VAR_14);

 FUNC_5(&VAR_5, VAR_10);
}
