
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned int* governor_data; int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,unsigned int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = -VAR_1;
 unsigned int *VAR_7 = VAR_4->governor_data;

 FUNC_4("cpufreq_set for cpu %u, freq %u kHz\n", VAR_4->cpu, VAR_5);

 FUNC_1(&VAR_3);
 if (!FUNC_3(VAR_2, VAR_4->cpu))
  goto err;

 *VAR_7 = VAR_5;

 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_0);
 err:
 FUNC_2(&VAR_3);
 return VAR_6;
}
