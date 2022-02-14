
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * pgd; } ;
struct TYPE_4__ {int * pgd; } ;
struct kvm_mmu_memory_cache {int dummy; } ;
struct TYPE_6__ {TYPE_2__ guest_user_mm; TYPE_1__ guest_kernel_mm; struct kvm_mmu_memory_cache mmu_page_cache; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
typedef int pte_t ;
typedef int pgd_t ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,struct kvm_mmu_memory_cache*,unsigned long) ;
 int FUNC_2 (struct kvm_mmu_memory_cache*,int ,int ) ;

__attribute__((used)) static pte_t *FUNC_3(struct kvm_vcpu *VAR_2,
     unsigned long VAR_3)
{
 struct kvm_mmu_memory_cache *VAR_4 = &VAR_2->arch.mmu_page_cache;
 pgd_t *VAR_5;
 int VAR_6;


 VAR_6 = FUNC_2(VAR_4, VAR_0,
         VAR_1);
 if (VAR_6)
  return ((void*)0);

 if (FUNC_0(VAR_2))
  VAR_5 = VAR_2->arch.guest_kernel_mm.pgd;
 else
  VAR_5 = VAR_2->arch.guest_user_mm.pgd;

 return FUNC_1(VAR_5, VAR_4, VAR_3);
}
