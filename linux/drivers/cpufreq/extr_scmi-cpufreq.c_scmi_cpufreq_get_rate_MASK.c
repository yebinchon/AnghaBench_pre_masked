
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scmi_perf_ops {int (* freq_get ) (TYPE_1__*,int ,unsigned long*,int) ;} ;
struct scmi_data {int domain_id; } ;
struct cpufreq_policy {struct scmi_data* driver_data; } ;
struct TYPE_3__ {struct scmi_perf_ops* perf_ops; } ;


 struct cpufreq_policy* FUNC_0 (unsigned int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,unsigned long*,int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_1)
{
 struct cpufreq_policy *VAR_2 = FUNC_0(VAR_1);
 struct scmi_perf_ops *VAR_3 = VAR_0->perf_ops;
 struct scmi_data *VAR_4 = VAR_2->driver_data;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = VAR_3->freq_get(VAR_0, VAR_4->domain_id, &VAR_5, 0);
 if (VAR_6)
  return 0;
 return VAR_5 / 1000;
}
