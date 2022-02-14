
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;

int FUNC_4(struct device_node *VAR_1)
{
 int VAR_2 = VAR_0;

 FUNC_1(VAR_1);
 while (VAR_1) {
  VAR_2 = FUNC_3(VAR_1);
  if (VAR_2 != -1)
   break;

  VAR_1 = FUNC_0(VAR_1);
 }
 FUNC_2(VAR_1);

 return VAR_2;
}
