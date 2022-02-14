
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct policy_dbs_info {struct dbs_data* dbs_data; } ;
struct od_dbs_tuners {scalar_t__ powersave_bias; } ;
struct dbs_data {struct od_dbs_tuners* tuners; } ;
struct cpufreq_policy {scalar_t__ cur; scalar_t__ max; struct policy_dbs_info* governor_data; } ;
struct TYPE_2__ {unsigned int (* powersave_bias_target ) (struct cpufreq_policy*,unsigned int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,unsigned int,int ) ;
 TYPE_1__ VAR_2 ;
 unsigned int FUNC_1 (struct cpufreq_policy*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct cpufreq_policy *VAR_3, unsigned int VAR_4)
{
 struct policy_dbs_info *VAR_5 = VAR_3->governor_data;
 struct dbs_data *VAR_6 = VAR_5->dbs_data;
 struct od_dbs_tuners *VAR_7 = VAR_6->tuners;

 if (VAR_7->powersave_bias)
  VAR_4 = VAR_2.powersave_bias_target(VAR_3, VAR_4,
    VAR_0);
 else if (VAR_3->cur == VAR_3->max)
  return;

 FUNC_0(VAR_3, VAR_4, VAR_7->powersave_bias ?
   VAR_1 : VAR_0);
}
