
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node*) ;
 unsigned int* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;

unsigned long FUNC_4(struct device_node *VAR_0)
{
 const unsigned int *VAR_1 = ((void*)0);

 FUNC_2(VAR_0);
 while (VAR_0) {
  VAR_1 = FUNC_1(VAR_0, "bus-frequency", ((void*)0));
  if (VAR_1)
   break;

  VAR_0 = FUNC_0(VAR_0);
 }
 FUNC_3(VAR_0);

 return VAR_1 ? *VAR_1 : 0;
}
