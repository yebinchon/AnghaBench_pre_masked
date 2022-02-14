
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_dbs_info {unsigned int idle_periods; struct dbs_data* dbs_data; } ;
struct dbs_data {unsigned int up_threshold; scalar_t__ sampling_down_factor; unsigned int sampling_rate; struct cs_dbs_tuners* tuners; } ;
struct cs_policy_dbs_info {unsigned int requested_freq; scalar_t__ down_skip; } ;
struct cs_dbs_tuners {scalar_t__ freq_step; unsigned int down_threshold; } ;
struct cpufreq_policy {unsigned int max; unsigned int min; unsigned int cur; struct policy_dbs_info* governor_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct cpufreq_policy*,unsigned int,int ) ;
 unsigned int FUNC_1 (struct cpufreq_policy*) ;
 unsigned int FUNC_2 (struct cs_dbs_tuners*,struct cpufreq_policy*) ;
 struct cs_policy_dbs_info* FUNC_3 (struct policy_dbs_info*) ;

__attribute__((used)) static unsigned int FUNC_4(struct cpufreq_policy *VAR_3)
{
 struct policy_dbs_info *VAR_4 = VAR_3->governor_data;
 struct cs_policy_dbs_info *VAR_5 = FUNC_3(VAR_4);
 unsigned int VAR_6 = VAR_5->requested_freq;
 struct dbs_data *VAR_7 = VAR_4->dbs_data;
 struct cs_dbs_tuners *VAR_8 = VAR_7->tuners;
 unsigned int VAR_9 = FUNC_1(VAR_3);
 unsigned int VAR_10;





 if (VAR_8->freq_step == 0)
  goto out;






 if (VAR_6 > VAR_3->max || VAR_6 < VAR_3->min) {
  VAR_6 = VAR_3->cur;
  VAR_5->requested_freq = VAR_6;
 }

 VAR_10 = FUNC_2(VAR_8, VAR_3);





 if (VAR_4->idle_periods < VAR_2) {
  unsigned int VAR_11 = VAR_4->idle_periods * VAR_10;

  if (VAR_6 > VAR_3->min + VAR_11)
   VAR_6 -= VAR_11;
  else
   VAR_6 = VAR_3->min;

  VAR_4->idle_periods = VAR_2;
 }


 if (VAR_9 > VAR_7->up_threshold) {
  VAR_5->down_skip = 0;


  if (VAR_6 == VAR_3->max)
   goto out;

  VAR_6 += VAR_10;
  if (VAR_6 > VAR_3->max)
   VAR_6 = VAR_3->max;

  FUNC_0(VAR_3, VAR_6, VAR_0);
  VAR_5->requested_freq = VAR_6;
  goto out;
 }


 if (++VAR_5->down_skip < VAR_7->sampling_down_factor)
  goto out;
 VAR_5->down_skip = 0;


 if (VAR_9 < VAR_8->down_threshold) {



  if (VAR_6 == VAR_3->min)
   goto out;

  if (VAR_6 > VAR_10)
   VAR_6 -= VAR_10;
  else
   VAR_6 = VAR_3->min;

  FUNC_0(VAR_3, VAR_6, VAR_1);
  VAR_5->requested_freq = VAR_6;
 }

 out:
 return VAR_7->sampling_rate;
}
