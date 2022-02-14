
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_data {int clk; } ;
struct cpufreq_policy {struct scpi_data* driver_data; } ;


 unsigned long FUNC_0 (int ) ;
 struct cpufreq_policy* FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_0)
{
 struct cpufreq_policy *VAR_1 = FUNC_1(VAR_0);
 struct scpi_data *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3 = FUNC_0(VAR_2->clk);

 return VAR_3 / 1000;
}
