
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_5__ {TYPE_3__* qos; } ;
struct device {TYPE_2__ power; } ;
typedef enum dev_pm_qos_req_type { ____Placeholder_dev_pm_qos_req_type } dev_pm_qos_req_type ;
struct TYPE_4__ {int notifiers; } ;
struct TYPE_6__ {TYPE_1__ resume_latency; } ;



 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct notifier_block*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct device *VAR_2,
          struct notifier_block *VAR_3,
          enum dev_pm_qos_req_type VAR_4)
{
 int VAR_5 = 0;

 FUNC_3(&VAR_1);


 if (FUNC_0(VAR_2->power.qos))
  goto unlock;

 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_2(VAR_2->power.qos->resume_latency.notifiers,
        VAR_3);
  break;
 default:
  FUNC_1(1);
  VAR_5 = -VAR_0;
 }

unlock:
 FUNC_4(&VAR_1);
 return VAR_5;
}
