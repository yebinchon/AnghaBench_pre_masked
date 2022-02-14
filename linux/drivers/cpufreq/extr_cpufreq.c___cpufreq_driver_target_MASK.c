
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {unsigned int cur; unsigned int restore_freq; int cpu; int max; int min; } ;
struct TYPE_2__ {int (* target ) (struct cpufreq_policy*,unsigned int,unsigned int) ;int target_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,int) ;
 unsigned int FUNC_1 (unsigned int,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct cpufreq_policy*,unsigned int,unsigned int) ;
 int FUNC_4 (char*,int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (struct cpufreq_policy*,unsigned int,unsigned int) ;

int FUNC_6(struct cpufreq_policy *VAR_3,
       unsigned int VAR_4,
       unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_4;
 int VAR_7;

 if (FUNC_2())
  return -VAR_1;


 VAR_4 = FUNC_1(VAR_4, VAR_3->min, VAR_3->max);

 FUNC_4("target for CPU %u: %u kHz, relation %u, requested %u kHz\n",
   VAR_3->cpu, VAR_4, VAR_5, VAR_6);







 if (VAR_4 == VAR_3->cur)
  return 0;


 VAR_3->restore_freq = VAR_3->cur;

 if (VAR_2->target)
  return VAR_2->target(VAR_3, VAR_4, VAR_5);

 if (!VAR_2->target_index)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);

 return FUNC_0(VAR_3, VAR_7);
}
