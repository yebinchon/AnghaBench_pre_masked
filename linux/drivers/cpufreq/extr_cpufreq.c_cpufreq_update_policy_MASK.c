
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
struct TYPE_2__ {scalar_t__ get; } ;


 scalar_t__ FUNC_0 (int) ;
 struct cpufreq_policy* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct cpufreq_policy*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct cpufreq_policy*) ;

void FUNC_6(unsigned int VAR_2)
{
 struct cpufreq_policy *VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3)
  return;





 if (VAR_0->get && FUNC_4() &&
     (VAR_1 || FUNC_0(!FUNC_3(VAR_3, 0))))
  goto unlock;

 FUNC_5(VAR_3);

unlock:
 FUNC_2(VAR_3);
}
