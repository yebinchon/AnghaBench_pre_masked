
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct abx500_temp {int monitored_sensors; scalar_t__* max; scalar_t__* min; int work_active; int work; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct abx500_temp*) ;

__attribute__((used)) static void FUNC_3(struct abx500_temp *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->monitored_sensors; VAR_1++)
  if (VAR_0->max[VAR_1] != 0 || VAR_0->min[VAR_1] != 0) {
   FUNC_2(VAR_0);
   return;
  }

 FUNC_1(&VAR_0->pdev->dev, "No active thresholds.\n");
 FUNC_0(&VAR_0->work);
 VAR_0->work_active = 0;
}
