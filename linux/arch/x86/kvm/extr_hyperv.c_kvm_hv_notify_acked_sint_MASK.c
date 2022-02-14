
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct kvm_vcpu_hv_synic {int * sint_to_gsi; } ;
struct TYPE_2__ {size_t sintx; int direct_mode; scalar_t__ enable; } ;
struct kvm_vcpu_hv_stimer {TYPE_1__ config; scalar_t__ msg_pending; } ;
struct kvm_vcpu_hv {struct kvm_vcpu_hv_stimer* stimer; } ;
struct kvm_vcpu {int vcpu_id; struct kvm* kvm; } ;
struct kvm {int irq_srcu; } ;


 int FUNC_0 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct kvm_vcpu_hv_stimer*,int) ;
 int FUNC_6 (int ,size_t) ;
 struct kvm_vcpu_hv* FUNC_7 (struct kvm_vcpu*) ;
 struct kvm_vcpu_hv_synic* FUNC_8 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_9(struct kvm_vcpu *VAR_0, u32 VAR_1)
{
 struct kvm *VAR_2 = VAR_0->kvm;
 struct kvm_vcpu_hv_synic *VAR_3 = FUNC_8(VAR_0);
 struct kvm_vcpu_hv *VAR_4 = FUNC_7(VAR_0);
 struct kvm_vcpu_hv_stimer *VAR_5;
 int VAR_6, VAR_7;

 FUNC_6(VAR_0->vcpu_id, VAR_1);


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->stimer); VAR_7++) {
  VAR_5 = &VAR_4->stimer[VAR_7];
  if (VAR_5->msg_pending && VAR_5->config.enable &&
      !VAR_5->config.direct_mode &&
      VAR_5->config.sintx == VAR_1)
   FUNC_5(VAR_5, 0);
 }

 VAR_7 = FUNC_3(&VAR_2->irq_srcu);
 VAR_6 = FUNC_1(&VAR_3->sint_to_gsi[VAR_1]);
 if (VAR_6 != -1)
  FUNC_2(VAR_2, VAR_6);
 FUNC_4(&VAR_2->irq_srcu, VAR_7);
}
