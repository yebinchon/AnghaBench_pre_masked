
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_9__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_10__ {int dn; int dma_mode; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_12__ {int reg0e; int reg0f; } ;
struct TYPE_11__ {int reg10; int reg11; int reg12; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct pci_dev*) ;
 TYPE_7__* VAR_2 ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static void FUNC_4(ide_hwif_t *VAR_4, ide_drive_t *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_3(VAR_4->dev);
 u8 VAR_7 = (VAR_5->dn & 1) ? 0x08 : 0x00;
 const u8 VAR_8 = VAR_5->dma_mode;
 if (FUNC_1(VAR_6) == 4) {
  u8 VAR_9 = VAR_8 & 0x07;

  if (VAR_8 >= VAR_0) {
   FUNC_2(VAR_4, 0x10 + VAR_7,
     VAR_3[VAR_9].reg10);
   FUNC_2(VAR_4, 0x11 + VAR_7,
     VAR_3[VAR_9].reg11);
   FUNC_2(VAR_4, 0x12 + VAR_7,
     VAR_3[VAR_9].reg12);
  } else {
   FUNC_2(VAR_4, 0x0e + VAR_7,
     VAR_2[VAR_9].reg0e);
   FUNC_2(VAR_4, 0x0f + VAR_7,
     VAR_2[VAR_9].reg0f);
  }
 } else if (VAR_8 == VAR_1) {

  u8 VAR_10 = FUNC_0(VAR_4, 0x10 + VAR_7);

  FUNC_2(VAR_4, 0x10 + VAR_7, VAR_10 & 0x7f);
  }
}
