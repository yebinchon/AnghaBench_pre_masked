
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int root_hpa; int (* set_cr3 ) (struct kvm_vcpu*,int) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;

__attribute__((used)) static inline void FUNC_3(struct kvm_vcpu *VAR_0)
{
 if (FUNC_0(VAR_0->arch.mmu->root_hpa))
  VAR_0->arch.mmu->set_cr3(VAR_0, VAR_0->arch.mmu->root_hpa |
           FUNC_1(VAR_0));
}
