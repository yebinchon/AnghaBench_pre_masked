
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* slot; } ;
struct panfrost_device {TYPE_2__ devfreq; } ;
typedef int ktime_t ;
struct TYPE_3__ {int time_last_update; scalar_t__ idle_time; scalar_t__ busy_time; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct panfrost_device *VAR_1)
{
 ktime_t VAR_2 = FUNC_0();
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_1->devfreq.slot[VAR_3].busy_time = 0;
  VAR_1->devfreq.slot[VAR_3].idle_time = 0;
  VAR_1->devfreq.slot[VAR_3].time_last_update = VAR_2;
 }
}
