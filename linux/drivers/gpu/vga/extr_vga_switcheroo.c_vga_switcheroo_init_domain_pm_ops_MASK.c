
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_1__* bus; } ;
struct TYPE_4__ {int runtime_resume; int runtime_suspend; } ;
struct dev_pm_domain {TYPE_2__ ops; } ;
struct TYPE_3__ {TYPE_2__* pm; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct dev_pm_domain*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct device *VAR_3,
          struct dev_pm_domain *VAR_4)
{

 if (VAR_3->bus && VAR_3->bus->pm) {
  VAR_4->ops = *VAR_3->bus->pm;
  VAR_4->ops.runtime_suspend = VAR_2;
  VAR_4->ops.runtime_resume = VAR_1;

  FUNC_0(VAR_3, VAR_4);
  return 0;
 }
 FUNC_0(VAR_3, ((void*)0));
 return -VAR_0;
}
