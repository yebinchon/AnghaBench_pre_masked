
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_wakeref_auto {struct intel_runtime_pm* rpm; scalar_t__ wakeref; int count; int timer; int lock; } ;
struct intel_runtime_pm {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;

void FUNC_3(struct intel_wakeref_auto *VAR_1,
        struct intel_runtime_pm *VAR_2)
{
 FUNC_1(&VAR_1->lock);
 FUNC_2(&VAR_1->timer, VAR_0, 0);
 FUNC_0(&VAR_1->count, 0);
 VAR_1->wakeref = 0;
 VAR_1->rpm = VAR_2;
}
