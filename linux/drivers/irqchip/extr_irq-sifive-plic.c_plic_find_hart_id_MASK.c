
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* parent; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_0)
{
 for (; VAR_0; VAR_0 = VAR_0->parent) {
  if (FUNC_0(VAR_0, "riscv"))
   return FUNC_1(VAR_0);
 }

 return -1;
}
