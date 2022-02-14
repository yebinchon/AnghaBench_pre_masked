
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subsys_dev_iter {scalar_t__ type; int ki; } ;
struct klist_node {int dummy; } ;
struct device {scalar_t__ type; } ;
struct TYPE_2__ {struct device* device; } ;


 struct klist_node* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct klist_node*) ;

struct device *FUNC_2(struct subsys_dev_iter *VAR_0)
{
 struct klist_node *VAR_1;
 struct device *VAR_2;

 for (;;) {
  VAR_1 = FUNC_0(&VAR_0->ki);
  if (!VAR_1)
   return ((void*)0);
  VAR_2 = FUNC_1(VAR_1)->device;
  if (!VAR_0->type || VAR_0->type == VAR_2->type)
   return VAR_2;
 }
}
