
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_driver {int state_count; TYPE_1__* states; } ;
struct cpuidle_device {int dummy; } ;
struct TYPE_2__ {int (* enter_dead ) (struct cpuidle_device*,int) ;} ;


 int VAR_0 ;
 struct cpuidle_device* FUNC_0 (int ) ;
 int VAR_1 ;
 struct cpuidle_driver* FUNC_1 (struct cpuidle_device*) ;
 int FUNC_2 (struct cpuidle_device*,int) ;

int FUNC_3(void)
{
 struct cpuidle_device *VAR_2 = FUNC_0(VAR_1);
 struct cpuidle_driver *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (!VAR_3)
  return -VAR_0;


 for (VAR_4 = VAR_3->state_count - 1; VAR_4 >= 0; VAR_4--)
  if (VAR_3->states[VAR_4].enter_dead)
   return VAR_3->states[VAR_4].enter_dead(VAR_2, VAR_4);

 return -VAR_0;
}
