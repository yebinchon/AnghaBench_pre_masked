
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct class_attribute {int attr; } ;
struct class {TYPE_2__* p; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ subsys; } ;


 int FUNC_0 (int *,int *,void const*) ;

void FUNC_1(struct class *VAR_0, const struct class_attribute *VAR_1,
     const void *VAR_2)
{
 if (VAR_0)
  FUNC_0(&VAR_0->p->subsys.kobj, &VAR_1->attr, VAR_2);
}
