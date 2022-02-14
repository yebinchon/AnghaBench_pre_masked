
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_coupled {int ready_waiting_counts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct cpuidle_coupled *VAR_1)
{
 int VAR_2 = FUNC_0(&VAR_1->ready_waiting_counts) >> VAR_0;
 return VAR_2 == 0;
}
