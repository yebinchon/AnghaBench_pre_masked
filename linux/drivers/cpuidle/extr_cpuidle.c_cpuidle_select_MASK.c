
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;
struct TYPE_2__ {int (* select ) (struct cpuidle_driver*,struct cpuidle_device*,int*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct cpuidle_driver*,struct cpuidle_device*,int*) ;

int FUNC_1(struct cpuidle_driver *VAR_1, struct cpuidle_device *VAR_2,
     bool *VAR_3)
{
 return VAR_0->select(VAR_1, VAR_2, VAR_3);
}
