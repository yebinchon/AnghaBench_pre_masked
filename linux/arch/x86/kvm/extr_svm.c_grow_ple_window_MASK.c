
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcb_control_area {int pause_filter_count; } ;
struct vcpu_svm {TYPE_1__* vmcb; } ;
struct kvm_vcpu {int vcpu_id; } ;
struct TYPE_2__ {struct vmcb_control_area control; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_4)
{
 struct vcpu_svm *VAR_5 = FUNC_2(VAR_4);
 struct vmcb_control_area *VAR_6 = &VAR_5->vmcb->control;
 int VAR_7 = VAR_6->pause_filter_count;

 VAR_6->pause_filter_count = FUNC_0(VAR_7,
       VAR_1,
       VAR_2,
       VAR_3);

 if (VAR_6->pause_filter_count != VAR_7) {
  FUNC_1(VAR_5->vmcb, VAR_0);
  FUNC_3(VAR_4->vcpu_id,
         VAR_6->pause_filter_count, VAR_7);
 }
}
