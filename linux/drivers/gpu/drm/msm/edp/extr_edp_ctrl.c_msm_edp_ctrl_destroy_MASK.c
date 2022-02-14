
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edp_ctrl {int dev_mutex; int * edid; int * aux; TYPE_1__* pdev; int * workqueue; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct edp_ctrl *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->workqueue) {
  FUNC_1(VAR_0->workqueue);
  FUNC_0(VAR_0->workqueue);
  VAR_0->workqueue = ((void*)0);
 }

 if (VAR_0->aux) {
  FUNC_3(&VAR_0->pdev->dev, VAR_0->aux);
  VAR_0->aux = ((void*)0);
 }

 FUNC_2(VAR_0->edid);
 VAR_0->edid = ((void*)0);

 FUNC_4(&VAR_0->dev_mutex);
}
