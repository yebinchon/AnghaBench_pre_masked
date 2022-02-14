
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_0)
{
 u64 VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_0, VAR_2, VAR_1) == 0)
  return FUNC_3(VAR_0);
 return 1;
}
