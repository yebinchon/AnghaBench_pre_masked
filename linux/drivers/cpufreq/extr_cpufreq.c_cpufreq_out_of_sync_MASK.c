
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cur; } ;
struct cpufreq_freqs {unsigned int new; int old; } ;


 int FUNC_0 (struct cpufreq_policy*,struct cpufreq_freqs*) ;
 int FUNC_1 (struct cpufreq_policy*,struct cpufreq_freqs*,int ) ;
 int FUNC_2 (char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct cpufreq_policy *VAR_0,
    unsigned int VAR_1)
{
 struct cpufreq_freqs VAR_2;

 FUNC_2("Warning: CPU frequency out of sync: cpufreq and timing core thinks of %u, is %u kHz\n",
   VAR_0->cur, VAR_1);

 VAR_2.old = VAR_0->cur;
 VAR_2.new = VAR_1;

 FUNC_0(VAR_0, &VAR_2);
 FUNC_1(VAR_0, &VAR_2, 0);
}
