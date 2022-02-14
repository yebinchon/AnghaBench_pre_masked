
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sample {int mperf; int busy_scaled; int tsc; } ;
struct TYPE_3__ {int max_pstate; int turbo_pstate; int min_pstate; } ;
struct cpudata {int aperf_mperf_shift; int iowait_boost; TYPE_1__ pstate; struct sample sample; } ;
typedef int int32_t ;
struct TYPE_4__ {scalar_t__ turbo_disabled; scalar_t__ no_turbo; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct cpudata*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static inline int32_t FUNC_3(struct cpudata *VAR_1)
{
 struct sample *VAR_2 = &VAR_1->sample;
 int32_t VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_0(VAR_2->mperf << VAR_1->aperf_mperf_shift,
      VAR_2->tsc);

 if (VAR_3 < VAR_1->iowait_boost)
  VAR_3 = VAR_1->iowait_boost;

 VAR_2->busy_scaled = VAR_3 * 100;

 VAR_4 = VAR_0.no_turbo || VAR_0.turbo_disabled ?
   VAR_1->pstate.max_pstate : VAR_1->pstate.turbo_pstate;
 VAR_4 += VAR_4 >> 2;
 VAR_4 = FUNC_2(VAR_4, VAR_3);
 if (VAR_4 < VAR_1->pstate.min_pstate)
  VAR_4 = VAR_1->pstate.min_pstate;
 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 > VAR_4)
  VAR_4 += (VAR_5 - VAR_4) >> 1;

 return VAR_4;
}
