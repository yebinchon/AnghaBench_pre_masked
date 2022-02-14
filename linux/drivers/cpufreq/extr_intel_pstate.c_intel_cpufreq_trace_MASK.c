
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sample {int tsc; int aperf; int mperf; } ;
struct TYPE_2__ {int current_pstate; } ;
struct cpudata {int iowait_boost; TYPE_1__ pstate; struct sample sample; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cpudata*) ;
 int FUNC_2 (struct cpudata*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int,int ,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct cpudata *VAR_0, unsigned int VAR_1, int VAR_2)
{
 struct sample *VAR_3;

 if (!FUNC_5())
  return;

 if (!FUNC_2(VAR_0, FUNC_3()))
  return;

 VAR_3 = &VAR_0->sample;
 FUNC_4(VAR_1,
  0,
  VAR_2,
  VAR_0->pstate.current_pstate,
  VAR_3->mperf,
  VAR_3->aperf,
  VAR_3->tsc,
  FUNC_1(VAR_0),
  FUNC_0(VAR_0->iowait_boost * 100));
}
