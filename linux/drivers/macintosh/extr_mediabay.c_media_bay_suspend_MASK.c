
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct media_bay_info {int sleeping; int lock; } ;
struct TYPE_9__ {int event; } ;
struct TYPE_6__ {TYPE_4__ power_state; } ;
struct TYPE_7__ {TYPE_1__ power; } ;
struct TYPE_8__ {TYPE_2__ dev; } ;
struct macio_dev {TYPE_3__ ofdev; } ;
typedef TYPE_4__ pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct media_bay_info* FUNC_0 (struct macio_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct media_bay_info*,int ) ;

__attribute__((used)) static int FUNC_5(struct macio_dev *VAR_2, pm_message_t VAR_3)
{
 struct media_bay_info *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3.event != VAR_2->ofdev.dev.power.power_state.event
     && (VAR_3.event & VAR_1)) {
  FUNC_2(&VAR_4->lock);
  VAR_4->sleeping = 1;
  FUNC_4(VAR_4, 0);
  FUNC_3(&VAR_4->lock);
  FUNC_1(VAR_0);
  VAR_2->ofdev.dev.power.power_state = VAR_3;
 }
 return 0;
}
