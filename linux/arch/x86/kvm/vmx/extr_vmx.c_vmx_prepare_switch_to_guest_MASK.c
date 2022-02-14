
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct vmcs_host_state {int es_sel; int ds_sel; int ldt_sel; } ;
struct vcpu_vmx {int req_immediate_exit; int guest_msrs_ready; int save_nmsrs; int guest_state_loaded; int msr_guest_kernel_gs_base; void* msr_host_kernel_gs_base; TYPE_2__* loaded_vmcs; TYPE_1__* guest_msrs; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_7__ {unsigned long fsbase; void* gsbase; int gsindex; int fsindex; } ;
struct TYPE_8__ {TYPE_3__ thread; int mm; } ;
struct TYPE_6__ {struct vmcs_host_state host_state; } ;
struct TYPE_5__ {int mask; int data; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int) ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 void* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 unsigned long FUNC_9 (int ) ;
 struct vcpu_vmx* FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct vmcs_host_state*,int ,int ,unsigned long,unsigned long) ;
 int FUNC_12 (int ,int ) ;

void FUNC_13(struct kvm_vcpu *VAR_7)
{
 struct vcpu_vmx *VAR_8 = FUNC_10(VAR_7);
 struct vmcs_host_state *VAR_9;



 unsigned long VAR_10, VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14;

 VAR_8->req_immediate_exit = 0;






 if (!VAR_8->guest_msrs_ready) {
  VAR_8->guest_msrs_ready = 1;
  for (VAR_14 = 0; VAR_14 < VAR_8->save_nmsrs; ++VAR_14)
   FUNC_3(VAR_8->guest_msrs[VAR_14].index,
        VAR_8->guest_msrs[VAR_14].data,
        VAR_8->guest_msrs[VAR_14].mask);

 }
 if (VAR_8->guest_state_loaded)
  return;

 VAR_9 = &VAR_8->loaded_vmcs->host_state;





 VAR_9->ldt_sel = FUNC_2();
 FUNC_8(VAR_5, VAR_12);
 FUNC_8(VAR_6, VAR_13);
 VAR_10 = FUNC_9(VAR_12);
 VAR_11 = FUNC_9(VAR_13);


 FUNC_11(VAR_9, VAR_12, VAR_13, VAR_10, VAR_11);
 VAR_8->guest_state_loaded = 1;
}
