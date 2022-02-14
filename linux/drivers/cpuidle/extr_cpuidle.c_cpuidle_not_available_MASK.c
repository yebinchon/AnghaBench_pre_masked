
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_0(struct cpuidle_driver *VAR_2,
      struct cpuidle_device *VAR_3)
{
 return VAR_1 || !VAR_0 || !VAR_2 || !VAR_3 || !VAR_3->enabled;
}
