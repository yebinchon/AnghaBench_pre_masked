
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 unsigned long long FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = (~0ULL) << FUNC_0(VAR_0);
 return (VAR_1 & VAR_2) == 0;
}
