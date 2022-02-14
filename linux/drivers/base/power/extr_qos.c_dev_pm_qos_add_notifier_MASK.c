
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_4__ {TYPE_3__* qos; } ;
struct device {TYPE_1__ power; } ;
typedef enum dev_pm_qos_req_type { ____Placeholder_dev_pm_qos_req_type } dev_pm_qos_req_type ;
struct TYPE_5__ {int notifiers; } ;
struct TYPE_6__ {TYPE_2__ resume_latency; } ;



 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct notifier_block*) ;
 int FUNC_3 (struct device*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct device *VAR_3, struct notifier_block *VAR_4,
       enum dev_pm_qos_req_type VAR_5)
{
 int VAR_6 = 0;

 FUNC_4(&VAR_2);

 if (FUNC_0(VAR_3->power.qos))
  VAR_6 = -VAR_1;
 else if (!VAR_3->power.qos)
  VAR_6 = FUNC_3(VAR_3);

 if (VAR_6)
  goto unlock;

 switch (VAR_5) {
 case 128:
  VAR_6 = FUNC_2(VAR_3->power.qos->resume_latency.notifiers,
             VAR_4);
  break;
 default:
  FUNC_1(1);
  VAR_6 = -VAR_0;
 }

unlock:
 FUNC_5(&VAR_2);
 return VAR_6;
}
