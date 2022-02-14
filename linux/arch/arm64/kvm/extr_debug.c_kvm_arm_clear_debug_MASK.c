
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* debug_ptr; } ;
struct kvm_vcpu {int guest_debug; TYPE_2__ arch; } ;
struct TYPE_3__ {int * dbg_wvr; int * dbg_wcr; int * dbg_bvr; int * dbg_bcr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int *,int *) ;

void FUNC_6(struct kvm_vcpu *VAR_1)
{
 FUNC_4(VAR_1->guest_debug);

 if (VAR_1->guest_debug) {
  FUNC_3(VAR_1);





  if (VAR_1->guest_debug & VAR_0) {
   FUNC_2(VAR_1);

   FUNC_5("BKPTS", FUNC_0(),
      &VAR_1->arch.debug_ptr->dbg_bcr[0],
      &VAR_1->arch.debug_ptr->dbg_bvr[0]);

   FUNC_5("WAPTS", FUNC_1(),
      &VAR_1->arch.debug_ptr->dbg_wcr[0],
      &VAR_1->arch.debug_ptr->dbg_wvr[0]);
  }
 }
}
