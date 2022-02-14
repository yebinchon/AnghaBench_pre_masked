
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm_subsys_data {int refcount; int lock; } ;
struct TYPE_2__ {int lock; struct pm_subsys_data* subsys_data; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pm_subsys_data*) ;
 struct pm_subsys_data* FUNC_1 (int,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct device *VAR_2)
{
 struct pm_subsys_data *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_4(&VAR_2->power.lock);

 if (VAR_2->power.subsys_data) {
  VAR_2->power.subsys_data->refcount++;
 } else {
  FUNC_3(&VAR_3->lock);
  VAR_3->refcount = 1;
  VAR_2->power.subsys_data = VAR_3;
  FUNC_2(VAR_2);
  VAR_3 = ((void*)0);
 }

 FUNC_5(&VAR_2->power.lock);


 FUNC_0(VAR_3);

 return 0;
}
