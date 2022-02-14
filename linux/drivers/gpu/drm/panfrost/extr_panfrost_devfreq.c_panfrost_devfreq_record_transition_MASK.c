
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct panfrost_devfreq_slot* slot; } ;
struct panfrost_device {TYPE_1__ devfreq; } ;
struct panfrost_devfreq_slot {int busy; } ;


 int FUNC_0 (struct panfrost_device*,int) ;

void FUNC_1(struct panfrost_device *VAR_0, int VAR_1)
{
 struct panfrost_devfreq_slot *VAR_2 = &VAR_0->devfreq.slot[VAR_1];

 FUNC_0(VAR_0, VAR_1);
 VAR_2->busy = !VAR_2->busy;
}
