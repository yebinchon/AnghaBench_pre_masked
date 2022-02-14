
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {size_t cpu; } ;
struct TYPE_2__ {int scaling; int current_pstate; } ;
struct cpudata {TYPE_1__ pstate; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 struct cpudata** VAR_1 ;
 int FUNC_1 (struct cpudata*,int ,int) ;
 int FUNC_2 (struct cpudata*,int) ;
 int FUNC_3 (struct cpudata*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static unsigned int FUNC_5(struct cpufreq_policy *VAR_2,
           unsigned int VAR_3)
{
 struct cpudata *VAR_4 = VAR_1[VAR_2->cpu];
 int VAR_5, VAR_6;

 FUNC_4();

 VAR_5 = FUNC_0(VAR_3, VAR_4->pstate.scaling);
 VAR_5 = FUNC_2(VAR_4, VAR_5);
 VAR_6 = VAR_4->pstate.current_pstate;
 FUNC_3(VAR_4, VAR_5);
 FUNC_1(VAR_4, VAR_0, VAR_6);
 return VAR_5 * VAR_4->pstate.scaling;
}
