
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; struct dev_pm_qos* qos; } ;
struct device {TYPE_1__ power; } ;
struct dev_pm_qos {int resume_latency; } ;
typedef scalar_t__ s32 ;
typedef enum dev_pm_qos_req_type { ____Placeholder_dev_pm_qos_req_type } dev_pm_qos_req_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dev_pm_qos*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

s32 FUNC_5(struct device *VAR_2, enum dev_pm_qos_req_type VAR_3)
{
 struct dev_pm_qos *VAR_4 = VAR_2->power.qos;
 unsigned long VAR_5;
 s32 VAR_6;

 FUNC_3(&VAR_2->power.lock, VAR_5);

 if (VAR_3 == VAR_0) {
  VAR_6 = FUNC_0(VAR_4) ? VAR_1
   : FUNC_2(&VAR_4->resume_latency);
 } else {
  FUNC_1(1);
  VAR_6 = 0;
 }

 FUNC_4(&VAR_2->power.lock, VAR_5);

 return VAR_6;
}
