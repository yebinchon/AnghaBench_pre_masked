
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union mips_instruction {int word; } ;
typedef int ulong ;
typedef int u32 ;
struct TYPE_2__ {int host_cp0_cause; int host_cp0_badvaddr; scalar_t__ pc; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm_run* run; } ;
struct kvm_run {void* exit_reason; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int*,int ) ;
 int FUNC_1 (int*,struct kvm_vcpu*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (union mips_instruction,int,struct kvm_run*,struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (int ,struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_8)
{
 struct kvm_run *VAR_9 = VAR_8->run;
 u32 *VAR_10 = (u32 *) VAR_8->arch.pc;
 u32 VAR_11 = VAR_8->arch.host_cp0_cause;
 ulong VAR_12 = VAR_8->arch.host_cp0_badvaddr;
 union mips_instruction VAR_13;
 enum emulation_result VAR_14 = VAR_1;
 int VAR_15, VAR_16 = VAR_6;

 if (FUNC_4(VAR_12, VAR_8, 0)) {

  if (FUNC_2(&VAR_8->arch)) {
   VAR_9->exit_reason = VAR_4;
   return VAR_7;
  }


  if (VAR_11 & VAR_0)
   VAR_10 += 1;
  VAR_15 = FUNC_1(VAR_10, VAR_8, &VAR_13.word);
  if (VAR_15) {
   VAR_9->exit_reason = VAR_4;
   return VAR_7;
  }


  VAR_14 = FUNC_3(VAR_13, VAR_11, VAR_9, VAR_8);
  if (VAR_14 == VAR_3) {
   FUNC_0("Guest Emulate Load from MMIO space failed: PC: %p, BadVaddr: %#lx\n",
    VAR_10, VAR_12);
   VAR_9->exit_reason = VAR_4;
  }
 }

 if (VAR_14 == VAR_1) {
  VAR_16 = VAR_6;
 } else if (VAR_14 == VAR_2) {
  VAR_9->exit_reason = VAR_5;
  VAR_16 = VAR_7;
 } else {
  VAR_9->exit_reason = VAR_4;
  VAR_16 = VAR_7;
 }
 return VAR_16;
}
