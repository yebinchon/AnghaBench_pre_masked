
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmcs_host_state {int gs_sel; int fs_sel; int ds_sel; int es_sel; scalar_t__ ldt_sel; } ;
struct TYPE_5__ {int host_state_reload; } ;
struct TYPE_6__ {TYPE_2__ stat; } ;
struct vcpu_vmx {int guest_state_loaded; int guest_msrs_ready; int msr_host_kernel_gs_base; int msr_guest_kernel_gs_base; TYPE_3__ vcpu; TYPE_1__* loaded_vmcs; } ;
struct TYPE_4__ {struct vmcs_host_state host_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct vcpu_vmx *VAR_5)
{
 struct vmcs_host_state *VAR_6;

 if (!VAR_5->guest_state_loaded)
  return;

 VAR_6 = &VAR_5->loaded_vmcs->host_state;

 ++VAR_5->vcpu.stat.host_state_reload;




 if (VAR_6->ldt_sel || (VAR_6->gs_sel & 7)) {
  FUNC_1(VAR_6->ldt_sel);



  FUNC_4(VAR_4, VAR_6->gs_sel);

 }
 if (VAR_6->fs_sel & 7)
  FUNC_4(VAR_3, VAR_6->fs_sel);






 FUNC_0();



 FUNC_2(FUNC_5());
 VAR_5->guest_state_loaded = 0;
 VAR_5->guest_msrs_ready = 0;
}
