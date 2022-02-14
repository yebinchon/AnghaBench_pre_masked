
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuref {int cr_cpuid; int cr_domain; int cr_hwref; } ;
typedef int platform_t ;
struct TYPE_2__ {int cr_cpuid; int cr_domain; int cr_hwref; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_0(platform_t VAR_5, struct cpuref *VAR_6)
{
 int VAR_7;

 if (VAR_4 == 0)
  return (VAR_0);

 VAR_7 = VAR_6->cr_cpuid + 1;
 if (VAR_7 >= VAR_3)
  return (VAR_1);

 VAR_6->cr_cpuid = VAR_2[VAR_7].cr_cpuid;
 VAR_6->cr_hwref = VAR_2[VAR_7].cr_hwref;
 VAR_6->cr_domain = VAR_2[VAR_7].cr_domain;

 return (0);
}
