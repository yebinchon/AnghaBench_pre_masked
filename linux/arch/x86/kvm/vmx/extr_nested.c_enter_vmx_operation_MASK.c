
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int function; } ;
struct TYPE_7__ {int vmcs02_initialized; int vmxon; int vmcs02; void* cached_vmcs12; void* cached_shadow_vmcs12; int vpid02; TYPE_4__ preemption_timer; } ;
struct TYPE_5__ {scalar_t__ ctl; } ;
struct TYPE_6__ {TYPE_1__ guest; } ;
struct vcpu_vmx {TYPE_3__ nested; TYPE_2__ pt_desc; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (struct vcpu_vmx*) ;
 struct vcpu_vmx* FUNC_8 (struct kvm_vcpu*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_9)
{
 struct vcpu_vmx *VAR_10 = FUNC_8(VAR_9);
 int VAR_11;

 VAR_11 = FUNC_0(&VAR_10->nested.vmcs02);
 if (VAR_11 < 0)
  goto out_vmcs02;

 VAR_10->nested.cached_vmcs12 = FUNC_6(VAR_5, VAR_2);
 if (!VAR_10->nested.cached_vmcs12)
  goto out_cached_vmcs12;

 VAR_10->nested.cached_shadow_vmcs12 = FUNC_6(VAR_5, VAR_2);
 if (!VAR_10->nested.cached_shadow_vmcs12)
  goto out_cached_shadow_vmcs12;

 if (VAR_6 && !FUNC_1(VAR_9))
  goto out_shadow_vmcs;

 FUNC_4(&VAR_10->nested.preemption_timer, VAR_0,
       VAR_3);
 VAR_10->nested.preemption_timer.function = VAR_8;

 VAR_10->nested.vpid02 = FUNC_2();

 VAR_10->nested.vmcs02_initialized = 0;
 VAR_10->nested.vmxon = 1;

 if (VAR_7 == VAR_4) {
  VAR_10->pt_desc.guest.ctl = 0;
  FUNC_7(VAR_10);
 }

 return 0;

out_shadow_vmcs:
 FUNC_5(VAR_10->nested.cached_shadow_vmcs12);

out_cached_shadow_vmcs12:
 FUNC_5(VAR_10->nested.cached_vmcs12);

out_cached_vmcs12:
 FUNC_3(&VAR_10->nested.vmcs02);

out_vmcs02:
 return -VAR_1;
}
