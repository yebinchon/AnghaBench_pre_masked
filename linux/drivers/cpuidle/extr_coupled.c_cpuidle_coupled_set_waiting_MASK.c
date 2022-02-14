
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_coupled {int* requested_state; int ready_waiting_counts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(int VAR_1,
  struct cpuidle_coupled *VAR_2, int VAR_3)
{
 VAR_2->requested_state[VAR_1] = VAR_3;





 return FUNC_0(&VAR_2->ready_waiting_counts) & VAR_0;
}
