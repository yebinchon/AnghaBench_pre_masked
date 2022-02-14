
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int of_node; } ;


 struct device_node* FUNC_0 (int ,int,int ) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static bool FUNC_3(struct device *VAR_0)
{
 struct device_node *VAR_1, *VAR_2;


 VAR_1 = FUNC_0(VAR_0->of_node, 1, 0);
 if (!VAR_1)
  return 0;


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_1);
  return 1;
 }

 FUNC_2(VAR_1);
 FUNC_2(VAR_2);

 return 0;
}
