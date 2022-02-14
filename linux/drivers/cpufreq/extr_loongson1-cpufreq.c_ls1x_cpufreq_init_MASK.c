
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct cpufreq_policy {int clk; int cpu; } ;
struct cpufreq_frequency_table {unsigned int frequency; } ;
struct TYPE_2__ {unsigned int min_freq; unsigned int max_freq; int clk; int pll_clk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct cpufreq_policy*,struct cpufreq_frequency_table*,int ) ;
 int FUNC_2 (struct device*,char*,int,unsigned int) ;
 struct device* FUNC_3 (int ) ;
 struct cpufreq_frequency_table* FUNC_4 (int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_6)
{
 struct device *VAR_7 = FUNC_3(VAR_6->cpu);
 struct cpufreq_frequency_table *VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_0(VAR_5->pll_clk) / 1000;

 VAR_11 = 1 << VAR_2;
 VAR_8 = FUNC_4(VAR_11, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_3;

 for (VAR_12 = 0; VAR_12 < (VAR_11 - 1); VAR_12++) {
  VAR_10 = VAR_9 / (VAR_12 + 1);
  if ((VAR_10 < VAR_5->min_freq) || (VAR_10 > VAR_5->max_freq))
   VAR_8[VAR_12].frequency = VAR_0;
  else
   VAR_8[VAR_12].frequency = VAR_10;
  FUNC_2(VAR_7,
   "cpufreq table: index %d: frequency %d\n", VAR_12,
   VAR_8[VAR_12].frequency);
 }
 VAR_8[VAR_12].frequency = VAR_1;

 VAR_6->clk = VAR_5->clk;
 FUNC_1(VAR_6, VAR_8, 0);

 return 0;
}
