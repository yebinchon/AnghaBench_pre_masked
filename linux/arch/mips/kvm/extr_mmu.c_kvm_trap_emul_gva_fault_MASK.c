
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_coproc {int dummy; } ;
struct TYPE_2__ {struct kvm_mips_tlb* guest_tlb; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mips_tlb {int dummy; } ;
typedef enum kvm_mips_fault_result { ____Placeholder_kvm_mips_fault_result } kvm_mips_fault_result ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct kvm_mips_tlb,unsigned long) ;
 int FUNC_2 (struct kvm_mips_tlb,unsigned long) ;
 unsigned long VAR_9 ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,struct kvm_mips_tlb*,unsigned long,int) ;
 unsigned long FUNC_6 (struct mips_coproc*) ;

enum kvm_mips_fault_result FUNC_7(struct kvm_vcpu *VAR_10,
         unsigned long VAR_11,
         bool VAR_12)
{
 struct mips_coproc *VAR_13 = VAR_10->arch.cop0;
 struct kvm_mips_tlb *VAR_14;
 int VAR_15;

 if (FUNC_0(VAR_11) == VAR_1) {
  if (FUNC_4(VAR_11, VAR_10, VAR_12) < 0)
   return VAR_3;
 } else if ((FUNC_0(VAR_11) < VAR_1) ||
     FUNC_0(VAR_11) == VAR_2) {

  VAR_15 = FUNC_3(VAR_10, (VAR_11 & VAR_9) |
     (FUNC_6(VAR_13) & VAR_0));
  if (VAR_15 < 0)
   return VAR_6;
  VAR_14 = &VAR_10->arch.guest_tlb[VAR_15];


  if (!FUNC_2(*VAR_14, VAR_11))
   return VAR_7;
  if (VAR_12 && !FUNC_1(*VAR_14, VAR_11))
   return VAR_8;

  if (FUNC_5(VAR_10, VAR_14, VAR_11, VAR_12))
   return VAR_3;
 } else {
  return VAR_4;
 }

 return VAR_5;
}
