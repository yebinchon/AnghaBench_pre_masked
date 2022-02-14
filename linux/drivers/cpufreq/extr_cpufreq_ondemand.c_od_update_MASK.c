
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct policy_dbs_info {int rate_mult; struct dbs_data* dbs_data; } ;
struct od_policy_dbs_info {scalar_t__ freq_lo; } ;
struct od_dbs_tuners {scalar_t__ powersave_bias; } ;
struct dbs_data {unsigned int up_threshold; int sampling_down_factor; struct od_dbs_tuners* tuners; } ;
struct TYPE_3__ {unsigned int min_freq; unsigned int max_freq; } ;
struct cpufreq_policy {scalar_t__ cur; scalar_t__ max; TYPE_1__ cpuinfo; struct policy_dbs_info* governor_data; } ;
struct TYPE_4__ {unsigned int (* powersave_bias_target ) (struct cpufreq_policy*,unsigned int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,unsigned int,int ) ;
 int FUNC_1 (struct cpufreq_policy*,scalar_t__) ;
 unsigned int FUNC_2 (struct cpufreq_policy*) ;
 TYPE_2__ VAR_2 ;
 unsigned int FUNC_3 (struct cpufreq_policy*,unsigned int,int ) ;
 struct od_policy_dbs_info* FUNC_4 (struct policy_dbs_info*) ;

__attribute__((used)) static void FUNC_5(struct cpufreq_policy *VAR_3)
{
 struct policy_dbs_info *VAR_4 = VAR_3->governor_data;
 struct od_policy_dbs_info *VAR_5 = FUNC_4(VAR_4);
 struct dbs_data *VAR_6 = VAR_4->dbs_data;
 struct od_dbs_tuners *VAR_7 = VAR_6->tuners;
 unsigned int VAR_8 = FUNC_2(VAR_3);

 VAR_5->freq_lo = 0;


 if (VAR_8 > VAR_6->up_threshold) {

  if (VAR_3->cur < VAR_3->max)
   VAR_4->rate_mult = VAR_6->sampling_down_factor;
  FUNC_1(VAR_3, VAR_3->max);
 } else {

  unsigned int VAR_9, VAR_10, VAR_11;

  VAR_10 = VAR_3->cpuinfo.min_freq;
  VAR_11 = VAR_3->cpuinfo.max_freq;
  VAR_9 = VAR_10 + VAR_8 * (VAR_11 - VAR_10) / 100;


  VAR_4->rate_mult = 1;

  if (VAR_7->powersave_bias)
   VAR_9 = VAR_2.powersave_bias_target(VAR_3,
         VAR_9,
         VAR_1);

  FUNC_0(VAR_3, VAR_9, VAR_0);
 }
}
