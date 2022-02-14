
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union mips_instruction {int word; } ;
typedef int u32 ;
struct kvm_vcpu {int arch; } ;
struct kvm_run {void* exit_reason; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,struct kvm_vcpu*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (union mips_instruction,int,struct kvm_run*,struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(u32 VAR_5, u32 *VAR_6, struct kvm_run *VAR_7,
        struct kvm_vcpu *VAR_8)
{
 enum emulation_result VAR_9;
 union mips_instruction VAR_10;
 int VAR_11;


 if (FUNC_2(&VAR_8->arch)) {
  VAR_7->exit_reason = VAR_2;
  return VAR_4;
 }


 if (VAR_5 & VAR_0)
  VAR_6 += 1;
 VAR_11 = FUNC_1(VAR_6, VAR_8, &VAR_10.word);
 if (VAR_11) {
  VAR_7->exit_reason = VAR_2;
  return VAR_4;
 }


 VAR_9 = FUNC_3(VAR_10, VAR_5, VAR_7, VAR_8);
 if (VAR_9 == VAR_1) {
  FUNC_0("Emulate load from MMIO space failed\n");
  VAR_7->exit_reason = VAR_2;
 } else {
  VAR_7->exit_reason = VAR_3;
 }
 return VAR_4;
}
