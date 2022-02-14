
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 struct device_node* FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (char*) ;

int FUNC_2(void)
{
 struct device_node *VAR_3;

 VAR_3 = FUNC_0(((void*)0), ((void*)0), "ibm,opal-intc");
 if (!VAR_3)
  return -VAR_0;

 VAR_2 = &VAR_1;

 FUNC_1("XICS: Using OPAL ICP fallbacks\n");

 return 0;
}
