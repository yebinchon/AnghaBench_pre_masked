
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuref {int cr_cpuid; int cr_hwref; } ;
typedef int platform_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(platform_t VAR_2, struct cpuref *VAR_3)
{

 VAR_1 = 0;
 VAR_3->cr_cpuid = VAR_1;
 VAR_3->cr_hwref = VAR_3->cr_cpuid;
 if (VAR_0)
  FUNC_0("powerpc_smp_first_cpu: cpuid %d\n", VAR_3->cr_cpuid);
 VAR_1++;

 return (0);
}
