
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct class {TYPE_1__* p; int class_groups; int name; } ;
struct TYPE_2__ {int subsys; } ;


 int FUNC_0 (struct class*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(struct class *VAR_0)
{
 FUNC_2("device class '%s': unregistering\n", VAR_0->name);
 FUNC_0(VAR_0, VAR_0->class_groups);
 FUNC_1(&VAR_0->p->subsys);
}
