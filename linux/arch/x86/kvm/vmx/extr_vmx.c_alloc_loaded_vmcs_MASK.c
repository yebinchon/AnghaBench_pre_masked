
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcs_host_state {int dummy; } ;
struct vmcs_controls_shadow {int dummy; } ;
struct loaded_vmcs {int hv_timer_soft_disabled; unsigned long* msr_bitmap; unsigned long host_state; unsigned long controls_shadow; scalar_t__ vmcs; int * shadow_vmcs; } ;
struct TYPE_3__ {int msr_bitmap; } ;
struct hv_enlightened_vmcs {TYPE_1__ hv_enlightenments_control; } ;
struct TYPE_4__ {int nested_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (struct loaded_vmcs*) ;
 int FUNC_5 (struct loaded_vmcs*) ;
 int FUNC_6 (unsigned long*,int,int) ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_7 (int *) ;

int FUNC_8(struct loaded_vmcs *VAR_7)
{
 VAR_7->vmcs = FUNC_2(0);
 if (!VAR_7->vmcs)
  return -VAR_1;

 VAR_7->shadow_vmcs = ((void*)0);
 VAR_7->hv_timer_soft_disabled = 0;
 FUNC_5(VAR_7);

 if (FUNC_3()) {
  VAR_7->msr_bitmap = (unsigned long *)
    FUNC_1(VAR_2);
  if (!VAR_7->msr_bitmap)
   goto out_vmcs;
  FUNC_6(VAR_7->msr_bitmap, 0xff, VAR_4);

  if (FUNC_0(VAR_0) &&
      FUNC_7(&VAR_5) &&
      (VAR_6.nested_features & VAR_3)) {
   struct hv_enlightened_vmcs *VAR_8 =
    (struct hv_enlightened_vmcs *)VAR_7->vmcs;

   VAR_8->hv_enlightenments_control.msr_bitmap = 1;
  }
 }

 FUNC_6(&VAR_7->host_state, 0, sizeof(struct vmcs_host_state));
 FUNC_6(&VAR_7->controls_shadow, 0,
  sizeof(struct vmcs_controls_shadow));

 return 0;

out_vmcs:
 FUNC_4(VAR_7);
 return -VAR_1;
}
