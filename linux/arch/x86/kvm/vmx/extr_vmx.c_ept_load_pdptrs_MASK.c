
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regs_dirty; struct kvm_mmu* walk_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mmu {int * pdptrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_5)
{
 struct kvm_mmu *VAR_6 = VAR_5->arch.walk_mmu;

 if (!FUNC_1(VAR_4,
        (unsigned long *)&VAR_5->arch.regs_dirty))
  return;

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_0, VAR_6->pdptrs[0]);
  FUNC_2(VAR_1, VAR_6->pdptrs[1]);
  FUNC_2(VAR_2, VAR_6->pdptrs[2]);
  FUNC_2(VAR_3, VAR_6->pdptrs[3]);
 }
}
