
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* mdev; } ;
typedef TYPE_3__ pmac_ide_hwif_t ;
struct TYPE_9__ {int parent; } ;
struct TYPE_12__ {TYPE_1__ gendev; } ;
typedef TYPE_4__ ide_hwif_t ;
struct TYPE_13__ {int dev_flags; TYPE_4__* hwif; } ;
typedef TYPE_5__ ide_drive_t ;
struct TYPE_10__ {int media_bay; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_2->hwif;
 pmac_ide_hwif_t *VAR_4 = FUNC_1(VAR_3->gendev.parent);

 if (FUNC_2(VAR_4)) {
  if (FUNC_0(VAR_4->mdev->media_bay) == VAR_1) {
   VAR_2->dev_flags &= ~VAR_0;
   return;
  }
  VAR_2->dev_flags |= VAR_0;
 }
}
