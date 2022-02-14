
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct generic_pm_domain_data {int dummy; } ;
struct TYPE_4__ {int lock; TYPE_1__* subsys_data; } ;
struct device {TYPE_2__ power; } ;
struct TYPE_3__ {int * domain_data; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct generic_pm_domain_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0,
    struct generic_pm_domain_data *VAR_1)
{
 FUNC_2(&VAR_0->power.lock);

 VAR_0->power.subsys_data->domain_data = ((void*)0);

 FUNC_3(&VAR_0->power.lock);

 FUNC_1(VAR_1);
 FUNC_0(VAR_0);
}
