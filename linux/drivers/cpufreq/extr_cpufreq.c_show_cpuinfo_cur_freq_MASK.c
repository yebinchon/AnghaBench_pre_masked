
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;
typedef int ssize_t ;


 unsigned int FUNC_0 (struct cpufreq_policy*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_0,
     char *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  return FUNC_1(VAR_1, "%u\n", VAR_2);

 return FUNC_1(VAR_1, "<unknown>\n");
}
