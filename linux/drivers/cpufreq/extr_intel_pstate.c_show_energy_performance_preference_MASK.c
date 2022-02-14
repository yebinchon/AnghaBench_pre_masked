
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {size_t cpu; } ;
struct cpudata {int dummy; } ;
typedef int ssize_t ;


 struct cpudata** VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (struct cpudata*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(
    struct cpufreq_policy *VAR_2, char *VAR_3)
{
 struct cpudata *VAR_4 = VAR_0[VAR_2->cpu];
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_3, "%s\n", VAR_1[VAR_5]);
}
