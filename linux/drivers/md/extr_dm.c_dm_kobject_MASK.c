
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {struct kobject kobj; } ;
struct mapped_device {TYPE_1__ kobj_holder; } ;



struct kobject *FUNC_0(struct mapped_device *VAR_0)
{
 return &VAR_0->kobj_holder.kobj;
}
