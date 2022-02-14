
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {unsigned int cur; int update; scalar_t__ fast_switch_enabled; int cpu; } ;
struct TYPE_2__ {unsigned int (* get ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct cpufreq_policy *VAR_1, bool VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_0->get(VAR_1->cpu);
 if (!VAR_3)
  return 0;





 if (VAR_1->fast_switch_enabled || !FUNC_1())
  return VAR_3;

 if (VAR_1->cur != VAR_3) {
  FUNC_0(VAR_1, VAR_3);
  if (VAR_2)
   FUNC_2(&VAR_1->update);
 }

 return VAR_3;
}
