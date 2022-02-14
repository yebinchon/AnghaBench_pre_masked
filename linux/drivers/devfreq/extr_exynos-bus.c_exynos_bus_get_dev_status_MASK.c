
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_bus {int ratio; int curr_freq; } ;
struct device {int dummy; } ;
struct devfreq_event_data {int load_count; int total_count; } ;
struct devfreq_dev_status {int total_time; int busy_time; int current_frequency; } ;


 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device*,char*) ;
 struct exynos_bus* FUNC_2 (struct device*) ;
 int FUNC_3 (struct exynos_bus*,struct devfreq_event_data*) ;
 int FUNC_4 (struct exynos_bus*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0,
         struct devfreq_dev_status *VAR_1)
{
 struct exynos_bus *VAR_2 = FUNC_2(VAR_0);
 struct devfreq_event_data VAR_3;
 int VAR_4;

 VAR_1->current_frequency = VAR_2->curr_freq;

 VAR_4 = FUNC_3(VAR_2, &VAR_3);
 if (VAR_4 < 0) {
  VAR_1->total_time = VAR_1->busy_time = 0;
  goto err;
 }

 VAR_1->busy_time = (VAR_3.load_count * 100) / VAR_2->ratio;
 VAR_1->total_time = VAR_3.total_count;

 FUNC_0(VAR_0, "Usage of devfreq-event : %lu/%lu\n", VAR_1->busy_time,
       VAR_1->total_time);

err:
 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4 < 0) {
  FUNC_1(VAR_0, "failed to set event to devfreq-event devices\n");
  return VAR_4;
 }

 return VAR_4;
}
