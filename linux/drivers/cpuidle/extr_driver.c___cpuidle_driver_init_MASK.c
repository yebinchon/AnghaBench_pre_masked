
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpumask {int dummy; } ;
struct cpuidle_driver {int state_count; int bctimer; TYPE_1__* states; struct cpumask* cpumask; scalar_t__ refcnt; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct cpuidle_driver *VAR_2)
{
 int VAR_3;

 VAR_2->refcnt = 0;






 if (!VAR_2->cpumask)
  VAR_2->cpumask = (struct cpumask *)VAR_1;






 for (VAR_3 = VAR_2->state_count - 1; VAR_3 >= 0 ; VAR_3--) {
  if (VAR_2->states[VAR_3].flags & VAR_0) {
   VAR_2->bctimer = 1;
   break;
  }
 }
}
