
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_0)
{
 if (FUNC_1(VAR_0, "pci") || FUNC_1(VAR_0, "pciex")) {






  if (!FUNC_0(VAR_0, "ranges", ((void*)0)))
   return 0;

  return 1;
 }

 return 0;
}
