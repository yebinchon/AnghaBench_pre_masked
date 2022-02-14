
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuref {int cr_hwref; int cr_cpuid; } ;
typedef int platform_t ;
struct TYPE_2__ {int cr_hwref; int cr_cpuid; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0(platform_t VAR_1, struct cpuref *VAR_2)
{

 VAR_2->cr_cpuid = VAR_0[0].cr_cpuid;
 VAR_2->cr_hwref = VAR_0[0].cr_hwref;
 return (0);
}
