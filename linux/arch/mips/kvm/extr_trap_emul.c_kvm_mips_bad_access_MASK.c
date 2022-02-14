
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_run {int dummy; } ;


 int FUNC_0 (int ,int *,struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_1 (int ,int *,struct kvm_run*,struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(u32 VAR_0, u32 *VAR_1, struct kvm_run *VAR_2,
          struct kvm_vcpu *VAR_3, bool VAR_4)
{
 if (VAR_4)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
