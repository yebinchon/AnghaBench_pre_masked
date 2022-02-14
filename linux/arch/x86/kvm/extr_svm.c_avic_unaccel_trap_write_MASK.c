
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {struct kvm_lapic* apic; } ;
struct TYPE_10__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_4__ vcpu; TYPE_3__* vmcb; } ;
struct kvm_lapic {int dummy; } ;
struct TYPE_8__ {int exit_info_1; } ;
struct TYPE_9__ {TYPE_2__ control; } ;





 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct kvm_lapic*,int) ;
 int FUNC_4 (struct kvm_lapic*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct vcpu_svm *VAR_1)
{
 struct kvm_lapic *VAR_2 = VAR_1->vcpu.arch.apic;
 u32 VAR_3 = VAR_1->vmcb->control.exit_info_1 &
    VAR_0;

 switch (VAR_3) {
 case 129:
  if (FUNC_0(&VAR_1->vcpu))
   return 0;
  break;
 case 128:
  if (FUNC_2(&VAR_1->vcpu))
   return 0;
  break;
 case 130:
  FUNC_1(&VAR_1->vcpu);
  break;
 default:
  break;
 }

 FUNC_4(VAR_2, VAR_3, FUNC_3(VAR_2, VAR_3));

 return 1;
}
