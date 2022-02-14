
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bus_type {TYPE_2__* p; } ;
struct attribute_group {int dummy; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ subsys; } ;


 int FUNC_0 (int *,struct attribute_group const**) ;

__attribute__((used)) static int FUNC_1(struct bus_type *VAR_0,
     const struct attribute_group **VAR_1)
{
 return FUNC_0(&VAR_0->p->subsys.kobj, VAR_1);
}
