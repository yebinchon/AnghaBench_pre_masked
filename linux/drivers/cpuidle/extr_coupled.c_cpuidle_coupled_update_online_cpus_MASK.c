
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_coupled {int online_count; int coupled_cpus; } ;
typedef int cpumask_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cpuidle_coupled *VAR_1)
{
 cpumask_t VAR_2;
 FUNC_0(&VAR_2, VAR_0, &VAR_1->coupled_cpus);
 VAR_1->online_count = FUNC_1(&VAR_2);
}
