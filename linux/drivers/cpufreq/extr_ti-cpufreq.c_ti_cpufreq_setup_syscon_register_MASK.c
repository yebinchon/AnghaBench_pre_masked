
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_cpufreq_data {int syscon; struct device_node* opp_node; struct device* cpu_dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_4(struct ti_cpufreq_data *VAR_0)
{
 struct device *VAR_1 = VAR_0->cpu_dev;
 struct device_node *VAR_2 = VAR_0->opp_node;

 VAR_0->syscon = FUNC_3(VAR_2,
       "syscon");
 if (FUNC_0(VAR_0->syscon)) {
  FUNC_2(VAR_1,
   "\"syscon\" is missing, cannot use OPPv2 table.\n");
  return FUNC_1(VAR_0->syscon);
 }

 return 0;
}
