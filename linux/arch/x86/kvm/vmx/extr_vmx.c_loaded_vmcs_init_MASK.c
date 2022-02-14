
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loaded_vmcs {int cpu; scalar_t__ launched; scalar_t__ shadow_vmcs; scalar_t__ vmcs; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct loaded_vmcs *VAR_0)
{
 FUNC_0(VAR_0->vmcs);
 if (VAR_0->shadow_vmcs && VAR_0->launched)
  FUNC_0(VAR_0->shadow_vmcs);
 VAR_0->cpu = -1;
 VAR_0->launched = 0;
}
