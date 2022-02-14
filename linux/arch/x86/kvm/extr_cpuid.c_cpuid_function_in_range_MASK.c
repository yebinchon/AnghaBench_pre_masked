
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_cpuid_entry2 {int eax; } ;


 struct kvm_cpuid_entry2* FUNC_0 (struct kvm_vcpu*,int,int ) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_0, u32 VAR_1)
{
 struct kvm_cpuid_entry2 *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1 & 0x80000000, 0);
 return VAR_2 && VAR_1 <= VAR_2->eax;
}
