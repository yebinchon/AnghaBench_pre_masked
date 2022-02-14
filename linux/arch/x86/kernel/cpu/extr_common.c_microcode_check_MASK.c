
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuinfo_x86 {int x86_capability; int cpuid_level; } ;
struct TYPE_2__ {int x86_capability; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpuinfo_x86*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 struct cpuinfo_x86 VAR_1;

 FUNC_4();


 VAR_1.cpuid_level = FUNC_0(0);






 FUNC_3(&VAR_1.x86_capability, &VAR_0.x86_capability, sizeof(VAR_1.x86_capability));

 FUNC_1(&VAR_1);

 if (!FUNC_2(&VAR_1.x86_capability, &VAR_0.x86_capability, sizeof(VAR_1.x86_capability)))
  return;

 FUNC_5("x86/CPU: CPU features have changed after loading microcode, but might not take effect.\n");
 FUNC_5("x86/CPU: Please consider either early loading through initrd/built-in or a potential BIOS update.\n");
}
