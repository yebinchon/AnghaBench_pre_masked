
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuref {int cr_hwref; scalar_t__ cr_cpuid; } ;
typedef int platform_t ;
struct TYPE_2__ {int cr_hwref; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_0(platform_t VAR_3, struct cpuref *VAR_4)
{

 if (VAR_2 == 0)
  return (VAR_0);

 VAR_4->cr_cpuid = 0;
 VAR_4->cr_hwref = VAR_1[0].cr_hwref;

 return (0);
}
