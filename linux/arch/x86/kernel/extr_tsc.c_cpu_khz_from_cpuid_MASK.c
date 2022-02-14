
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ x86_vendor; int cpuid_level; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static unsigned long FUNC_1(void)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;

 if (VAR_1.x86_vendor != VAR_0)
  return 0;

 if (VAR_1.cpuid_level < 0x16)
  return 0;

 VAR_2 = VAR_3 = VAR_4 = VAR_5 = 0;

 FUNC_0(0x16, &VAR_2, &VAR_3, &VAR_4, &VAR_5);

 return VAR_2 * 1000;
}
