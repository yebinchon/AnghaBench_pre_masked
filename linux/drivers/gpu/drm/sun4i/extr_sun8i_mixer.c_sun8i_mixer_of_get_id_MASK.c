
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_endpoint {int id; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (struct device_node*,int,int) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,struct of_endpoint*) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_1)
{
 struct device_node *VAR_2, *VAR_3;
 struct of_endpoint VAR_4;


 VAR_2 = FUNC_0(VAR_1, 1, -1);
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 FUNC_2(VAR_3, &VAR_4);
 FUNC_3(VAR_3);
 return VAR_4.id;
}
