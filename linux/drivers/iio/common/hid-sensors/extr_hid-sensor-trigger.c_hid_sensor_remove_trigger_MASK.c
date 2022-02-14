
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_sensor_common {int trigger; int work; TYPE_1__* pdev; int runtime_pm_enable; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct hid_sensor_common *VAR_0)
{
 if (FUNC_0(&VAR_0->runtime_pm_enable))
  FUNC_4(&VAR_0->pdev->dev);

 FUNC_6(&VAR_0->pdev->dev);
 FUNC_5(&VAR_0->pdev->dev);

 FUNC_1(&VAR_0->work);
 FUNC_3(VAR_0->trigger);
 FUNC_2(VAR_0->trigger);
}
