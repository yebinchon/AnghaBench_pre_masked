
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu {scalar_t__ lm_root; scalar_t__ pae_root; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(struct kvm_mmu *VAR_0)
{
 FUNC_0((unsigned long)VAR_0->pae_root);
 FUNC_0((unsigned long)VAR_0->lm_root);
}
