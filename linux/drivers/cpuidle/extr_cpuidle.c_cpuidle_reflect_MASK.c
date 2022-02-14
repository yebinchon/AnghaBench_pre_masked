
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_device {int dummy; } ;
struct TYPE_2__ {int (* reflect ) (struct cpuidle_device*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct cpuidle_device*,int) ;

void FUNC_1(struct cpuidle_device *VAR_1, int VAR_2)
{
 if (VAR_0->reflect && VAR_2 >= 0)
  VAR_0->reflect(VAR_1, VAR_2);
}
