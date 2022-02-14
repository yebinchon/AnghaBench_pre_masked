
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {struct cpuidle_coupled* coupled; int coupled_cpus; } ;
struct cpuidle_coupled {scalar_t__ refcnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct cpuidle_coupled*) ;

void FUNC_2(struct cpuidle_device *VAR_0)
{
 struct cpuidle_coupled *VAR_1 = VAR_0->coupled;

 if (FUNC_0(&VAR_0->coupled_cpus))
  return;

 if (--VAR_1->refcnt)
  FUNC_1(VAR_1);
 VAR_0->coupled = ((void*)0);
}
