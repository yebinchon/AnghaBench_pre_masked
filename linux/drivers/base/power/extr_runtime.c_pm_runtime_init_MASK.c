
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int function; } ;
struct TYPE_3__ {int idle_notification; int disable_depth; int runtime_auto; int request_pending; int deferred_resume; int wait_queue; TYPE_2__ suspend_timer; scalar_t__ timer_expires; int work; int request; int child_count; scalar_t__ runtime_error; int usage_count; int runtime_status; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (struct device*,int) ;
 int VAR_5 ;

void FUNC_5(struct device *VAR_6)
{
 VAR_6->power.runtime_status = VAR_3;
 VAR_6->power.idle_notification = 0;

 VAR_6->power.disable_depth = 1;
 FUNC_1(&VAR_6->power.usage_count, 0);

 VAR_6->power.runtime_error = 0;

 FUNC_1(&VAR_6->power.child_count, 0);
 FUNC_4(VAR_6, 0);
 VAR_6->power.runtime_auto = 1;

 VAR_6->power.request_pending = 0;
 VAR_6->power.request = VAR_2;
 VAR_6->power.deferred_resume = 0;
 FUNC_0(&VAR_6->power.work, VAR_4);

 VAR_6->power.timer_expires = 0;
 FUNC_2(&VAR_6->power.suspend_timer, VAR_0, VAR_1);
 VAR_6->power.suspend_timer.function = VAR_5;

 FUNC_3(&VAR_6->power.wait_queue);
}
