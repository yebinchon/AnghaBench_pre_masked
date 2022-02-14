
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union mips_instruction {int word; } ;
typedef int u32 ;
struct TYPE_2__ {unsigned long pc; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,struct kvm_vcpu*,int *) ;
 int FUNC_1 (struct kvm_vcpu*,union mips_instruction) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;

__attribute__((used)) static enum emulation_result FUNC_3(u32 VAR_2, u32 *VAR_3,
         struct kvm_vcpu *VAR_4)
{
 enum emulation_result VAR_5;
 union mips_instruction VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_2 & VAR_0)
  VAR_3 += 1;
 VAR_8 = FUNC_0(VAR_3, VAR_4, &VAR_6.word);
 if (VAR_8)
  return VAR_1;





 VAR_7 = VAR_4->arch.pc;
 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (VAR_5 == VAR_1)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_6);
 if (VAR_5 == VAR_1)
  VAR_4->arch.pc = VAR_7;

 return VAR_5;
}
