
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(struct kvm_vcpu *VAR_0)
{
 u32 VAR_1 = FUNC_1(VAR_0);
 u64 VAR_2 = FUNC_2(VAR_0);

 if (FUNC_3(VAR_0, VAR_1, VAR_2)) {
  FUNC_6(VAR_1, VAR_2);
  FUNC_0(VAR_0, 0);
  return 1;
 }

 FUNC_5(VAR_1, VAR_2);
 return FUNC_4(VAR_0);
}
