
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int next_hrtimer; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cpuidle_device*,struct cpuidle_driver*,int) ;
 int FUNC_2 (struct cpuidle_device*,struct cpuidle_driver*,int) ;
 scalar_t__ FUNC_3 (struct cpuidle_driver*,int) ;
 int FUNC_4 () ;

int FUNC_5(struct cpuidle_driver *VAR_0, struct cpuidle_device *VAR_1,
    int VAR_2)
{
 int VAR_3 = 0;







 FUNC_0(VAR_1->next_hrtimer, FUNC_4());

 if (FUNC_3(VAR_0, VAR_2))
  VAR_3 = FUNC_2(VAR_1, VAR_0, VAR_2);
 else
  VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);

 FUNC_0(VAR_1->next_hrtimer, 0);
 return VAR_3;
}
