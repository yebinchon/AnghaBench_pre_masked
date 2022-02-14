
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* vcpu_run ) (struct kvm_run*,struct kvm_vcpu*) ;int cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_run {int dummy; } ;
struct TYPE_4__ {int mm; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct kvm_run*,struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_12(struct kvm_run *VAR_1, struct kvm_vcpu *VAR_2)
{
 int VAR_3 = FUNC_10();
 int VAR_4;


 FUNC_3(VAR_2,
        FUNC_6(VAR_2->arch.cop0));

 FUNC_7(VAR_1, VAR_2);





 FUNC_8();


 FUNC_2();






 FUNC_5(VAR_3);

 VAR_4 = VAR_2->arch.vcpu_run(VAR_1, VAR_2);


 VAR_3 = FUNC_10();


 FUNC_0(VAR_0->mm);
 FUNC_4(VAR_3);

 FUNC_1();

 FUNC_9();

 return VAR_4;
}
