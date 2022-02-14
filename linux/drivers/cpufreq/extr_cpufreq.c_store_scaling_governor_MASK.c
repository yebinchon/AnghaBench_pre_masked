
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {TYPE_1__* governor; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ setpolicy; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (char*,struct cpufreq_policy*) ;
 scalar_t__ FUNC_1 (char*,struct cpufreq_policy*) ;
 int FUNC_2 (struct cpufreq_policy*,struct cpufreq_policy*) ;
 int FUNC_3 (struct cpufreq_policy*,struct cpufreq_policy*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct cpufreq_policy *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 char VAR_6[16];
 struct cpufreq_policy VAR_7;

 FUNC_3(&VAR_7, VAR_2, sizeof(*VAR_2));

 VAR_5 = FUNC_5(VAR_3, "%15s", VAR_6);
 if (VAR_5 != 1)
  return -VAR_0;

 if (VAR_1->setpolicy) {
  if (FUNC_1(VAR_6, &VAR_7))
   return -VAR_0;
 } else {
  if (FUNC_0(VAR_6, &VAR_7))
   return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_2, &VAR_7);

 if (VAR_7.governor)
  FUNC_4(VAR_7.governor->owner);

 return VAR_5 ? VAR_5 : VAR_4;
}
