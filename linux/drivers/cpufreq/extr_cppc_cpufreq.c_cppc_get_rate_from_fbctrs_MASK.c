
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cppc_perf_fb_ctrs {int reference_perf; int delivered; int reference; } ;
struct TYPE_2__ {int desired_perf; } ;
struct cppc_cpudata {TYPE_1__ perf_ctrls; } ;


 int FUNC_0 (struct cppc_cpudata*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cppc_cpudata *VAR_0,
         struct cppc_perf_fb_ctrs VAR_1,
         struct cppc_perf_fb_ctrs VAR_2)
{
 u64 VAR_3, VAR_4;
 u64 VAR_5, VAR_6;

 VAR_5 = VAR_1;

 VAR_3 = FUNC_1(VAR_2,
        VAR_1);
 VAR_4 = FUNC_1(VAR_2,
        VAR_1);


 if (VAR_3 || VAR_4)
  VAR_6 = (VAR_5 * VAR_4) /
     VAR_3;
 else
  VAR_6 = VAR_0->perf_ctrls.desired_perf;

 return FUNC_0(VAR_0, VAR_6);
}
