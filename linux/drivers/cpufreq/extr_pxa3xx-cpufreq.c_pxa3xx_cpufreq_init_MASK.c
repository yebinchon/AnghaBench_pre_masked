
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_freq; int max_freq; int transition_latency; } ;
struct cpufreq_policy {int min; int max; TYPE_1__ cpuinfo; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct cpufreq_policy*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct cpufreq_policy *VAR_3)
{
 int VAR_4 = -VAR_0;


 VAR_3->min = VAR_3->cpuinfo.min_freq = 104000;
 VAR_3->max = VAR_3->cpuinfo.max_freq =
  (FUNC_3()) ? 806000 : 624000;
 VAR_3->cpuinfo.transition_latency = 1000;

 if (FUNC_1() || FUNC_2())
  VAR_4 = FUNC_6(VAR_3, VAR_1,
     FUNC_0(VAR_1));

 if (FUNC_3())
  VAR_4 = FUNC_6(VAR_3, VAR_2,
     FUNC_0(VAR_2));

 if (VAR_4) {
  FUNC_4("failed to setup frequency table\n");
  return VAR_4;
 }

 FUNC_5("CPUFREQ support for PXA3xx initialized\n");
 return 0;
}
