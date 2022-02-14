
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cppc_perf_fb_ctrs {int member_0; } ;
struct cppc_cpudata {int dummy; } ;


 struct cppc_cpudata** VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,struct cppc_perf_fb_ctrs*) ;
 unsigned int FUNC_1 (struct cppc_cpudata*,struct cppc_perf_fb_ctrs,struct cppc_perf_fb_ctrs) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned int FUNC_4(unsigned int VAR_2)
{
 struct cppc_perf_fb_ctrs VAR_3 = {0}, VAR_4 = {0};
 struct cppc_cpudata *VAR_5 = VAR_0[VAR_2];
 int VAR_6;

 if (VAR_1)
  return FUNC_2(VAR_2);

 VAR_6 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_3(2);

 VAR_6 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_5, VAR_3, VAR_4);
}
