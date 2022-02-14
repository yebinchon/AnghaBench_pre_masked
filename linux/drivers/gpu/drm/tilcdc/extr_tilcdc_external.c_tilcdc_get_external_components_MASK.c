
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct component_match**,int ,struct device_node*) ;
 int FUNC_1 (struct device_node*,char*) ;
 struct device_node* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct device_node*) ;

int FUNC_4(struct device *VAR_1,
       struct component_match **VAR_2)
{
 struct device_node *VAR_3;

 VAR_3 = FUNC_2(VAR_1->of_node, 0, 0);

 if (!FUNC_1(VAR_3, "nxp,tda998x")) {
  FUNC_3(VAR_3);
  return 0;
 }

 if (VAR_2)
  FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3);
 FUNC_3(VAR_3);
 return 1;
}
