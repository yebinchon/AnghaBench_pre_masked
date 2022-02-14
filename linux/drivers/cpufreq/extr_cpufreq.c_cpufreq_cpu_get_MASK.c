
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int kobj; } ;


 scalar_t__ FUNC_0 (int) ;
 struct cpufreq_policy* FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 unsigned int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

struct cpufreq_policy *FUNC_5(unsigned int VAR_3)
{
 struct cpufreq_policy *VAR_4 = ((void*)0);
 unsigned long VAR_5;

 if (FUNC_0(VAR_3 >= VAR_2))
  return ((void*)0);


 FUNC_3(&VAR_1, VAR_5);

 if (VAR_0) {

  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   FUNC_2(&VAR_4->kobj);
 }

 FUNC_4(&VAR_1, VAR_5);

 return VAR_4;
}
