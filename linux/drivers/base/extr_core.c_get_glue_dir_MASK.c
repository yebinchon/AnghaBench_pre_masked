
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {struct kobject* parent; } ;
struct device {TYPE_1__ kobj; } ;



__attribute__((used)) static inline struct kobject *FUNC_0(struct device *VAR_0)
{
 return VAR_0->kobj.parent;
}
