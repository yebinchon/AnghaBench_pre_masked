
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_data {int cpu_dev; int clk; } ;
struct cpufreq_policy {int freq_table; struct scpi_data* driver_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scpi_data*) ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_0)
{
 struct scpi_data *VAR_1 = VAR_0->driver_data;

 FUNC_0(VAR_1->clk);
 FUNC_1(VAR_1->cpu_dev, &VAR_0->freq_table);
 FUNC_2(VAR_1->cpu_dev);
 FUNC_3(VAR_1);

 return 0;
}
