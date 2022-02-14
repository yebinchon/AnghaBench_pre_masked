
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {struct cpu_data* driver_data; } ;
struct cpu_data {struct cpu_data* table; struct cpu_data* pclk; } ;


 int FUNC_0 (struct cpu_data*) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_0)
{
 struct cpu_data *VAR_1 = VAR_0->driver_data;

 FUNC_0(VAR_1->pclk);
 FUNC_0(VAR_1->table);
 FUNC_0(VAR_1);
 VAR_0->driver_data = ((void*)0);

 return 0;
}
