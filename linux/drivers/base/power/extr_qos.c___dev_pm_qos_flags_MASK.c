
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm_qos_flags {int effective_flags; int list; } ;
struct TYPE_2__ {int lock; struct dev_pm_qos* qos; } ;
struct device {TYPE_1__ power; } ;
struct dev_pm_qos {struct pm_qos_flags flags; } ;
typedef int s32 ;
typedef enum pm_qos_flags_status { ____Placeholder_pm_qos_flags_status } pm_qos_flags_status ;


 scalar_t__ FUNC_0 (struct dev_pm_qos*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

enum pm_qos_flags_status FUNC_3(struct device *VAR_4, s32 VAR_5)
{
 struct dev_pm_qos *VAR_6 = VAR_4->power.qos;
 struct pm_qos_flags *VAR_7;
 s32 VAR_8;

 FUNC_2(&VAR_4->power.lock);

 if (FUNC_0(VAR_6))
  return VAR_3;

 VAR_7 = &VAR_6->flags;
 if (FUNC_1(&VAR_7->list))
  return VAR_3;

 VAR_8 = VAR_7->effective_flags & VAR_5;
 if (VAR_8)
  return (VAR_8 == VAR_5) ? VAR_0 : VAR_2;

 return VAR_1;
}
