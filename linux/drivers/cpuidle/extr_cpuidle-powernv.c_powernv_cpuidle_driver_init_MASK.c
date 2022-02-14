
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpumask {int dummy; } ;
struct cpuidle_driver {size_t state_count; struct cpumask* cpumask; TYPE_1__* states; } ;
struct TYPE_2__ {int * enter; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 struct cpuidle_driver VAR_3 ;

__attribute__((used)) static int FUNC_0(void)
{
 int VAR_4;
 struct cpuidle_driver *VAR_5 = &VAR_3;

 VAR_5->state_count = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {

  if (VAR_1[VAR_4].enter == ((void*)0))
   continue;

  VAR_5->states[VAR_5->state_count] =
   VAR_1[VAR_4];

  VAR_5->state_count += 1;
 }
 VAR_5->cpumask = (struct cpumask *)VAR_0;

 return 0;
}
