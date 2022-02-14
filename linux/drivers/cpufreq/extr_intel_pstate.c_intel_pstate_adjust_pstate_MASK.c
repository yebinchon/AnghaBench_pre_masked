
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sample {int busy_scaled; int tsc; int aperf; int mperf; int core_avg_perf; } ;
struct TYPE_2__ {int current_pstate; int scaling; } ;
struct cpudata {int iowait_boost; TYPE_1__ pstate; struct sample sample; int cpu; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cpudata*) ;
 int FUNC_2 (struct cpudata*) ;
 int FUNC_3 (struct cpudata*,int) ;
 int FUNC_4 (struct cpudata*,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct cpudata *VAR_0)
{
 int VAR_1 = VAR_0->pstate.current_pstate;
 struct sample *VAR_2;
 int VAR_3;

 FUNC_8();

 VAR_3 = FUNC_2(VAR_0);
 VAR_3 = FUNC_3(VAR_0, VAR_3);
 FUNC_6(VAR_3 * VAR_0->pstate.scaling, VAR_0->cpu);
 FUNC_4(VAR_0, VAR_3);

 VAR_2 = &VAR_0->sample;
 FUNC_7(FUNC_5(100, VAR_2->core_avg_perf),
  FUNC_0(VAR_2->busy_scaled),
  VAR_1,
  VAR_0->pstate.current_pstate,
  VAR_2->mperf,
  VAR_2->aperf,
  VAR_2->tsc,
  FUNC_1(VAR_0),
  FUNC_0(VAR_0->iowait_boost * 100));
}
