
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned int* governor_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_2)
{
 unsigned int *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->governor_data = VAR_3;
 return 0;
}
