
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_devfreq {scalar_t__ max_freq; } ;
struct tegra_actmon_emc_ratio {unsigned long cpu_freq; scalar_t__ emc_freq; } ;


 unsigned int FUNC_0 (struct tegra_actmon_emc_ratio*) ;
 struct tegra_actmon_emc_ratio* VAR_0 ;

__attribute__((used)) static unsigned long FUNC_1(struct tegra_devfreq *VAR_1,
         unsigned long VAR_2)
{
 unsigned int VAR_3;
 struct tegra_actmon_emc_ratio *VAR_4 = VAR_0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++, VAR_4++) {
  if (VAR_2 >= VAR_4->cpu_freq) {
   if (VAR_4->emc_freq >= VAR_1->max_freq)
    return VAR_1->max_freq;
   else
    return VAR_4->emc_freq;
  }
 }

 return 0;
}
