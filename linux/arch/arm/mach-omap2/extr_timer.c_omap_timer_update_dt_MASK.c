
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* parent; } ;


 int FUNC_0 (struct device_node*,char*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_0)
{
 int VAR_1 = 0;

 if (!FUNC_0(VAR_0, "ti,omap-counter32k")) {
  VAR_1 = FUNC_2(VAR_0);
  if (VAR_1)
   return VAR_1;
 }


 if (FUNC_1(VAR_0, "ti,hwmods", ((void*)0)))
  return VAR_1;


 VAR_1 = FUNC_2(VAR_0->parent);
 if (VAR_1)
  return VAR_1;

 return 0;
}
