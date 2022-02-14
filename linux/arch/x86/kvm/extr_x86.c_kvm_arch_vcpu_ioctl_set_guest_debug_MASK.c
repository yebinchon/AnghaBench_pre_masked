
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pending; } ;
struct TYPE_7__ {scalar_t__ singlestep_rip; int * db; int * eff_db; int guest_debug_dr7; TYPE_1__ exception; } ;
struct kvm_vcpu {int guest_debug; TYPE_3__ arch; } ;
struct TYPE_6__ {int * debugreg; } ;
struct kvm_guest_debug {int control; TYPE_2__ arch; } ;
struct TYPE_8__ {int (* update_bp_intercept ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 TYPE_4__* VAR_10 ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;

int FUNC_9(struct kvm_vcpu *VAR_11,
     struct kvm_guest_debug *VAR_12)
{
 unsigned long VAR_13;
 int VAR_14, VAR_15;

 FUNC_7(VAR_11);

 if (VAR_12->control & (VAR_5 | VAR_4)) {
  VAR_15 = -VAR_2;
  if (VAR_11->arch.exception.pending)
   goto out;
  if (VAR_12->control & VAR_5)
   FUNC_2(VAR_11, VAR_1);
  else
   FUNC_2(VAR_11, VAR_0);
 }





 VAR_13 = FUNC_1(VAR_11);

 VAR_11->guest_debug = VAR_12->control;
 if (!(VAR_11->guest_debug & VAR_3))
  VAR_11->guest_debug = 0;

 if (VAR_11->guest_debug & VAR_7) {
  for (VAR_14 = 0; VAR_14 < VAR_8; ++VAR_14)
   VAR_11->arch.eff_db[VAR_14] = VAR_12->arch.debugreg[VAR_14];
  VAR_11->arch.guest_debug_dr7 = VAR_12->arch.debugreg[7];
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
   VAR_11->arch.eff_db[VAR_14] = VAR_11->arch.db[VAR_14];
 }
 FUNC_5(VAR_11);

 if (VAR_11->guest_debug & VAR_6)
  VAR_11->arch.singlestep_rip = FUNC_3(VAR_11) +
   FUNC_0(VAR_11, VAR_9);





 FUNC_4(VAR_11, VAR_13);

 VAR_10->update_bp_intercept(VAR_11);

 VAR_15 = 0;

out:
 FUNC_8(VAR_11);
 return VAR_15;
}
