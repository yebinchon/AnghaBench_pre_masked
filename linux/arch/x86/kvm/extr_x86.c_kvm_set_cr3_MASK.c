
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {unsigned long cr3; int regs_avail; int walk_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,unsigned long,int) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 unsigned long FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,int ) ;
 int FUNC_9 (struct kvm_vcpu*,int ,unsigned long) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 unsigned long FUNC_11 (int ,int) ;

int FUNC_12(struct kvm_vcpu *VAR_4, unsigned long VAR_5)
{
 bool VAR_6 = 0;
 if (VAR_5 == FUNC_7(VAR_4) && !FUNC_10(VAR_4)) {
  if (!VAR_6) {
   FUNC_6(VAR_4);
   FUNC_4(VAR_0, VAR_4);
  }
  return 0;
 }

 if (FUNC_2(VAR_4) &&
     (VAR_5 & FUNC_11(FUNC_1(VAR_4), 63)))
  return 1;
 else if (FUNC_3(VAR_4) &&
   !FUNC_9(VAR_4, VAR_4->arch.walk_mmu, VAR_5))
  return 1;

 FUNC_5(VAR_4, VAR_5, VAR_6);
 VAR_4->arch.cr3 = VAR_5;
 FUNC_0(VAR_1, (ulong *)&VAR_4->arch.regs_avail);

 return 0;
}
