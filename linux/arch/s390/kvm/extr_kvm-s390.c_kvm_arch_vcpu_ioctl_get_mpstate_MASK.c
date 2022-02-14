
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mp_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_2,
        struct kvm_mp_state *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_2);


 VAR_4 = FUNC_0(VAR_2) ? VAR_1 :
          VAR_0;

 FUNC_2(VAR_2);
 return VAR_4;
}
