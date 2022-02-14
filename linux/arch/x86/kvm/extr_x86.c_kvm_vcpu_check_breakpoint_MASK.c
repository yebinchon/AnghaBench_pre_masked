
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int guest_debug_dr7; int dr7; int dr6; int db; int eff_db; } ;
struct kvm_vcpu {int guest_debug; TYPE_3__ arch; struct kvm_run* run; } ;
struct TYPE_4__ {int dr6; unsigned long pc; int exception; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;
struct kvm_run {int exit_reason; TYPE_2__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (unsigned long,int ,int,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct kvm_vcpu *VAR_8, int *VAR_9)
{
 if (FUNC_4(VAR_8->guest_debug & VAR_6) &&
     (VAR_8->arch.guest_debug_dr7 & VAR_3)) {
  struct kvm_run *VAR_10 = VAR_8->run;
  unsigned long VAR_11 = FUNC_0(VAR_8);
  u32 VAR_12 = FUNC_3(VAR_11, 0,
        VAR_8->arch.guest_debug_dr7,
        VAR_8->arch.eff_db);

  if (VAR_12 != 0) {
   VAR_10->debug.arch.dr6 = VAR_12 | VAR_1 | VAR_2;
   VAR_10->debug.arch.pc = VAR_11;
   VAR_10->debug.arch.exception = VAR_0;
   VAR_10->exit_reason = VAR_5;
   *VAR_9 = 0;
   return 1;
  }
 }

 if (FUNC_4(VAR_8->arch.dr7 & VAR_3) &&
     !(FUNC_1(VAR_8) & VAR_7)) {
  unsigned long VAR_13 = FUNC_0(VAR_8);
  u32 VAR_14 = FUNC_3(VAR_13, 0,
        VAR_8->arch.dr7,
        VAR_8->arch.db);

  if (VAR_14 != 0) {
   VAR_8->arch.dr6 &= ~VAR_4;
   VAR_8->arch.dr6 |= VAR_14 | VAR_2;
   FUNC_2(VAR_8, VAR_0);
   *VAR_9 = 1;
   return 1;
  }
 }

 return 0;
}
