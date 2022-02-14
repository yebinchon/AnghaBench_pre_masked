
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dbg_wvr; int * dbg_wcr; int * dbg_bvr; int * dbg_bcr; } ;
struct TYPE_4__ {int flags; int mdcr_el2; TYPE_1__ vcpu_debug_state; TYPE_1__* debug_ptr; TYPE_1__ external_debug_state; } ;
struct kvm_vcpu {int guest_debug; TYPE_2__ arch; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_16 ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (char*,unsigned long) ;
 int FUNC_6 (char*,int ,int *,int *) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 unsigned long* FUNC_8 (struct kvm_vcpu*) ;
 unsigned long FUNC_9 (struct kvm_vcpu*,int ) ;
 int FUNC_10 (struct kvm_vcpu*,unsigned long,int ) ;

void FUNC_11(struct kvm_vcpu *VAR_17)
{
 bool VAR_18 = !(VAR_17->arch.flags & VAR_4);
 unsigned long VAR_19;

 FUNC_7(VAR_17, VAR_17->guest_debug);





 VAR_17->arch.mdcr_el2 = FUNC_1(VAR_16) & VAR_7;
 VAR_17->arch.mdcr_el2 |= (VAR_12 |
    VAR_14 |
    VAR_13 |
    VAR_11 |
    VAR_10);


 if (VAR_17->guest_debug) {

  VAR_17->arch.mdcr_el2 |= VAR_9;


  FUNC_4(VAR_17);
  if (VAR_17->guest_debug & VAR_5) {
   *FUNC_8(VAR_17) |= VAR_3;
   VAR_19 = FUNC_9(VAR_17, VAR_15);
   VAR_19 |= VAR_2;
   FUNC_10(VAR_17, VAR_19, VAR_15);
  } else {
   VAR_19 = FUNC_9(VAR_17, VAR_15);
   VAR_19 &= ~VAR_2;
   FUNC_10(VAR_17, VAR_19, VAR_15);
  }

  FUNC_5("SPSR_EL2", *FUNC_8(VAR_17));
  if (VAR_17->guest_debug & VAR_6) {

   VAR_19 = FUNC_9(VAR_17, VAR_15);
   VAR_19 |= VAR_1;
   FUNC_10(VAR_17, VAR_19, VAR_15);

   VAR_17->arch.debug_ptr = &VAR_17->arch.external_debug_state;
   VAR_17->arch.flags |= VAR_4;
   VAR_18 = 1;

   FUNC_6("BKPTS", FUNC_2(),
      &VAR_17->arch.debug_ptr->dbg_bcr[0],
      &VAR_17->arch.debug_ptr->dbg_bvr[0]);

   FUNC_6("WAPTS", FUNC_3(),
      &VAR_17->arch.debug_ptr->dbg_wcr[0],
      &VAR_17->arch.debug_ptr->dbg_wvr[0]);
  }
 }

 FUNC_0(!VAR_17->guest_debug &&
  VAR_17->arch.debug_ptr != &VAR_17->arch.vcpu_debug_state);


 if (VAR_18)
  VAR_17->arch.mdcr_el2 |= VAR_8;


 if (FUNC_9(VAR_17, VAR_15) & (VAR_0 | VAR_1))
  VAR_17->arch.flags |= VAR_4;

 FUNC_5("MDCR_EL2", VAR_17->arch.mdcr_el2);
 FUNC_5("MDSCR_EL1", FUNC_9(VAR_17, VAR_15));
}
