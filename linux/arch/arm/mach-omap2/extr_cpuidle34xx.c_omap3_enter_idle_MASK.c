
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct omap3_idle_statedata {int flags; scalar_t__ mpu_state; scalar_t__ core_state; } ;
struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;
struct TYPE_5__ {int * pwrdm_clkdms; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_4 () ;
 struct omap3_idle_statedata* VAR_4 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct cpuidle_device *VAR_5,
       struct cpuidle_driver *VAR_6,
       int VAR_7)
{
 struct omap3_idle_statedata *VAR_8 = &VAR_4[VAR_7];

 if (FUNC_5() || FUNC_4())
  goto return_sleep_time;


 if (VAR_8->flags & VAR_0) {
  FUNC_1(VAR_3->pwrdm_clkdms[0]);
 } else {
  FUNC_8(VAR_3, VAR_8->mpu_state);
  FUNC_8(VAR_2, VAR_8->core_state);
 }





 if (VAR_8->mpu_state == VAR_1)
  FUNC_2();


 FUNC_6();





 if (VAR_8->mpu_state == VAR_1 &&
     FUNC_7(VAR_3) == VAR_1)
  FUNC_3();


 if (VAR_8->flags & VAR_0)
  FUNC_0(VAR_3->pwrdm_clkdms[0]);

return_sleep_time:

 return VAR_7;
}
