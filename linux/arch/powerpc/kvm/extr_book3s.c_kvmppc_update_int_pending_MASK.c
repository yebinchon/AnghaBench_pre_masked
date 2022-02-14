
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;

__attribute__((used)) static inline void FUNC_2(struct kvm_vcpu *VAR_0,
   unsigned long VAR_1, unsigned long VAR_2)
{
 if (FUNC_0(VAR_0->kvm))
  return;
 if (VAR_1)
  FUNC_1(VAR_0, 1);
 else if (VAR_2)
  FUNC_1(VAR_0, 0);
}
