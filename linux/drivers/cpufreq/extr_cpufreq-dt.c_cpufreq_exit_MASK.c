
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int opp_table; scalar_t__ reg_name; scalar_t__ have_static_opps; int cpu_dev; } ;
struct cpufreq_policy {int clk; int related_cpus; int freq_table; struct private_data* driver_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct private_data*) ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_0)
{
 struct private_data *VAR_1 = VAR_0->driver_data;

 FUNC_1(VAR_1->cpu_dev, &VAR_0->freq_table);
 if (VAR_1->have_static_opps)
  FUNC_2(VAR_0->related_cpus);
 if (VAR_1->reg_name)
  FUNC_3(VAR_1->opp_table);

 FUNC_0(VAR_0->clk);
 FUNC_4(VAR_1);

 return 0;
}
