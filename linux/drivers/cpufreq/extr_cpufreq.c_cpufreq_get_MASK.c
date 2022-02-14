
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int rwsem; } ;
struct TYPE_2__ {scalar_t__ get; } ;


 unsigned int FUNC_0 (struct cpufreq_policy*) ;
 struct cpufreq_policy* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

unsigned int FUNC_5(unsigned int VAR_1)
{
 struct cpufreq_policy *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3 = 0;

 if (VAR_2) {
  FUNC_3(&VAR_2->rwsem);
  if (VAR_0->get)
   VAR_3 = FUNC_0(VAR_2);
  FUNC_4(&VAR_2->rwsem);

  FUNC_2(VAR_2);
 }

 return VAR_3;
}
