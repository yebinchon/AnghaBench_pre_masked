
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,char*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (char*) ;

int FUNC_3(void)
{
 struct device_node *VAR_0 = FUNC_0(((void*)0), "via-pmu");

 if (!VAR_0)
  return 0;
 FUNC_1(VAR_0);
 FUNC_2("WARNING ! Your machine is PMU-based but your kernel\n");
 FUNC_2("          wasn't compiled with CONFIG_ADB_PMU option !\n");
 return 0;
}
