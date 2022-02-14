
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_1)
{
 return FUNC_0(VAR_1) && VAR_1->mode == VAR_0;
}
