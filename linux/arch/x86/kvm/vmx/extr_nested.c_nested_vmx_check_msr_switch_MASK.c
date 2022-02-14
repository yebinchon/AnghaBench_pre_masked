
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vmx_msr_entry {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1,
           u32 VAR_2, u64 VAR_3)
{
 int VAR_4;

 if (VAR_2 == 0)
  return 0;
 VAR_4 = FUNC_1(VAR_1);
 if (!FUNC_0(VAR_3, 16) || VAR_3 >> VAR_4 ||
     (VAR_3 + VAR_2 * sizeof(struct vmx_msr_entry) - 1) >> VAR_4)
  return -VAR_0;

 return 0;
}
