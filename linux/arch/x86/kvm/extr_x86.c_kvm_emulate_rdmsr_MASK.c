
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ,unsigned int*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned int) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,unsigned int) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct kvm_vcpu *VAR_0)
{
 u32 VAR_1 = FUNC_3(VAR_0);
 u64 VAR_2;

 if (FUNC_0(VAR_0, VAR_1, &VAR_2)) {
  FUNC_7(VAR_1);
  FUNC_1(VAR_0, 0);
  return 1;
 }

 FUNC_6(VAR_1, VAR_2);

 FUNC_2(VAR_0, VAR_2 & -1u);
 FUNC_4(VAR_0, (VAR_2 >> 32) & -1u);
 return FUNC_5(VAR_0);
}
