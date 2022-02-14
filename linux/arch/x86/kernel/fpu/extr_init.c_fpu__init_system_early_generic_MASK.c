
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct cpuinfo_x86 *VAR_4)
{
 if (!FUNC_0(VAR_0) &&
     !FUNC_5(VAR_1, (unsigned long *)VAR_3)) {
  if (FUNC_1())
   FUNC_4(VAR_1);
  else
   FUNC_3(VAR_1);
 }


 if (!FUNC_6(&VAR_2, VAR_1)) {
  FUNC_2("x86/fpu: Giving up, no FPU found and no math emulation present\n");
  for (;;)
   asm volatile("hlt");
 }

}
