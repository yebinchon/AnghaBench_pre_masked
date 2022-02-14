
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ last_bp; } ;
struct TYPE_5__ {TYPE_1__ guestdbg; } ;
struct kvm_vcpu {int guest_debug; TYPE_2__ arch; } ;
struct kvm_guest_debug {int control; } ;
struct TYPE_6__ {int has_gpere; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_guest_debug*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 TYPE_3__ VAR_5 ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;

int FUNC_6(struct kvm_vcpu *VAR_6,
     struct kvm_guest_debug *VAR_7)
{
 int VAR_8 = 0;

 FUNC_4(VAR_6);

 VAR_6->guest_debug = 0;
 FUNC_0(VAR_6);

 if (VAR_7->control & ~VAR_4) {
  VAR_8 = -VAR_1;
  goto out;
 }
 if (!VAR_5.has_gpere) {
  VAR_8 = -VAR_1;
  goto out;
 }

 if (VAR_7->control & VAR_2) {
  VAR_6->guest_debug = VAR_7->control;

  FUNC_3(VAR_6, VAR_0);

  if (VAR_7->control & VAR_3)
   VAR_8 = FUNC_2(VAR_6, VAR_7);
 } else {
  FUNC_1(VAR_6, VAR_0);
  VAR_6->arch.guestdbg.last_bp = 0;
 }

 if (VAR_8) {
  VAR_6->guest_debug = 0;
  FUNC_0(VAR_6);
  FUNC_1(VAR_6, VAR_0);
 }

out:
 FUNC_5(VAR_6);
 return VAR_8;
}
