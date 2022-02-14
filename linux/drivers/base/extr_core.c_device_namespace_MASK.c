
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct device {TYPE_1__* class; } ;
struct TYPE_2__ {void* (* namespace ) (struct device*) ;scalar_t__ ns_type; } ;


 struct device* FUNC_0 (struct kobject*) ;
 void* FUNC_1 (struct device*) ;

__attribute__((used)) static const void *FUNC_2(struct kobject *VAR_0)
{
 struct device *VAR_1 = FUNC_0(VAR_0);
 const void *VAR_2 = ((void*)0);

 if (VAR_1->class && VAR_1->class->ns_type)
  VAR_2 = VAR_1->class->namespace(VAR_1);

 return VAR_2;
}
