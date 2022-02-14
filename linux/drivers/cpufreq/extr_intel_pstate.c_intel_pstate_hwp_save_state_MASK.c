
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {size_t cpu; } ;
struct cpudata {int epp_saved; } ;


 struct cpudata** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpudata*,int ) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_2)
{
 struct cpudata *VAR_3 = VAR_0[VAR_2->cpu];

 if (!VAR_1)
  return 0;

 VAR_3->epp_saved = FUNC_0(VAR_3, 0);

 return 0;
}
