
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ide_timing {int dummy; } ;
struct TYPE_10__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_11__ {int dma_mode; int pio_mode; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,struct ide_timing*,int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int,struct ide_timing*,unsigned long,int) ;
 int FUNC_3 (struct ide_timing*,struct ide_timing*,struct ide_timing*,int) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(ide_hwif_t *VAR_5, ide_drive_t *VAR_6)
{
 static u8 VAR_7[7] = { 0xC, 0xB, 0xA, 0x9, 0x8, 0xF, 0xD };
 struct pci_dev *VAR_8 = FUNC_6(VAR_5->dev);
 ide_drive_t *VAR_9 = FUNC_1(VAR_6);
 int VAR_10 = VAR_4 ? VAR_4 : 33;
 unsigned long VAR_11 = 1000000 / VAR_10;
 const u8 VAR_12 = VAR_6->dma_mode;
 u8 VAR_13 = 0x00;
 struct ide_timing VAR_14;

 if (VAR_12 < VAR_2) {
  FUNC_2(VAR_6, VAR_6->dma_mode, &VAR_14, VAR_11, 1);
  if (VAR_9) {
   struct ide_timing VAR_15;

   FUNC_2(VAR_9, VAR_9->pio_mode, &VAR_15, VAR_11, 1);
   FUNC_3(&VAR_15, &VAR_14, &VAR_14,
    VAR_1 | VAR_0);
   if (VAR_9->dma_mode) {
    FUNC_2(VAR_9, VAR_9->dma_mode,
      &VAR_15, VAR_11, 1);
    FUNC_3(&VAR_15, &VAR_14, &VAR_14,
     VAR_1 | VAR_0);
   }
  }
  FUNC_0(VAR_5, VAR_6, &VAR_14, 0);
 } else {
  FUNC_0(VAR_5, VAR_6, ((void*)0),
    VAR_7[VAR_12 - VAR_2]);
  if (VAR_12 >= VAR_3) {
   FUNC_4(VAR_8, 0x4b, &VAR_13);
   VAR_13 |= 1;
   FUNC_5(VAR_8, 0x4b, VAR_13);
  }
 }
}
