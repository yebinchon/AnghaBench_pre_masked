
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct it821x_dev {scalar_t__* mwdma; scalar_t__* udma; scalar_t__ timing10; } ;
typedef int ide_hwif_t ;
struct TYPE_6__ {int dn; int * hwif; } ;
typedef TYPE_1__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 struct it821x_dev* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_2->hwif;
 struct it821x_dev *VAR_4 = FUNC_1(VAR_3);
 u8 VAR_5 = VAR_2->dn & 1;

 if(VAR_4->mwdma[VAR_5] != VAR_0)
  FUNC_2(VAR_2, VAR_4->mwdma[VAR_5]);
 else if(VAR_4->udma[VAR_5] != VAR_1 && VAR_4->timing10)
  FUNC_3(VAR_2, VAR_4->udma[VAR_5]);
 FUNC_0(VAR_2);
}
