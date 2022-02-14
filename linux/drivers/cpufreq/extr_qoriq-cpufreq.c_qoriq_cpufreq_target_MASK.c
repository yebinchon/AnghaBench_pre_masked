
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int clk; struct cpu_data* driver_data; } ;
struct cpu_data {TYPE_1__* table; struct clk** pclk; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {size_t driver_data; } ;


 int FUNC_0 (int ,struct clk*) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_0,
  unsigned int VAR_1)
{
 struct clk *VAR_2;
 struct cpu_data *VAR_3 = VAR_0->driver_data;

 VAR_2 = VAR_3->pclk[VAR_3->table[VAR_1].driver_data];
 return FUNC_0(VAR_0->clk, VAR_2);
}
