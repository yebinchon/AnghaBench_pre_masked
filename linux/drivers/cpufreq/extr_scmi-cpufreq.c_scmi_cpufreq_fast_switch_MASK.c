
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scmi_perf_ops {int (* freq_set ) (TYPE_2__*,int ,unsigned int,int) ;} ;
struct scmi_data {int domain_id; } ;
struct TYPE_4__ {int max_freq; } ;
struct cpufreq_policy {TYPE_1__ cpuinfo; int related_cpus; struct scmi_data* driver_data; } ;
struct TYPE_5__ {struct scmi_perf_ops* perf_ops; } ;


 int FUNC_0 (int ,unsigned int,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,unsigned int,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct cpufreq_policy *VAR_1,
          unsigned int VAR_2)
{
 struct scmi_data *VAR_3 = VAR_1->driver_data;
 struct scmi_perf_ops *VAR_4 = VAR_0->perf_ops;

 if (!VAR_4->freq_set(VAR_0, VAR_3->domain_id,
    VAR_2 * 1000, 1)) {
  FUNC_0(VAR_1->related_cpus, VAR_2,
        VAR_1->cpuinfo.max_freq);
  return VAR_2;
 }

 return 0;
}
