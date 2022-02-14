
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,struct property*) ;
 int FUNC_1 (struct device_node*,struct property*) ;
 struct device_node* FUNC_2 (char*) ;
 struct property* FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*) ;

int FUNC_5(void)
{
 struct device_node *VAR_0;
 struct property *VAR_1;
 int VAR_2 = -1;

 VAR_0 = FUNC_2("/ibm,dynamic-reconfiguration-memory");
 if (!VAR_0)
  return -1;

 VAR_1 = FUNC_3(VAR_0, "ibm,dynamic-memory", ((void*)0));
 if (VAR_1) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
 } else {
  VAR_1 = FUNC_3(VAR_0, "ibm,dynamic-memory-v2", ((void*)0));
  if (VAR_1)
   VAR_2 = FUNC_1(VAR_0, VAR_1);
 }

 FUNC_4(VAR_0);
 return VAR_2;
}
