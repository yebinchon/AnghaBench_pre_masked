
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vcpu_vmx {int hv_deadline_tsc; TYPE_1__* loaded_vmcs; scalar_t__ req_immediate_exit; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int hv_timer_soft_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct vcpu_vmx *VAR_3 = FUNC_1(VAR_2);
 u64 VAR_4;
 u32 VAR_5;

 if (VAR_3->req_immediate_exit) {
  FUNC_2(VAR_0, 0);
  VAR_3->loaded_vmcs->hv_timer_soft_disabled = 0;
 } else if (VAR_3->hv_deadline_tsc != -1) {
  VAR_4 = FUNC_0();
  if (VAR_3->hv_deadline_tsc > VAR_4)

   VAR_5 = (u32)((VAR_3->hv_deadline_tsc - VAR_4) >>
    VAR_1);
  else
   VAR_5 = 0;

  FUNC_2(VAR_0, VAR_5);
  VAR_3->loaded_vmcs->hv_timer_soft_disabled = 0;
 } else if (!VAR_3->loaded_vmcs->hv_timer_soft_disabled) {
  FUNC_2(VAR_0, -1);
  VAR_3->loaded_vmcs->hv_timer_soft_disabled = 1;
 }
}
