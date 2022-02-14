
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ enable; } ;
struct kvm_vcpu_hv_stimer {scalar_t__ exp_time; int msg_pending; scalar_t__ count; TYPE_1__ config; } ;
struct kvm_vcpu_hv {struct kvm_vcpu_hv_stimer* stimer; int stimer_pending_bitmap; } ;
struct kvm_vcpu {int kvm; } ;


 int FUNC_0 (struct kvm_vcpu_hv_stimer*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_3 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_4 (struct kvm_vcpu_hv_stimer*) ;
 scalar_t__ FUNC_5 (int,int ) ;
 struct kvm_vcpu_hv* FUNC_6 (struct kvm_vcpu*) ;

void FUNC_7(struct kvm_vcpu *VAR_0)
{
 struct kvm_vcpu_hv *VAR_1 = FUNC_6(VAR_0);
 struct kvm_vcpu_hv_stimer *VAR_2;
 u64 VAR_3, VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1->stimer); VAR_5++)
  if (FUNC_5(VAR_5, VAR_1->stimer_pending_bitmap)) {
   VAR_2 = &VAR_1->stimer[VAR_5];
   if (VAR_2->config.enable) {
    VAR_4 = VAR_2->exp_time;

    if (VAR_4) {
     VAR_3 =
      FUNC_1(VAR_0->kvm);
     if (VAR_3 >= VAR_4)
      FUNC_3(VAR_2);
    }

    if ((VAR_2->config.enable) &&
        VAR_2->count) {
     if (!VAR_2->msg_pending)
      FUNC_4(VAR_2);
    } else
     FUNC_2(VAR_2);
   }
  }
}
