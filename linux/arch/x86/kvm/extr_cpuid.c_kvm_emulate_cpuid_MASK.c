
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int *,int *,int *,int *,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*,int ) ;
 int FUNC_9 (struct kvm_vcpu*) ;

int FUNC_10(struct kvm_vcpu *VAR_0)
{
 u32 VAR_1, VAR_2, VAR_3, VAR_4;

 if (FUNC_0(VAR_0) && !FUNC_8(VAR_0, 0))
  return 1;

 VAR_1 = FUNC_2(VAR_0);
 VAR_3 = FUNC_5(VAR_0);
 FUNC_1(VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, 1);
 FUNC_3(VAR_0, VAR_1);
 FUNC_4(VAR_0, VAR_2);
 FUNC_6(VAR_0, VAR_3);
 FUNC_7(VAR_0, VAR_4);
 return FUNC_9(VAR_0);
}
