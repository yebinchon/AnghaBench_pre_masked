
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int of_node; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static bool FUNC_4(struct device *VAR_0)
{
 struct device_node *VAR_1 = FUNC_2(VAR_0->of_node);

 while(VAR_1) {
  if (FUNC_0(VAR_1, "U4-pcie") ||
      FUNC_0(VAR_1, "u4-pcie")) {
   FUNC_3(VAR_1);
   return 1;
  }
  VAR_1 = FUNC_1(VAR_1);
 }
 return 0;
}
