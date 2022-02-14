
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* sibling; struct device_node* child; } ;


 int FUNC_0 (struct device_node*) ;

void FUNC_1(struct device_node *VAR_0)
{
 if (VAR_0->child)
  FUNC_1(VAR_0->child);

 if (VAR_0->sibling)
  FUNC_1(VAR_0->sibling);

 FUNC_0(VAR_0);
}
