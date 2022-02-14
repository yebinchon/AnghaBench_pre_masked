
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mp_state; TYPE_1__* apic; scalar_t__ smi_pending; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_mp_state {scalar_t__ mp_state; } ;
struct TYPE_3__ {int pending_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;

int FUNC_6(struct kvm_vcpu *VAR_6,
        struct kvm_mp_state *VAR_7)
{
 int VAR_8 = -VAR_0;

 FUNC_4(VAR_6);

 if (!FUNC_2(VAR_6) &&
     VAR_7->mp_state != VAR_3)
  goto out;


 if ((FUNC_0(VAR_6) || VAR_6->arch.smi_pending) &&
     (VAR_7->mp_state == VAR_4 ||
      VAR_7->mp_state == VAR_2))
  goto out;

 if (VAR_7->mp_state == VAR_4) {
  VAR_6->arch.mp_state = VAR_2;
  FUNC_3(VAR_1, &VAR_6->arch.apic->pending_events);
 } else
  VAR_6->arch.mp_state = VAR_7->mp_state;
 FUNC_1(VAR_5, VAR_6);

 VAR_8 = 0;
out:
 FUNC_5(VAR_6);
 return VAR_8;
}
