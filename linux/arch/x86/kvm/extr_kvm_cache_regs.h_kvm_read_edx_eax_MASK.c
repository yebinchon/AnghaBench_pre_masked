
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 unsigned int FUNC_0 (struct kvm_vcpu*) ;
 unsigned int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline u64 FUNC_2(struct kvm_vcpu *VAR_0)
{
 return (FUNC_0(VAR_0) & -1u)
  | ((u64)(FUNC_1(VAR_0) & -1u) << 32);
}
