
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;
struct cpufreq_frequency_table {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpufreq_frequency_table*) ;
 int FUNC_1 (struct cpufreq_frequency_table*) ;
 int VAR_1 ;
 struct cpufreq_frequency_table* FUNC_2 (struct cpufreq_policy*) ;
 int FUNC_3 (struct cpufreq_policy*,struct cpufreq_frequency_table*,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct cpufreq_policy *VAR_2)
{
 struct cpufreq_frequency_table *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_4("%s: couldn't determine frequency table (%ld).\n",
   VAR_0, FUNC_1(VAR_3));
  return FUNC_1(VAR_3);
 }

 FUNC_3(VAR_2, VAR_3, VAR_1);
 FUNC_5("%s: registered\n", VAR_0);

 return 0;
}
