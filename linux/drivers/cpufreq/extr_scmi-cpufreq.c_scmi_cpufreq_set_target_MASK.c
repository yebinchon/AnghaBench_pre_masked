
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct scmi_perf_ops {int (* freq_set ) (TYPE_3__*,int ,int,int) ;} ;
struct scmi_data {int domain_id; } ;
struct TYPE_5__ {int max_freq; } ;
struct cpufreq_policy {TYPE_1__ cpuinfo; int related_cpus; TYPE_2__* freq_table; struct scmi_data* driver_data; } ;
struct TYPE_7__ {struct scmi_perf_ops* perf_ops; } ;
struct TYPE_6__ {int frequency; } ;


 int FUNC_0 (int ,int,int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct cpufreq_policy *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct scmi_data *VAR_4 = VAR_1->driver_data;
 struct scmi_perf_ops *VAR_5 = VAR_0->perf_ops;
 u64 VAR_6 = VAR_1->freq_table[VAR_2].frequency;

 VAR_3 = VAR_5->freq_set(VAR_0, VAR_4->domain_id, VAR_6 * 1000, 0);
 if (!VAR_3)
  FUNC_0(VAR_1->related_cpus, VAR_6,
        VAR_1->cpuinfo.max_freq);
 return VAR_3;
}
