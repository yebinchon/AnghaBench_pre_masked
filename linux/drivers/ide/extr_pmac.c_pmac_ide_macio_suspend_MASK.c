
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int event; } ;
struct TYPE_6__ {TYPE_3__ power_state; } ;
struct TYPE_9__ {TYPE_1__ power; } ;
struct TYPE_7__ {TYPE_5__ dev; } ;
struct macio_dev {TYPE_2__ ofdev; } ;
typedef int pmac_ide_hwif_t ;
typedef TYPE_3__ pm_message_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct macio_dev *VAR_1, pm_message_t VAR_2)
{
 pmac_ide_hwif_t *VAR_3 = FUNC_0(&VAR_1->ofdev.dev);
 int VAR_4 = 0;

 if (VAR_2.event != VAR_1->ofdev.dev.power.power_state.event
   && (VAR_2.event & VAR_0)) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == 0)
   VAR_1->ofdev.dev.power.power_state = VAR_2;
 }

 return VAR_4;
}
