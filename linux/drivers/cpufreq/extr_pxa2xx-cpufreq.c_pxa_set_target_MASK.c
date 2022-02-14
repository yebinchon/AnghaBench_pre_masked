
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_freqs {unsigned int khz; } ;
struct pxa_cpufreq_data {int clk_core; } ;
struct cpufreq_policy {int cur; } ;
struct cpufreq_frequency_table {int dummy; } ;


 int FUNC_0 (int ,unsigned int) ;
 struct pxa_cpufreq_data* FUNC_1 () ;
 int FUNC_2 (struct cpufreq_frequency_table**,struct pxa_freqs const**) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,int,unsigned int) ;
 int FUNC_4 (struct pxa_freqs const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_2, unsigned int VAR_3)
{
 struct cpufreq_frequency_table *VAR_4;
 const struct pxa_freqs *VAR_5;
 struct pxa_cpufreq_data *VAR_6 = FUNC_1();
 unsigned int VAR_7;
 int VAR_8 = 0;


 FUNC_2(&VAR_4, &VAR_5);

 VAR_7 = VAR_5[VAR_3].khz;

 if (VAR_0)
  FUNC_3("Changing CPU frequency from %d Mhz to %d Mhz\n",
    VAR_2->cur / 1000, VAR_7 / 1000);

 if (VAR_1 && VAR_7 > VAR_2->cur) {
  VAR_8 = FUNC_4(&VAR_5[VAR_3]);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_0(VAR_6->clk_core, VAR_7 * 1000);
 if (VAR_1 && VAR_7 < VAR_2->cur)
  VAR_8 = FUNC_4(&VAR_5[VAR_3]);

 return 0;
}
