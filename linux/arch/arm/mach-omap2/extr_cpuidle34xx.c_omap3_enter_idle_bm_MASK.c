
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct omap3_idle_statedata {scalar_t__ per_min_state; } ;
struct cpuidle_driver {int safe_state_index; } ;
struct cpuidle_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpuidle_device*,struct cpuidle_driver*,int) ;
 int FUNC_1 (struct cpuidle_device*,struct cpuidle_driver*,int) ;
 struct omap3_idle_statedata* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct cpuidle_device *VAR_4,
          struct cpuidle_driver *VAR_5,
          int VAR_6)
{
 int VAR_7, VAR_8;
 u8 VAR_9, VAR_10;
 struct omap3_idle_statedata *VAR_11;





 if (FUNC_3(VAR_1) == VAR_0)
  VAR_7 = VAR_5->safe_state_index;
 else
  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
 VAR_11 = &VAR_2[VAR_7];

 VAR_9 = FUNC_2(VAR_3);
 VAR_10 = VAR_9;
 if (VAR_9 < VAR_11->per_min_state) {
  VAR_9 = VAR_11->per_min_state;
  FUNC_4(VAR_3, VAR_9);
 }

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_7);


 if (VAR_9 != VAR_10)
  FUNC_4(VAR_3, VAR_10);

 return VAR_8;
}
