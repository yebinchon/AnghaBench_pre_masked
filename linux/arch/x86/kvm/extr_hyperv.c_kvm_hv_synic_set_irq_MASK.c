
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu_hv_synic {int dummy; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 struct kvm_vcpu_hv_synic* FUNC_0 (struct kvm*,int ) ;
 int FUNC_1 (struct kvm_vcpu_hv_synic*,int ) ;

int FUNC_2(struct kvm *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct kvm_vcpu_hv_synic *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_3);
}
