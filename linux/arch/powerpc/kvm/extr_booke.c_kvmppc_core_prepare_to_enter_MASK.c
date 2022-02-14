
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 () ;

int FUNC_9(struct kvm_vcpu *VAR_3)
{
 int VAR_4 = 0;
 FUNC_0(!FUNC_2());

 FUNC_6(VAR_3);

 if (FUNC_4(VAR_3)) {

  return 1;
 }

 if (VAR_3->arch.shared->msr & VAR_2) {
  FUNC_8();
  FUNC_5(VAR_3);
  FUNC_3(VAR_1, VAR_3);
  FUNC_1();

  FUNC_7(VAR_3, VAR_0);
  VAR_4 = 1;
 };

 return VAR_4;
}
