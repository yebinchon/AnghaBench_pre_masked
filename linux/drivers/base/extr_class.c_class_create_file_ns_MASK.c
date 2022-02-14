
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


 int VAR_0 ;
 int FUNC_0 (int *,int *,void const*) ;

int FUNC_1(struct class *VAR_1, const struct class_attribute *VAR_2,
    const void *VAR_3)
{
 int VAR_4;

 if (VAR_1)
  VAR_4 = FUNC_0(&VAR_1->p->subsys.kobj,
          &VAR_2->attr, VAR_3);
 else
  VAR_4 = -VAR_0;
 return VAR_4;
}
