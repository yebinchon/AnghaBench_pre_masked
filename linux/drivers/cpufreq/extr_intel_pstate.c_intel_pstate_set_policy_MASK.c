
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_freq; } ;
struct cpufreq_policy {size_t cpu; scalar_t__ policy; int max; TYPE_1__ cpuinfo; } ;
struct cpudata {scalar_t__ policy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cpudata** VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int VAR_5 ;
 int FUNC_2 (struct cpudata*) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct cpufreq_policy*,struct cpudata*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct cpufreq_policy *VAR_6)
{
 struct cpudata *VAR_7;

 if (!VAR_6->cpuinfo.max_freq)
  return -VAR_1;

 FUNC_7("set_policy cpuinfo.max %u policy->max %u\n",
   VAR_6->cpuinfo.max_freq, VAR_6->max);

 VAR_7 = VAR_2[VAR_6->cpu];
 VAR_7->policy = VAR_6->policy;

 FUNC_5(&VAR_5);

 FUNC_4(VAR_6, VAR_7);

 if (VAR_7->policy == VAR_0) {




  FUNC_0(VAR_6->cpu);
  FUNC_2(VAR_7);
 } else {
  FUNC_3(VAR_6->cpu);
 }

 if (VAR_3) {





  if (!VAR_4)
   FUNC_0(VAR_6->cpu);
  FUNC_1(VAR_6->cpu);
 }

 FUNC_6(&VAR_5);

 return 0;
}
