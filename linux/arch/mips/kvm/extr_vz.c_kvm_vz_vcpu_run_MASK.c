
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* vcpu_run ) (struct kvm_run*,struct kvm_vcpu*) ;} ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_run {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct kvm_run*,struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_9(struct kvm_run *VAR_0, struct kvm_vcpu *VAR_1)
{
 int VAR_2 = FUNC_7();
 int VAR_3;

 FUNC_1(VAR_1);

 FUNC_0(VAR_1, FUNC_6());

 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_2);
 FUNC_4(VAR_1);

 VAR_3 = VAR_1->arch.vcpu_run(VAR_0, VAR_1);

 FUNC_5(VAR_1);

 return VAR_3;
}
