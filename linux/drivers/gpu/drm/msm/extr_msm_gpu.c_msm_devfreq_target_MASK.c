
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct msm_gpu {int core_clk; TYPE_1__* funcs; } ;
struct device {int dummy; } ;
struct dev_pm_opp {int dummy; } ;
struct TYPE_2__ {int (* gpu_set_freq ) (struct msm_gpu*,int ) ;} ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_4 (struct device*,unsigned long*,int ) ;
 struct msm_gpu* FUNC_5 (int ) ;
 int FUNC_6 (struct msm_gpu*,int ) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_0, unsigned long *VAR_1,
  u32 VAR_2)
{
 struct msm_gpu *VAR_3 = FUNC_5(FUNC_7(VAR_0));
 struct dev_pm_opp *VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_3->funcs->gpu_set_freq)
  VAR_3->funcs->gpu_set_freq(VAR_3, (u64)*VAR_1);
 else
  FUNC_2(VAR_3->core_clk, *VAR_1);

 FUNC_3(VAR_4);

 return 0;
}
