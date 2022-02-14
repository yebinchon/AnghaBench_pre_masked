
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int cpu; } ;
typedef enum cps_pm_state { ____Placeholder_cps_pm_state } cps_pm_state ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct cpuidle_device *VAR_5,
   struct cpuidle_driver *VAR_6, int VAR_7)
{
 enum cps_pm_state VAR_8;
 int VAR_9;
 if (FUNC_4(0, VAR_5->cpu) && (VAR_7 > 129))
  VAR_7 = 129;


 switch (VAR_7) {
 case 129:
  VAR_8 = VAR_1;
  break;
 case 130:
  VAR_8 = VAR_0;
  break;
 case 128:
  VAR_8 = VAR_2;
  break;
 default:
  FUNC_0();
  return -VAR_4;
 }


 if ((VAR_8 == VAR_2) && FUNC_2())
  return -VAR_3;


 VAR_9 = FUNC_1(VAR_8);


 if (VAR_8 == VAR_2)
  FUNC_3();

 return VAR_9 ?: VAR_7;
}
