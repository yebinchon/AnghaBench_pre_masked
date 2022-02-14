
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
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_3)
{
 struct vcpu_svm *VAR_4 = FUNC_2(VAR_3);
 struct vmcb_control_area *VAR_5 = &VAR_4->vmcb->control;
 int VAR_6 = VAR_5->pause_filter_count;

 VAR_5->pause_filter_count =
    FUNC_0(VAR_6,
          VAR_1,
          VAR_2,
          VAR_1);
 if (VAR_5->pause_filter_count != VAR_6) {
  FUNC_1(VAR_4->vmcb, VAR_0);
  FUNC_3(VAR_3->vcpu_id,
         VAR_5->pause_filter_count, VAR_6);
 }
}
