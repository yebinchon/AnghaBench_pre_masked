
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct device {TYPE_1__ power; } ;
typedef int s32 ;
typedef enum pm_qos_flags_status { ____Placeholder_pm_qos_flags_status } pm_qos_flags_status ;


 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

enum pm_qos_flags_status FUNC_3(struct device *VAR_0, s32 VAR_1)
{
 unsigned long VAR_2;
 enum pm_qos_flags_status VAR_3;

 FUNC_1(&VAR_0->power.lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->power.lock, VAR_2);

 return VAR_3;
}
