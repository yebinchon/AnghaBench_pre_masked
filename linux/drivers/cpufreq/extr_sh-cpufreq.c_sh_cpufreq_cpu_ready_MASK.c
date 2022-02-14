
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cpufreq_policy {int min; int max; int cpu; } ;


 int FUNC_0 (struct device*,char*,int,int,int,int) ;
 struct device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cpufreq_policy *VAR_0)
{
 struct device *VAR_1 = FUNC_1(VAR_0->cpu);

 FUNC_0(VAR_1, "CPU Frequencies - Minimum %u.%03u MHz, "
        "Maximum %u.%03u MHz.\n",
        VAR_0->min / 1000, VAR_0->min % 1000,
        VAR_0->max / 1000, VAR_0->max % 1000);
}
