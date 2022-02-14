
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {unsigned int cached_target_freq; int cached_resolved_idx; TYPE_1__* freq_table; int max; int min; } ;
struct TYPE_4__ {unsigned int (* resolve_freq ) (struct cpufreq_policy*,unsigned int) ;scalar_t__ target_index; } ;
struct TYPE_3__ {unsigned int frequency; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct cpufreq_policy*,unsigned int,int ) ;
 unsigned int FUNC_2 (struct cpufreq_policy*,unsigned int) ;

unsigned int FUNC_3(struct cpufreq_policy *VAR_2,
      unsigned int VAR_3)
{
 VAR_3 = FUNC_0(VAR_3, VAR_2->min, VAR_2->max);
 VAR_2->cached_target_freq = VAR_3;

 if (VAR_1->target_index) {
  int VAR_4;

  VAR_4 = FUNC_1(VAR_2, VAR_3,
           VAR_0);
  VAR_2->cached_resolved_idx = VAR_4;
  return VAR_2->freq_table[VAR_4].frequency;
 }

 if (VAR_1->resolve_freq)
  return VAR_1->resolve_freq(VAR_2, VAR_3);

 return VAR_3;
}
