
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int safe_state_index; } ;
struct cpuidle_device {scalar_t__ cpu; } ;


 int FUNC_0 (struct cpuidle_device*,struct cpuidle_driver*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct cpuidle_device *VAR_0,
    struct cpuidle_driver *VAR_1,
    int VAR_2)
{
 int VAR_3 = VAR_2;


 if (FUNC_2() > 1 || VAR_0->cpu != 0)
  VAR_3 = VAR_1->safe_state_index;

 if (VAR_3 == 0)
  return FUNC_0(VAR_0, VAR_1, VAR_3);

 FUNC_1();

 return VAR_3;
}
