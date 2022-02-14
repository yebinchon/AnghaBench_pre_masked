
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_dbs_info {scalar_t__ sample_delay_ns; unsigned int rate_mult; struct dbs_data* dbs_data; } ;
struct od_policy_dbs_info {int sample_type; unsigned int freq_lo_delay_us; unsigned int freq_hi_delay_us; scalar_t__ freq_lo; } ;
struct dbs_data {unsigned int sampling_rate; } ;
struct cpufreq_policy {struct policy_dbs_info* governor_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpufreq_policy*,scalar_t__,int ) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 struct od_policy_dbs_info* FUNC_2 (struct policy_dbs_info*) ;

__attribute__((used)) static unsigned int FUNC_3(struct cpufreq_policy *VAR_3)
{
 struct policy_dbs_info *VAR_4 = VAR_3->governor_data;
 struct dbs_data *VAR_5 = VAR_4->dbs_data;
 struct od_policy_dbs_info *VAR_6 = FUNC_2(VAR_4);
 int VAR_7 = VAR_6->sample_type;


 VAR_6->sample_type = VAR_1;




 if (VAR_7 == VAR_2 && VAR_4->sample_delay_ns > 0) {
  FUNC_0(VAR_3, VAR_6->freq_lo,
     VAR_0);
  return VAR_6->freq_lo_delay_us;
 }

 FUNC_1(VAR_3);

 if (VAR_6->freq_lo) {

  VAR_6->sample_type = VAR_2;
  return VAR_6->freq_hi_delay_us;
 }

 return VAR_5->sampling_rate * VAR_4->rate_mult;
}
