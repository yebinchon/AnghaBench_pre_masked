
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_dbs_info {struct dbs_data* dbs_data; } ;
struct od_policy_dbs_info {unsigned int freq_lo; unsigned int freq_lo_delay_us; unsigned int freq_hi_delay_us; } ;
struct od_dbs_tuners {unsigned int powersave_bias; } ;
struct dbs_data {unsigned int sampling_rate; struct od_dbs_tuners* tuners; } ;
struct cpufreq_policy {struct cpufreq_frequency_table* freq_table; struct policy_dbs_info* governor_data; } ;
struct cpufreq_frequency_table {unsigned int frequency; } ;


 unsigned int FUNC_0 (struct cpufreq_policy*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct cpufreq_policy*,unsigned int) ;
 unsigned int FUNC_2 (struct cpufreq_policy*,unsigned int) ;
 struct od_policy_dbs_info* FUNC_3 (struct policy_dbs_info*) ;

__attribute__((used)) static unsigned int FUNC_4(struct cpufreq_policy *VAR_0,
  unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 struct policy_dbs_info *VAR_10 = VAR_0->governor_data;
 struct od_policy_dbs_info *VAR_11 = FUNC_3(VAR_10);
 struct dbs_data *VAR_12 = VAR_10->dbs_data;
 struct od_dbs_tuners *VAR_13 = VAR_12->tuners;
 struct cpufreq_frequency_table *VAR_14 = VAR_0->freq_table;

 if (!VAR_14) {
  VAR_11->freq_lo = 0;
  VAR_11->freq_lo_delay_us = 0;
  return VAR_1;
 }

 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_3 = VAR_14[VAR_8].frequency;
 VAR_4 = VAR_3 * VAR_13->powersave_bias / 1000;
 VAR_5 = VAR_3 - VAR_4;


 VAR_8 = FUNC_1(VAR_0, VAR_5);
 VAR_7 = VAR_14[VAR_8].frequency;
 VAR_8 = FUNC_2(VAR_0, VAR_5);
 VAR_6 = VAR_14[VAR_8].frequency;


 if (VAR_6 == VAR_7) {
  VAR_11->freq_lo = 0;
  VAR_11->freq_lo_delay_us = 0;
  return VAR_7;
 }
 VAR_9 = (VAR_5 - VAR_7) * VAR_12->sampling_rate;
 VAR_9 += (VAR_6 - VAR_7) / 2;
 VAR_9 /= VAR_6 - VAR_7;
 VAR_11->freq_hi_delay_us = VAR_9;
 VAR_11->freq_lo = VAR_7;
 VAR_11->freq_lo_delay_us = VAR_12->sampling_rate - VAR_9;
 return VAR_6;
}
