
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int clk; int cur; } ;
struct cpufreq_freqs {unsigned int new; int old; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct cpufreq_policy*,struct cpufreq_freqs*) ;
 int FUNC_2 (struct cpufreq_policy*,struct cpufreq_freqs*,int) ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_0,
    unsigned int VAR_1,
    unsigned int VAR_2)
{
 struct cpufreq_freqs VAR_3;
 int VAR_4;

 VAR_3.old = VAR_0->cur;
 VAR_3.new = VAR_1;

 FUNC_1(VAR_0, &VAR_3);
 VAR_4 = FUNC_0(VAR_0->clk, VAR_1 * 1000);
 FUNC_2(VAR_0, &VAR_3, VAR_4);

 return VAR_4;
}
