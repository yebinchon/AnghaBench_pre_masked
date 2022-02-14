
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_7__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_8__ {int dn; scalar_t__ dma_mode; scalar_t__ pio_mode; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_hwif_t *VAR_4, ide_drive_t *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_3(VAR_4->dev);
 u8 VAR_7 = VAR_4->channel ? 0x42 : 0x40;
 int VAR_8 = 0, VAR_9 = 7 << (VAR_5->dn * 4);
 int VAR_10 = 0, VAR_11 = 1 << VAR_5->dn;
 u16 VAR_12, VAR_13, VAR_14, VAR_15;
 const u8 VAR_16 = VAR_5->dma_mode;

 FUNC_0(VAR_6, VAR_7, &VAR_12);
 VAR_8 = (VAR_12 & 0x4000) ? 1 : 0;
 FUNC_0(VAR_6, 0x44, &VAR_13);
 FUNC_0(VAR_6, 0x48, &VAR_14);
 FUNC_0(VAR_6, 0x4a, &VAR_15);

 if (VAR_16 >= VAR_3) {
  VAR_10 = (VAR_16 - VAR_3) << (VAR_5->dn * 4);

  if (!(VAR_14 & VAR_11))
   FUNC_1(VAR_6, 0x48, VAR_14|VAR_11);
  if ((VAR_15 & VAR_9) != VAR_10) {
   FUNC_1(VAR_6, 0x4a, VAR_15 & ~VAR_9);
   FUNC_0(VAR_6, 0x4a, &VAR_15);
   FUNC_1(VAR_6, 0x4a, VAR_15|VAR_10);
  }
 } else {
  const u8 VAR_17[] = { 0, 3, 4 };

  if (VAR_14 & VAR_11)
   FUNC_1(VAR_6, 0x48, VAR_14 & ~VAR_11);
  if (VAR_15 & VAR_9)
   FUNC_1(VAR_6, 0x4a, VAR_15 & ~VAR_9);

  if (VAR_16 >= VAR_0)
   VAR_5->pio_mode =
    VAR_17[VAR_16 - VAR_0] + VAR_1;
  else
   VAR_5->pio_mode = VAR_2;

  FUNC_2(VAR_4, VAR_5);
 }
}
