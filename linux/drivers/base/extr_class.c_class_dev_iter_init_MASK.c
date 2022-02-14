
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct klist_node {int dummy; } ;
struct device_type {int dummy; } ;
struct device {TYPE_1__* p; } ;
struct class_dev_iter {struct device_type const* type; int ki; } ;
struct class {TYPE_2__* p; } ;
struct TYPE_4__ {int klist_devices; } ;
struct TYPE_3__ {struct klist_node knode_class; } ;


 int FUNC_0 (int *,int *,struct klist_node*) ;

void FUNC_1(struct class_dev_iter *VAR_0, struct class *VAR_1,
    struct device *VAR_2, const struct device_type *VAR_3)
{
 struct klist_node *VAR_4 = ((void*)0);

 if (VAR_2)
  VAR_4 = &VAR_2->p->knode_class;
 FUNC_0(&VAR_1->p->klist_devices, &VAR_0->ki, VAR_4);
 VAR_0->type = VAR_3;
}
