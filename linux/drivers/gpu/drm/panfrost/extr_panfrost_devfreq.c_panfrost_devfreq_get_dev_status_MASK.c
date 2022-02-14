
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* slot; } ;
struct panfrost_device {int dev; TYPE_2__ devfreq; int clock; } ;
struct device {int dummy; } ;
struct devfreq_dev_status {int current_frequency; int total_time; int busy_time; } ;
struct TYPE_3__ {int busy_time; int idle_time; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct panfrost_device*) ;
 int FUNC_5 (struct panfrost_device*,int) ;
 struct panfrost_device* FUNC_6 (int ) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_1,
        struct devfreq_dev_status *VAR_2)
{
 struct panfrost_device *VAR_3 = FUNC_6(FUNC_7(VAR_1));
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_5(VAR_3, VAR_4);
 }

 VAR_2->current_frequency = FUNC_0(VAR_3->clock);
 VAR_2->total_time = FUNC_3(FUNC_2(VAR_3->devfreq.slot[0].busy_time,
         VAR_3->devfreq.slot[0].idle_time));

 VAR_2->busy_time = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->busy_time += FUNC_3(VAR_3->devfreq.slot[VAR_4].busy_time);
 }




 FUNC_4(VAR_3);

 FUNC_1(VAR_3->dev, "busy %lu total %lu %lu %% freq %lu MHz\n", VAR_2->busy_time,
  VAR_2->total_time,
  VAR_2->busy_time / (VAR_2->total_time / 100),
  VAR_2->current_frequency / 1000 / 1000);

 return 0;
}
