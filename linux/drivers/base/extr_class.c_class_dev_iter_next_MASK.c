
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_node {int dummy; } ;
struct device {scalar_t__ type; } ;
struct class_dev_iter {scalar_t__ type; int ki; } ;


 struct device* FUNC_0 (struct klist_node*) ;
 struct klist_node* FUNC_1 (int *) ;

struct device *FUNC_2(struct class_dev_iter *VAR_0)
{
 struct klist_node *VAR_1;
 struct device *VAR_2;

 while (1) {
  VAR_1 = FUNC_1(&VAR_0->ki);
  if (!VAR_1)
   return ((void*)0);
  VAR_2 = FUNC_0(VAR_1);
  if (!VAR_0->type || VAR_0->type == VAR_2->type)
   return VAR_2;
 }
}
