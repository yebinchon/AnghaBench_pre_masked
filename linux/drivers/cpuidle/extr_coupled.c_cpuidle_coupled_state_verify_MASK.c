
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int state_count; int safe_state_index; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpuidle_driver*,int) ;

int FUNC_1(struct cpuidle_driver *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1->state_count - 1; VAR_2 >= 0; VAR_2--) {
  if (FUNC_0(VAR_1, VAR_2) &&
      (VAR_1->safe_state_index == VAR_2 ||
       VAR_1->safe_state_index < 0 ||
       VAR_1->safe_state_index >= VAR_1->state_count))
   return -VAR_0;
 }

 return 0;
}
