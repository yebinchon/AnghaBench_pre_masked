
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_run {int dummy; } ;
struct coproc_params {int dummy; } ;


 struct coproc_params FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,struct coproc_params*,int *) ;

int FUNC_4(struct kvm_vcpu *VAR_0, struct kvm_run *VAR_1)
{
 struct coproc_params VAR_2 = FUNC_0(VAR_0);


 FUNC_3(VAR_0, &VAR_2, ((void*)0));


 FUNC_1(VAR_0, FUNC_2(VAR_0));
 return 1;
}
