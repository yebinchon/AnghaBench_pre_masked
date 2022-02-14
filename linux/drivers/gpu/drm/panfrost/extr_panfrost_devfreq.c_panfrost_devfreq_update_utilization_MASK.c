
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct panfrost_devfreq_slot* slot; int devfreq; } ;
struct panfrost_device {TYPE_1__ devfreq; } ;
struct panfrost_devfreq_slot {int time_last_update; int idle_time; int busy_time; scalar_t__ busy; } ;
typedef int ktime_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct panfrost_device *VAR_0, int VAR_1)
{
 struct panfrost_devfreq_slot *VAR_2 = &VAR_0->devfreq.slot[VAR_1];
 ktime_t VAR_3;
 ktime_t VAR_4;

 if (!VAR_0->devfreq.devfreq)
  return;

 VAR_3 = FUNC_0();
 VAR_4 = VAR_0->devfreq.slot[VAR_1].time_last_update;


 if (VAR_2->busy)
  VAR_0->devfreq.slot[VAR_1].busy_time += FUNC_1(VAR_3, VAR_4);
 else
  VAR_0->devfreq.slot[VAR_1].idle_time += FUNC_1(VAR_3, VAR_4);

 VAR_0->devfreq.slot[VAR_1].time_last_update = VAR_3;
}
