
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int cpus; int suspend_freq; int clk; } ;
struct TYPE_2__ {int clk; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_5)
{
 VAR_5->clk = VAR_1[VAR_0].clk;
 FUNC_0(VAR_5, VAR_2, VAR_4);
 VAR_5->suspend_freq = VAR_3;
 FUNC_1(VAR_5->cpus);

 return 0;
}
