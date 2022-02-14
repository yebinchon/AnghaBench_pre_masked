
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample {int mperf; int aperf; int core_avg_perf; } ;
struct cpudata {struct sample sample; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct cpudata *VAR_0)
{
 struct sample *VAR_1 = &VAR_0->sample;

 VAR_1->core_avg_perf = FUNC_0(VAR_1->aperf, VAR_1->mperf);
}
