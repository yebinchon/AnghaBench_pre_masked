
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,struct vmcs12*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,struct vmcs12*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_1,
         struct vmcs12 *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2) ||
     FUNC_2(VAR_1, VAR_2) ||
     FUNC_0(VAR_1, VAR_2))
  return -VAR_0;

 return 0;
}
