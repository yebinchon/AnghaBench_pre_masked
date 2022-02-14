
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_dbs_tuners {int freq_step; } ;
struct cpufreq_policy {int max; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct cs_dbs_tuners *VAR_1,
      struct cpufreq_policy *VAR_2)
{
 unsigned int VAR_3 = (VAR_1->freq_step * VAR_2->max) / 100;


 if (FUNC_0(VAR_3 == 0))
  VAR_3 = VAR_0;

 return VAR_3;
}
