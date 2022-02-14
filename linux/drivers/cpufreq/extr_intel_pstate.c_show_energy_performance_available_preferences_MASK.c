
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(
    struct cpufreq_policy *VAR_1, char *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;

 while (VAR_0[VAR_3] != ((void*)0))
  VAR_4 += FUNC_0(&VAR_2[VAR_4], "%s ", VAR_0[VAR_3++]);

 VAR_4 += FUNC_0(&VAR_2[VAR_4], "\n");

 return VAR_4;
}
