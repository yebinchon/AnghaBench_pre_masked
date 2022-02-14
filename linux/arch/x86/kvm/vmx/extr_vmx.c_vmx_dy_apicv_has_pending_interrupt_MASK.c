
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct pi_desc*) ;
 scalar_t__ FUNC_1 (struct pi_desc*) ;
 scalar_t__ FUNC_2 (struct pi_desc*) ;
 struct pi_desc* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_4(struct kvm_vcpu *VAR_0)
{
 struct pi_desc *VAR_1 = FUNC_3(VAR_0);

 return FUNC_1(VAR_1) ||
  (FUNC_2(VAR_1) && !FUNC_0(VAR_1));
}
