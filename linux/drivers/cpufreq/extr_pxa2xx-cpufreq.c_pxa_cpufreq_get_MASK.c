
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_cpufreq_data {int clk_core; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct pxa_cpufreq_data* FUNC_1 () ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_0)
{
 struct pxa_cpufreq_data *VAR_1 = FUNC_1();

 return (unsigned int) FUNC_0(VAR_1->clk_core) / 1000;
}
