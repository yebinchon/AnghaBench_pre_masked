
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct cppc_perf_caps {unsigned int lowest_freq; unsigned int nominal_freq; unsigned int nominal_perf; unsigned int lowest_perf; unsigned int highest_perf; } ;
struct cppc_cpudata {struct cppc_perf_caps perf_caps; } ;


 unsigned int FUNC_0 () ;

__attribute__((used)) static unsigned int FUNC_1(struct cppc_cpudata *VAR_0,
     unsigned int VAR_1)
{
 static u64 VAR_2;
 struct cppc_perf_caps *VAR_3 = &VAR_0->perf_caps;
 u64 VAR_4, VAR_5;

 if (VAR_3->lowest_freq && VAR_3->nominal_freq) {
  if (VAR_1 >= VAR_3->nominal_freq) {
   VAR_4 = VAR_3->nominal_perf;
   VAR_5 = VAR_3->nominal_freq;
  } else {
   VAR_4 = VAR_3->lowest_perf;
   VAR_5 = VAR_3->lowest_freq;
  }
 } else {
  if (!VAR_2)
   VAR_2 = FUNC_0();
  VAR_4 = VAR_0->perf_caps.highest_perf;
  VAR_5 = VAR_2;
 }

 return (u64)VAR_1 * VAR_4 / VAR_5;
}
