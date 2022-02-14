
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra186_cpufreq_data {unsigned int num_clusters; scalar_t__ regs; struct tegra186_cpufreq_cluster* clusters; } ;
struct tegra186_cpufreq_cluster_info {scalar_t__* cpus; scalar_t__ offset; } ;
struct tegra186_cpufreq_cluster {int table; struct tegra186_cpufreq_cluster_info* info; } ;
struct TYPE_2__ {int transition_latency; } ;
struct cpufreq_policy {scalar_t__ cpu; TYPE_1__ cpuinfo; int freq_table; scalar_t__ driver_data; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int) ;
 struct tegra186_cpufreq_data* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_0)
{
 struct tegra186_cpufreq_data *VAR_1 = FUNC_2();
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_clusters; VAR_2++) {
  struct tegra186_cpufreq_cluster *VAR_3 = &VAR_1->clusters[VAR_2];
  const struct tegra186_cpufreq_cluster_info *VAR_4 =
   VAR_3->info;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->cpus); VAR_5++) {
   if (VAR_4->cpus[VAR_5] == VAR_0->cpu)
    break;
  }
  if (VAR_5 == FUNC_0(VAR_4->cpus))
   continue;

  VAR_0->driver_data =
   VAR_1->regs + VAR_4->offset + FUNC_1(VAR_5);
  VAR_0->freq_table = VAR_3->table;
  break;
 }

 VAR_0->cpuinfo.transition_latency = 300 * 1000;

 return 0;
}
