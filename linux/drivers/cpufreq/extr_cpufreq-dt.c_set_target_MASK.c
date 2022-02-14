
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct private_data {int cpu_dev; } ;
struct TYPE_4__ {int max_freq; } ;
struct cpufreq_policy {TYPE_2__ cpuinfo; int related_cpus; TYPE_1__* freq_table; struct private_data* driver_data; } ;
struct TYPE_3__ {unsigned long frequency; } ;


 int FUNC_0 (int ,unsigned long,int ) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_0, unsigned int VAR_1)
{
 struct private_data *VAR_2 = VAR_0->driver_data;
 unsigned long VAR_3 = VAR_0->freq_table[VAR_1].frequency;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->cpu_dev, VAR_3 * 1000);

 if (!VAR_4) {
  FUNC_0(VAR_0->related_cpus, VAR_3,
        VAR_0->cpuinfo.max_freq);
 }

 return VAR_4;
}
