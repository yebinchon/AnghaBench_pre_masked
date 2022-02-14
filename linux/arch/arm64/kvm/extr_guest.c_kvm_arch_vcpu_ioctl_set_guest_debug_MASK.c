
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int external_debug_state; } ;
struct kvm_vcpu {int guest_debug; TYPE_1__ arch; } ;
struct kvm_guest_debug {int control; int arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;

int FUNC_1(struct kvm_vcpu *VAR_4,
     struct kvm_guest_debug *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(VAR_4, VAR_5->control);

 if (VAR_5->control & ~VAR_3) {
  VAR_6 = -VAR_0;
  goto out;
 }

 if (VAR_5->control & VAR_1) {
  VAR_4->guest_debug = VAR_5->control;


  if (VAR_4->guest_debug & VAR_2) {
   VAR_4->arch.external_debug_state = VAR_5->arch;
  }

 } else {

  VAR_4->guest_debug = 0;
 }

out:
 return VAR_6;
}
