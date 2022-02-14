
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regs_dirty; int regs_avail; struct kvm_mmu* walk_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mmu {void** pdptrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned long*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 void* FUNC_2 (int ) ;

void FUNC_3(struct kvm_vcpu *VAR_5)
{
 struct kvm_mmu *VAR_6 = VAR_5->arch.walk_mmu;

 if (FUNC_1(VAR_5)) {
  VAR_6->pdptrs[0] = FUNC_2(VAR_0);
  VAR_6->pdptrs[1] = FUNC_2(VAR_1);
  VAR_6->pdptrs[2] = FUNC_2(VAR_2);
  VAR_6->pdptrs[3] = FUNC_2(VAR_3);
 }

 FUNC_0(VAR_4,
    (unsigned long *)&VAR_5->arch.regs_avail);
 FUNC_0(VAR_4,
    (unsigned long *)&VAR_5->arch.regs_dirty);
}
