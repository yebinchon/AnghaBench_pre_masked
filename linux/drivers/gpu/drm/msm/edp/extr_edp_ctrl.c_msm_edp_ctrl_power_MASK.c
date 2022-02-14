
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edp_ctrl {int off_work; int workqueue; int on_work; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct edp_ctrl *VAR_0, bool VAR_1)
{
 if (VAR_1)
  FUNC_0(VAR_0->workqueue, &VAR_0->on_work);
 else
  FUNC_0(VAR_0->workqueue, &VAR_0->off_work);
}
