
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {scalar_t__ enabled; } ;
struct TYPE_2__ {int (* disable ) (struct cpuidle_driver*,struct cpuidle_device*) ;} ;


 TYPE_1__* VAR_0 ;
 struct cpuidle_driver* FUNC_0 (struct cpuidle_device*) ;
 int FUNC_1 (struct cpuidle_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct cpuidle_driver*,struct cpuidle_device*) ;

void FUNC_3(struct cpuidle_device *VAR_2)
{
 struct cpuidle_driver *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_2 || !VAR_2->enabled)
  return;

 if (!VAR_3 || !VAR_0)
  return;

 VAR_2->enabled = 0;

 if (VAR_0->disable)
  VAR_0->disable(VAR_3, VAR_2);

 FUNC_1(VAR_2);
 VAR_1--;
}
