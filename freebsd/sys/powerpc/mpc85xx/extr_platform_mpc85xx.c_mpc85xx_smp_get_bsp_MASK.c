
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuref {int cr_cpuid; int cr_hwref; } ;
typedef int platform_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(platform_t VAR_1, struct cpuref *VAR_2)
{

 VAR_2->cr_cpuid = FUNC_0(VAR_0);
 VAR_2->cr_hwref = VAR_2->cr_cpuid;

 return (0);
}
