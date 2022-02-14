
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cpuinfo_x86*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct cpuinfo_x86 *VAR_3)
{
 if (VAR_2)
  return;
 if (FUNC_0(VAR_3, VAR_0) && !FUNC_0(VAR_3, VAR_1)) {
  FUNC_2(VAR_0);
  FUNC_1("x86/mpx: Disabling MPX since SMEP not present\n");
 }
}
