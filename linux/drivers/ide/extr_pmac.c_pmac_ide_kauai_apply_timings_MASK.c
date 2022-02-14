
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * timings; } ;
typedef TYPE_2__ pmac_ide_hwif_t ;
struct TYPE_7__ {int parent; } ;
struct TYPE_9__ {TYPE_1__ gendev; } ;
typedef TYPE_3__ ide_hwif_t ;
struct TYPE_10__ {int dn; TYPE_3__* hwif; } ;
typedef TYPE_4__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_2->hwif;
 pmac_ide_hwif_t *VAR_4 = FUNC_1(VAR_3->gendev.parent);

 if (VAR_2->dn & 1) {
  FUNC_3(VAR_4->timings[1], FUNC_0(VAR_0));
  FUNC_3(VAR_4->timings[3], FUNC_0(VAR_1));
 } else {
  FUNC_3(VAR_4->timings[0], FUNC_0(VAR_0));
  FUNC_3(VAR_4->timings[2], FUNC_0(VAR_1));
 }
 (void)FUNC_2(FUNC_0(VAR_0));
}
