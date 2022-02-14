
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct dev_pm_opp* devfreq; int cur_freq; } ;
struct panfrost_device {TYPE_2__* pdev; TYPE_1__ devfreq; int clock; } ;
struct dev_pm_opp {int dummy; } ;
struct TYPE_7__ {int initial_freq; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dev_pm_opp*) ;
 int FUNC_2 (struct dev_pm_opp*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_7 (int *,int *,int ) ;
 struct dev_pm_opp* FUNC_8 (int *,TYPE_3__*,int ,int *) ;
 TYPE_3__ VAR_2 ;
 int FUNC_9 (struct panfrost_device*) ;

int FUNC_10(struct panfrost_device *VAR_3)
{
 int VAR_4;
 struct dev_pm_opp *VAR_5;

 VAR_4 = FUNC_4(&VAR_3->pdev->dev);
 if (VAR_4 == -VAR_1)
  return 0;
 else if (VAR_4)
  return VAR_4;

 FUNC_9(VAR_3);

 VAR_3->devfreq.cur_freq = FUNC_3(VAR_3->clock);

 VAR_5 = FUNC_7(&VAR_3->pdev->dev, &VAR_3->devfreq.cur_freq, 0);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_2.initial_freq = VAR_3->devfreq.cur_freq;
 FUNC_6(VAR_5);

 VAR_3->devfreq.devfreq = FUNC_8(&VAR_3->pdev->dev,
   &VAR_2, VAR_0,
   ((void*)0));
 if (FUNC_1(VAR_3->devfreq.devfreq)) {
  FUNC_0(&VAR_3->pdev->dev, "Couldn't initialize GPU devfreq\n");
  VAR_4 = FUNC_2(VAR_3->devfreq.devfreq);
  VAR_3->devfreq.devfreq = ((void*)0);
  FUNC_5(&VAR_3->pdev->dev);
  return VAR_4;
 }

 return 0;
}
