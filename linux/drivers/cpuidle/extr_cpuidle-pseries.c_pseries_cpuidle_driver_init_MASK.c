
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_driver {size_t state_count; TYPE_1__* states; } ;
struct TYPE_2__ {int * enter; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 struct cpuidle_driver VAR_2 ;

__attribute__((used)) static int FUNC_0(void)
{
 int VAR_3;
 struct cpuidle_driver *VAR_4 = &VAR_2;

 VAR_4->state_count = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {

  if (VAR_0[VAR_3].enter == ((void*)0))
   continue;

  VAR_4->states[VAR_4->state_count] =
   VAR_0[VAR_3];

  VAR_4->state_count += 1;
 }

 return 0;
}
