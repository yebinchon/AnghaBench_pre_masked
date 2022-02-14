
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_freqs {int dummy; } ;
struct cpufreq_frequency_table {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 struct cpufreq_frequency_table* VAR_0 ;
 struct pxa_freqs* VAR_1 ;
 struct cpufreq_frequency_table* VAR_2 ;
 struct pxa_freqs* VAR_3 ;
 int VAR_4 ;
 struct cpufreq_frequency_table* VAR_5 ;
 struct pxa_freqs* VAR_6 ;

__attribute__((used)) static void FUNC_3(struct cpufreq_frequency_table **VAR_7,
        const struct pxa_freqs **VAR_8)
{
 if (FUNC_1()) {
  if (!VAR_4) {
   *VAR_8 = VAR_1;
   *VAR_7 = VAR_0;
  } else {
   *VAR_8 = VAR_3;
   *VAR_7 = VAR_2;
  }
 } else if (FUNC_2()) {
  *VAR_8 = VAR_6;
  *VAR_7 = VAR_5;
 } else {
  FUNC_0();
 }
}
