
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0, gpa_t VAR_1)
{
 return FUNC_0(VAR_1) && !(VAR_1 >> FUNC_1(VAR_0));
}
