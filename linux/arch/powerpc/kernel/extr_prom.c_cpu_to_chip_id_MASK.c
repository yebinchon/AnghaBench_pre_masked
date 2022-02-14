
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int,int *) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;

int FUNC_3(int VAR_0)
{
 struct device_node *VAR_1;

 VAR_1 = FUNC_0(VAR_0, ((void*)0));
 if (!VAR_1)
  return -1;

 FUNC_2(VAR_1);
 return FUNC_1(VAR_1);
}
