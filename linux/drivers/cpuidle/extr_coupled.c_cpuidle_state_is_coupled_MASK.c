
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_driver {TYPE_1__* states; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;

bool FUNC_0(struct cpuidle_driver *VAR_1, int VAR_2)
{
 return VAR_1->states[VAR_2].flags & VAR_0;
}
