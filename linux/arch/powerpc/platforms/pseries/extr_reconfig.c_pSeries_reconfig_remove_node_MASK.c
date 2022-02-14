
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,int *) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_2)
{
 struct device_node *VAR_3, *VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 if (!VAR_3)
  return -VAR_1;

 if ((VAR_4 = FUNC_1(VAR_2, ((void*)0)))) {
  FUNC_3(VAR_4);
  FUNC_3(VAR_3);
  return -VAR_0;
 }

 FUNC_0(VAR_2);
 FUNC_3(VAR_3);
 return 0;
}
