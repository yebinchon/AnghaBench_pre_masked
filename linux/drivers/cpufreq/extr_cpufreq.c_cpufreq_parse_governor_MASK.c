
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {struct cpufreq_governor* governor; } ;
struct cpufreq_governor {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpufreq_governor* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(char *VAR_2,
      struct cpufreq_policy *VAR_3)
{
 struct cpufreq_governor *VAR_4;

 FUNC_1(&VAR_1);

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4) {
  int VAR_5;

  FUNC_2(&VAR_1);

  VAR_5 = FUNC_3("cpufreq_%s", VAR_2);
  if (VAR_5)
   return -VAR_0;

  FUNC_1(&VAR_1);

  VAR_4 = FUNC_0(VAR_2);
 }
 if (VAR_4 && !FUNC_4(VAR_4->owner))
  VAR_4 = ((void*)0);

 FUNC_2(&VAR_1);

 if (VAR_4) {
  VAR_3->governor = VAR_4;
  return 0;
 }

 return -VAR_0;
}
