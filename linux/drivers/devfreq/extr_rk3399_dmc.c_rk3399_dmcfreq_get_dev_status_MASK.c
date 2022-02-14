
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3399_dmcfreq {int rate; int edev; } ;
struct device {int dummy; } ;
struct devfreq_event_data {int total_count; int load_count; } ;
struct devfreq_dev_status {int total_time; int busy_time; int current_frequency; } ;


 struct rk3399_dmcfreq* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct devfreq_event_data*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0,
      struct devfreq_dev_status *VAR_1)
{
 struct rk3399_dmcfreq *VAR_2 = FUNC_0(VAR_0);
 struct devfreq_event_data VAR_3;
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_2->edev, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_1->current_frequency = VAR_2->rate;
 VAR_1->busy_time = VAR_3.load_count;
 VAR_1->total_time = VAR_3.total_count;

 return VAR_4;
}
