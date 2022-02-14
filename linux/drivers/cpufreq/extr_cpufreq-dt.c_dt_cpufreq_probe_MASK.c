
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct cpufreq_dt_platform_data {scalar_t__ suspend; int resume; scalar_t__ have_governor_per_policy; } ;
struct TYPE_3__ {scalar_t__ suspend; int resume; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int) ;
 struct cpufreq_dt_platform_data* FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct cpufreq_dt_platform_data *VAR_3 = FUNC_2(&VAR_2->dev);
 int VAR_4;
 VAR_4 = FUNC_3();
 if (VAR_4)
  return VAR_4;

 if (VAR_3) {
  if (VAR_3->have_governor_per_policy)
   VAR_1.flags |= VAR_0;

  VAR_1.resume = VAR_3->resume;
  if (VAR_3->suspend)
   VAR_1.suspend = VAR_3->suspend;
 }

 VAR_4 = FUNC_0(&VAR_1);
 if (VAR_4)
  FUNC_1(&VAR_2->dev, "failed register driver: %d\n", VAR_4);

 return VAR_4;
}
