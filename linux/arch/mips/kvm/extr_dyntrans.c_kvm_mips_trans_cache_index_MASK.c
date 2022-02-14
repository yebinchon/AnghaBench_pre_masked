
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union mips_instruction {int member_0; } ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int *,union mips_instruction) ;

int FUNC_1(union mips_instruction VAR_0, u32 *VAR_1,
          struct kvm_vcpu *VAR_2)
{
 union mips_instruction VAR_3 = { 0 };


 return FUNC_0(VAR_2, VAR_1, VAR_3);
}
