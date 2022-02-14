
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int devfreq; TYPE_1__* slot; } ;
struct panfrost_device {TYPE_2__ devfreq; } ;
struct TYPE_3__ {int busy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct panfrost_device*) ;

void FUNC_2(struct panfrost_device *VAR_1)
{
 int VAR_2;

 if (!VAR_1->devfreq.devfreq)
  return;

 FUNC_1(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->devfreq.slot[VAR_2].busy = 0;

 FUNC_0(VAR_1->devfreq.devfreq);
}
