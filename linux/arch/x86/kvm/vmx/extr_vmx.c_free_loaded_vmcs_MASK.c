
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loaded_vmcs {int * shadow_vmcs; scalar_t__ msr_bitmap; int * vmcs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct loaded_vmcs*) ;

void FUNC_4(struct loaded_vmcs *VAR_0)
{
 if (!VAR_0->vmcs)
  return;
 FUNC_3(VAR_0);
 FUNC_2(VAR_0->vmcs);
 VAR_0->vmcs = ((void*)0);
 if (VAR_0->msr_bitmap)
  FUNC_1((unsigned long)VAR_0->msr_bitmap);
 FUNC_0(VAR_0->shadow_vmcs != ((void*)0));
}
