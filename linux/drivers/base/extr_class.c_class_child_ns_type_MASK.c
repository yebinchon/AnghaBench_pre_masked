
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subsys_private {struct class* class; } ;
struct kobject {int dummy; } ;
struct kobj_ns_type_operations {int dummy; } ;
struct class {struct kobj_ns_type_operations const* ns_type; } ;


 struct subsys_private* FUNC_0 (struct kobject*) ;

__attribute__((used)) static const struct kobj_ns_type_operations *FUNC_1(struct kobject *VAR_0)
{
 struct subsys_private *VAR_1 = FUNC_0(VAR_0);
 struct class *VAR_2 = VAR_1->class;

 return VAR_2->ns_type;
}
