
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,struct device_node*) ;
 int FUNC_2 (struct device_node*) ;

int FUNC_3(struct device_node *VAR_0)
{
 struct device_node *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0, ((void*)0));
 while (VAR_1) {
  FUNC_3(VAR_1);
  VAR_1 = FUNC_1(VAR_0, VAR_1);
 }

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0);

 return 0;
}
