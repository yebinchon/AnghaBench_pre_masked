
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm_subsys_data {scalar_t__ refcount; } ;
struct TYPE_2__ {int lock; int * subsys_data; } ;
struct device {TYPE_1__ power; } ;


 struct pm_subsys_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pm_subsys_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct device *VAR_0)
{
 struct pm_subsys_data *VAR_1;

 FUNC_2(&VAR_0->power.lock);

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  goto out;

 if (--VAR_1->refcount == 0)
  VAR_0->power.subsys_data = ((void*)0);
 else
  VAR_1 = ((void*)0);

 out:
 FUNC_3(&VAR_0->power.lock);
 FUNC_1(VAR_1);
}
