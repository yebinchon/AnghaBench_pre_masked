
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcs_host_state {int es_sel; int ds_sel; int ldt_sel; int gs_base; int fs_base; int gs_sel; int fs_sel; } ;
struct vcpu_vmx {TYPE_1__* loaded_vmcs; int guest_state_loaded; } ;
struct loaded_vmcs {struct vmcs_host_state host_state; } ;
struct TYPE_2__ {struct vmcs_host_state host_state; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vmcs_host_state*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vcpu_vmx *VAR_0,
         struct loaded_vmcs *VAR_1)
{
 struct vmcs_host_state *VAR_2, *VAR_3;

 if (FUNC_0(!VAR_0->guest_state_loaded))
  return;

 VAR_3 = &VAR_1->host_state;
 VAR_2 = &VAR_0->loaded_vmcs->host_state;

 FUNC_1(VAR_2, VAR_3->fs_sel, VAR_3->gs_sel, VAR_3->fs_base, VAR_3->gs_base);
 VAR_2->ldt_sel = VAR_3->ldt_sel;




}
