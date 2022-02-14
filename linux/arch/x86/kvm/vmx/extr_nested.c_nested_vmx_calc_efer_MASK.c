
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct vmcs12 {int vm_entry_controls; int guest_ia32_efer; } ;
struct TYPE_5__ {int efer; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct TYPE_4__ {scalar_t__ nested_run_pending; } ;
struct vcpu_vmx {TYPE_3__ vcpu; TYPE_1__ nested; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u64 FUNC_0(struct vcpu_vmx *VAR_4, struct vmcs12 *VAR_5)
{
 if (VAR_4->nested.nested_run_pending &&
     (VAR_5->vm_entry_controls & VAR_3))
  return VAR_5->guest_ia32_efer;
 else if (VAR_5->vm_entry_controls & VAR_2)
  return VAR_4->vcpu.arch.efer | (VAR_0 | VAR_1);
 else
  return VAR_4->vcpu.arch.efer & ~(VAR_0 | VAR_1);
}
