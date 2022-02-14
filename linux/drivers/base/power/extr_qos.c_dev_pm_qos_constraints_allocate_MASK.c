
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm_qos_constraints {void* type; int no_constraint_value; void* default_value; void* target_value; int list; struct blocking_notifier_head* notifiers; } ;
struct TYPE_4__ {int lock; struct dev_pm_qos* qos; } ;
struct device {TYPE_2__ power; } ;
struct TYPE_3__ {int list; } ;
struct dev_pm_qos {TYPE_1__ flags; struct pm_qos_constraints latency_tolerance; struct pm_qos_constraints resume_latency; } ;
struct blocking_notifier_head {int dummy; } ;


 int FUNC_0 (struct blocking_notifier_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct dev_pm_qos*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_7)
{
 struct dev_pm_qos *VAR_8;
 struct pm_qos_constraints *VAR_9;
 struct blocking_notifier_head *VAR_10;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_3(3 * sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }

 VAR_9 = &VAR_8->resume_latency;
 FUNC_4(&VAR_9->list);
 VAR_9->target_value = VAR_5;
 VAR_9->default_value = VAR_5;
 VAR_9->no_constraint_value = VAR_6;
 VAR_9->type = VAR_4;
 VAR_9->notifiers = VAR_10;
 FUNC_0(VAR_10);

 VAR_9 = &VAR_8->latency_tolerance;
 FUNC_4(&VAR_9->list);
 VAR_9->target_value = VAR_2;
 VAR_9->default_value = VAR_2;
 VAR_9->no_constraint_value = VAR_3;
 VAR_9->type = VAR_4;

 FUNC_1(&VAR_8->flags.list);

 FUNC_5(&VAR_7->power.lock);
 VAR_7->power.qos = VAR_8;
 FUNC_6(&VAR_7->power.lock);

 return 0;
}
