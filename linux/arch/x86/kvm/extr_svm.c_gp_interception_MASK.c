
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvm_vcpu {int dummy; } ;
struct vcpu_svm {TYPE_2__* vmcb; struct kvm_vcpu vcpu; } ;
struct TYPE_3__ {scalar_t__ exit_info_1; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct vcpu_svm *VAR_3)
{
 struct kvm_vcpu *VAR_4 = &VAR_3->vcpu;
 u32 VAR_5 = VAR_3->vmcb->control.exit_info_1;

 FUNC_0(!VAR_2);





 if (VAR_5) {
  FUNC_2(VAR_4, VAR_1, VAR_5);
  return 1;
 }
 return FUNC_1(VAR_4, VAR_0);
}
