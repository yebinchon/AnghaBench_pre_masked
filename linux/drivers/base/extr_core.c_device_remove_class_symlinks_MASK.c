
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int kobj; TYPE_3__* class; scalar_t__ parent; } ;
struct TYPE_6__ {TYPE_2__* p; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ subsys; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2)
{
 if (FUNC_1(VAR_2))
  FUNC_4(&VAR_2->kobj, "of_node");

 if (!VAR_2->class)
  return;

 if (VAR_2->parent && FUNC_2(VAR_2))
  FUNC_4(&VAR_2->kobj, "device");
 FUNC_4(&VAR_2->kobj, "subsystem");




 FUNC_3(&VAR_2->class->p->subsys.kobj, &VAR_2->kobj, FUNC_0(VAR_2));
}
