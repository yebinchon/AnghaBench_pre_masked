
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_ns_type_operations {int dummy; } ;
struct class_dir {TYPE_1__* class; } ;
struct TYPE_2__ {struct kobj_ns_type_operations const* ns_type; } ;


 struct class_dir* FUNC_0 (struct kobject*) ;

__attribute__((used)) static const
struct kobj_ns_type_operations *FUNC_1(struct kobject *VAR_0)
{
 struct class_dir *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->class->ns_type;
}
