
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {TYPE_1__* governor; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* show_setspeed ) (struct cpufreq_policy*,char*) ;} ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct cpufreq_policy*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_0, char *VAR_1)
{
 if (!VAR_0->governor || !VAR_0->governor->show_setspeed)
  return FUNC_0(VAR_1, "<unsupported>\n");

 return VAR_0->governor->show_setspeed(VAR_0, VAR_1);
}
