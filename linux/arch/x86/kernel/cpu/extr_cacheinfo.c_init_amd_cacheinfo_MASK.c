
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int extended_cpuid_level; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cpuinfo_x86*) ;
 int VAR_1 ;

void FUNC_3(struct cpuinfo_x86 *VAR_2)
{

 if (FUNC_0(VAR_0)) {
  VAR_1 = FUNC_2(VAR_2);
 } else if (VAR_2->extended_cpuid_level >= 0x80000006) {
  if (FUNC_1(0x80000006) & 0xf000)
   VAR_1 = 4;
  else
   VAR_1 = 3;
 }
}
