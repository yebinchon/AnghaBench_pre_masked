
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int state_count; } ;
struct cpuidle_device {int dummy; } ;


 int FUNC_0 (struct cpuidle_device*,int) ;
 struct cpuidle_driver* FUNC_1 (struct cpuidle_device*) ;

__attribute__((used)) static void FUNC_2(struct cpuidle_device *VAR_0)
{
 struct cpuidle_driver *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->state_count; VAR_2++)
  FUNC_0(VAR_0, VAR_2);
}
