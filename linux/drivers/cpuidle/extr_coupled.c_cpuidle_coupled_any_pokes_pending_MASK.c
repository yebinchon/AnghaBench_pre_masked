
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_coupled {int coupled_cpus; } ;
typedef int cpumask_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static bool FUNC_1(struct cpuidle_coupled *VAR_2)
{
 cpumask_t VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, VAR_0, &VAR_2->coupled_cpus);
 VAR_4 = FUNC_0(&VAR_3, &VAR_1, &VAR_3);

 return VAR_4;
}
