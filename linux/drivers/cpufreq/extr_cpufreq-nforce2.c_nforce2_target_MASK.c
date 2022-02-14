
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned int max; unsigned int min; int cpu; } ;
struct cpufreq_freqs {unsigned int old; unsigned int new; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*,struct cpufreq_freqs*) ;
 int FUNC_1 (struct cpufreq_policy*,struct cpufreq_freqs*,int ) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,unsigned int,...) ;
 int FUNC_5 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct cpufreq_policy *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{

 struct cpufreq_freqs VAR_5;
 unsigned int VAR_6;

 if ((VAR_3 > VAR_2->max) || (VAR_3 < VAR_2->min))
  return -VAR_0;

 VAR_6 = VAR_3 / (VAR_1 * 100);

 VAR_5.old = FUNC_2(VAR_2->cpu);
 VAR_5.new = VAR_6 * VAR_1 * 100;

 if (VAR_5.old == VAR_5.new)
  return 0;

 FUNC_4("Old CPU frequency %d kHz, new %d kHz\n",
        VAR_5.old, VAR_5.new);

 FUNC_0(VAR_2, &VAR_5);




 if (FUNC_3(VAR_6) < 0)
  FUNC_5("Changing FSB to %d failed\n", VAR_6);
 else
  FUNC_4("Changed FSB successfully to %d\n",
   VAR_6);




 FUNC_1(VAR_2, &VAR_5, 0);

 return 0;
}
