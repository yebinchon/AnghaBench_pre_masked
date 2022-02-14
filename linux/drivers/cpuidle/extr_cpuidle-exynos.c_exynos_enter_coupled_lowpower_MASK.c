
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {scalar_t__ cpu; } ;
struct TYPE_2__ {int (* cpu1_powerdown ) () ;int (* cpu0_enter_aftr ) () ;int (* post_enter_aftr ) () ;int (* pre_enter_aftr ) () ;} ;


 int FUNC_0 (struct cpuidle_device*,int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct cpuidle_device *VAR_2,
      struct cpuidle_driver *VAR_3,
      int VAR_4)
{
 int VAR_5;

 VAR_0->pre_enter_aftr();




 FUNC_0(VAR_2, &VAR_1);




 VAR_5 = VAR_2->cpu ? VAR_0->cpu1_powerdown()
         : VAR_0->cpu0_enter_aftr();
 if (VAR_5)
  VAR_4 = VAR_5;




 FUNC_0(VAR_2, &VAR_1);

 VAR_0->post_enter_aftr();

 return VAR_4;
}
