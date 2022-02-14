
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned int* governor_data; unsigned int min; unsigned int max; int cur; int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,unsigned int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,unsigned int,unsigned int,int ,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct cpufreq_policy *VAR_3)
{
 unsigned int *VAR_4 = VAR_3->governor_data;

 FUNC_1(&VAR_2);

 FUNC_3("limit event for cpu %u: %u - %u kHz, currently %u kHz, last set to %u kHz\n",
   VAR_3->cpu, VAR_3->min, VAR_3->max, VAR_3->cur, *VAR_4);

 if (VAR_3->max < *VAR_4)
  FUNC_0(VAR_3, VAR_3->max, VAR_0);
 else if (VAR_3->min > *VAR_4)
  FUNC_0(VAR_3, VAR_3->min, VAR_1);
 else
  FUNC_0(VAR_3, *VAR_4, VAR_1);

 FUNC_2(&VAR_2);
}
