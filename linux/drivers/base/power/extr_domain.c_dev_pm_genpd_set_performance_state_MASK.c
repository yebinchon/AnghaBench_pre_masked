
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct generic_pm_domain_data {unsigned int performance_state; } ;
struct generic_pm_domain {int set_performance_state; } ;
struct TYPE_4__ {TYPE_1__* subsys_data; } ;
struct device {TYPE_2__ power; } ;
struct TYPE_3__ {int domain_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct generic_pm_domain*,unsigned int) ;
 int FUNC_2 (struct generic_pm_domain*,unsigned int,int ) ;
 struct generic_pm_domain* FUNC_3 (struct device*) ;
 int FUNC_4 (struct generic_pm_domain*) ;
 int FUNC_5 (struct generic_pm_domain*) ;
 struct generic_pm_domain_data* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct device *VAR_2, unsigned int VAR_3)
{
 struct generic_pm_domain *VAR_4;
 struct generic_pm_domain_data *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4)
  return -VAR_1;

 if (FUNC_7(!VAR_4->set_performance_state))
  return -VAR_0;

 if (FUNC_0(!VAR_2->power.subsys_data ||
       !VAR_2->power.subsys_data->domain_data))
  return -VAR_0;

 FUNC_4(VAR_4);

 VAR_5 = FUNC_6(VAR_2->power.subsys_data->domain_data);
 VAR_6 = VAR_5->performance_state;
 VAR_5->performance_state = VAR_3;

 VAR_3 = FUNC_1(VAR_4, VAR_3);
 VAR_7 = FUNC_2(VAR_4, VAR_3, 0);
 if (VAR_7)
  VAR_5->performance_state = VAR_6;

 FUNC_5(VAR_4);

 return VAR_7;
}
