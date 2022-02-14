
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cpus; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned int,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_2->cpus, VAR_1);

 FUNC_1(VAR_4, VAR_0, &VAR_3,
     1);

 return 0;
}
