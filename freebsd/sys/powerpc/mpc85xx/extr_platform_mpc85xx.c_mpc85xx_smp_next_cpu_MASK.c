
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuref {int cr_cpuid; int cr_hwref; } ;
typedef int platform_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(platform_t VAR_4, struct cpuref *VAR_5)
{

 if (VAR_2 >= VAR_3)
  return (VAR_0);

 VAR_5->cr_cpuid = VAR_2++;
 VAR_5->cr_hwref = VAR_5->cr_cpuid;
 if (VAR_1)
  FUNC_0("powerpc_smp_next_cpu: cpuid %d\n", VAR_5->cr_cpuid);

 return (0);
}
