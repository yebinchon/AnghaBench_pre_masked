
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_0)
{
 if (FUNC_0() && (FUNC_1(VAR_0) > 48))
  return 5;
 return 4;
}
