
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_mmu_memory_cache {int dummy; } ;
struct TYPE_3__ {int pgd; } ;
struct TYPE_4__ {TYPE_1__ gpa_mm; } ;
struct kvm {TYPE_2__ arch; } ;
typedef int pte_t ;


 int * FUNC_0 (int ,struct kvm_mmu_memory_cache*,unsigned long) ;

__attribute__((used)) static pte_t *FUNC_1(struct kvm *VAR_0,
       struct kvm_mmu_memory_cache *VAR_1,
       unsigned long VAR_2)
{
 return FUNC_0(VAR_0->arch.gpa_mm.pgd, VAR_1, VAR_2);
}
