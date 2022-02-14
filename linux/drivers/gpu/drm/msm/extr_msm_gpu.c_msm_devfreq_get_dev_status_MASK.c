
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int time; } ;
struct msm_gpu {TYPE_1__ devfreq; TYPE_2__* funcs; int core_clk; } ;
struct device {int dummy; } ;
struct devfreq_dev_status {int total_time; int busy_time; int current_frequency; } ;
typedef int ktime_t ;
struct TYPE_4__ {int (* gpu_busy ) (struct msm_gpu*) ;int (* gpu_get_freq ) (struct msm_gpu*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 struct msm_gpu* FUNC_3 (int ) ;
 int FUNC_4 (struct msm_gpu*) ;
 int FUNC_5 (struct msm_gpu*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0,
  struct devfreq_dev_status *VAR_1)
{
 struct msm_gpu *VAR_2 = FUNC_3(FUNC_6(VAR_0));
 ktime_t VAR_3;

 if (VAR_2->funcs->gpu_get_freq)
  VAR_1->current_frequency = VAR_2->funcs->gpu_get_freq(VAR_2);
 else
  VAR_1->current_frequency = FUNC_0(VAR_2->core_clk);

 VAR_1->busy_time = VAR_2->funcs->gpu_busy(VAR_2);

 VAR_3 = FUNC_1();
 VAR_1->total_time = FUNC_2(VAR_3, VAR_2->devfreq.time);
 VAR_2->devfreq.time = VAR_3;

 return 0;
}
