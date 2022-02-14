
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {size_t cpu; } ;
struct cpudata {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct cpudata** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpudata*,int) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (char const*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(
  struct cpufreq_policy *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct cpudata *VAR_6 = VAR_1[VAR_3->cpu];
 char VAR_7[21];
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, "%20s", VAR_7);
 if (VAR_8 != 1)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_2, -1, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_0(VAR_6, VAR_8);
 return VAR_5;
}
