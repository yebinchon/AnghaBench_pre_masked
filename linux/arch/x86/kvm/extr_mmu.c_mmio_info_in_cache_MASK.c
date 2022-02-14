
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_0, u64 VAR_1, bool VAR_2)
{




 if (FUNC_0(VAR_0))
  return 0;

 if (VAR_2)
  return FUNC_1(VAR_0, VAR_1);

 return FUNC_2(VAR_0, VAR_1);
}
