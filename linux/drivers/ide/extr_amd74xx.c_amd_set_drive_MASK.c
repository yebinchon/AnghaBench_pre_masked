
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct ide_timing {int udma; } ;
struct TYPE_8__ {scalar_t__ ultra_mask; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_9__ {scalar_t__ dma_mode; scalar_t__ const pio_mode; int dn; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int ,scalar_t__,struct ide_timing*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__ const,struct ide_timing*,int,int) ;
 int FUNC_3 (struct ide_timing*,struct ide_timing*,struct ide_timing*,int ) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ide_hwif_t *VAR_5, ide_drive_t *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_4(VAR_5->dev);
 ide_drive_t *VAR_8 = FUNC_1(VAR_6);
 struct ide_timing VAR_9, VAR_10;
 int VAR_11, VAR_12;
 u8 VAR_13 = VAR_5->ultra_mask;
 const u8 VAR_14 = VAR_6->dma_mode;

 VAR_11 = 1000000000 / VAR_4;
 VAR_12 = (VAR_13 == VAR_0) ? VAR_11 : (VAR_11 / 2);

 FUNC_2(VAR_6, VAR_14, &VAR_9, VAR_11, VAR_12);

 if (VAR_8) {
  FUNC_2(VAR_8, VAR_8->pio_mode, &VAR_10, VAR_11, VAR_12);
  FUNC_3(&VAR_10, &VAR_9, &VAR_9, VAR_1);
 }

 if (VAR_14 == VAR_2 && VAR_4 <= 33333) VAR_9.udma = 1;
 if (VAR_14 == VAR_3 && VAR_4 <= 33333) VAR_9.udma = 15;

 FUNC_0(VAR_7, VAR_6->dn, VAR_13, &VAR_9);
}
