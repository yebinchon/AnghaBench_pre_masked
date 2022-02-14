
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vcpu_svm {TYPE_2__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int int_state; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vcpu_svm* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static u32 FUNC_1(struct kvm_vcpu *VAR_3)
{
 struct vcpu_svm *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5 = 0;

 if (VAR_4->vmcb->control.int_state & VAR_2)
  VAR_5 = VAR_1 | VAR_0;
 return VAR_5;
}
