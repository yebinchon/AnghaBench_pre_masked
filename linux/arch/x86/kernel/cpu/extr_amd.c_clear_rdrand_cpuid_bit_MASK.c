
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cpuinfo_x86*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_6(struct cpuinfo_x86 *VAR_4)
{





 if (!FUNC_1(VAR_0))
  return;





 if (!(FUNC_3(1) & FUNC_0(30)) || VAR_3)
  return;

 FUNC_4(VAR_1, 62);





 if (FUNC_3(1) & FUNC_0(30)) {
  FUNC_5("BIOS may not properly restore RDRAND after suspend, but hypervisor does not support hiding RDRAND via CPUID.\n");
  return;
 }

 FUNC_2(VAR_4, VAR_2);
 FUNC_5("BIOS may not properly restore RDRAND after suspend, hiding RDRAND via CPUID. Use rdrand=force to reenable.\n");
}
