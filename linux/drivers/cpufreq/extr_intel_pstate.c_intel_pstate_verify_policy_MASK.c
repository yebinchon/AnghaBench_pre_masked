
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_freq; } ;
struct cpufreq_policy {size_t cpu; scalar_t__ policy; TYPE_1__ cpuinfo; } ;
struct cpudata {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct cpudata** VAR_3 ;
 int FUNC_0 (struct cpufreq_policy*,int ,int ) ;
 int FUNC_1 (struct cpufreq_policy*,struct cpudata*) ;
 int FUNC_2 (struct cpudata*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_4)
{
 struct cpudata *VAR_5 = VAR_3[VAR_4->cpu];

 FUNC_3();
 FUNC_0(VAR_4, VAR_4->cpuinfo.min_freq,
         FUNC_2(VAR_5));

 if (VAR_4->policy != VAR_1 &&
     VAR_4->policy != VAR_0)
  return -VAR_2;

 FUNC_1(VAR_4, VAR_5);

 return 0;
}
