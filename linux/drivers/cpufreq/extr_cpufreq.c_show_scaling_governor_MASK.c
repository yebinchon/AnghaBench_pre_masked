
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {scalar_t__ policy; TYPE_1__* governor; } ;
typedef int ssize_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,char*,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_4, char *VAR_5)
{
 if (VAR_4->policy == VAR_2)
  return FUNC_1(VAR_5, "powersave\n");
 else if (VAR_4->policy == VAR_1)
  return FUNC_1(VAR_5, "performance\n");
 else if (VAR_4->governor)
  return FUNC_0(VAR_5, VAR_0, "%s\n",
    VAR_4->governor->name);
 return -VAR_3;
}
