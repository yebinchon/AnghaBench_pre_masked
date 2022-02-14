
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct omap3_idle_statedata {scalar_t__ mpu_state; scalar_t__ core_state; } ;
struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct omap3_idle_statedata* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct cpuidle_device *VAR_5,
       struct cpuidle_driver *VAR_6, int VAR_7)
{
 struct omap3_idle_statedata *VAR_8 = &VAR_4[VAR_7];
 u32 VAR_9 = VAR_2;
 u32 VAR_10 = VAR_2;
 int VAR_11;
 int VAR_12 = 0;

 if (VAR_3) {
  VAR_9 = VAR_1;





  if (!FUNC_0(VAR_0))
   VAR_10 = VAR_1;
 }


 if ((VAR_8->mpu_state >= VAR_9) &&
     (VAR_8->core_state >= VAR_10))
  return VAR_7;





 for (VAR_11 = VAR_7 - 1; VAR_11 >= 0; VAR_11--) {
  VAR_8 = &VAR_4[VAR_11];
  if ((VAR_8->mpu_state >= VAR_9) &&
      (VAR_8->core_state >= VAR_10)) {
   VAR_12 = VAR_11;
   break;
  }
 }

 return VAR_12;
}
