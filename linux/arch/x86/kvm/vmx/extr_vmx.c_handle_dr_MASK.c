
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int dr6; int switch_db_regs; } ;
struct kvm_vcpu {int guest_debug; TYPE_4__ arch; TYPE_3__* run; } ;
struct TYPE_5__ {int dr6; int dr7; int exception; int pc; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;
struct TYPE_7__ {int exit_reason; TYPE_2__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int,unsigned long*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int,unsigned long) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*,int,int ) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 void* FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct kvm_vcpu *VAR_13)
{
 unsigned long VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_14 = FUNC_12(VAR_7);
 VAR_15 = VAR_14 & VAR_2;


 if (!FUNC_8(VAR_13, VAR_15))
  return 1;


 if (!FUNC_7(VAR_13, 0))
  return 1;
 VAR_16 = FUNC_12(VAR_8);
 if (VAR_16 & VAR_5) {





  if (VAR_13->guest_debug & VAR_11) {
   VAR_13->run->debug.arch.dr6 = VAR_13->arch.dr6;
   VAR_13->run->debug.arch.dr7 = VAR_16;
   VAR_13->run->debug.arch.pc = FUNC_3(VAR_13);
   VAR_13->run->debug.arch.exception = VAR_1;
   VAR_13->run->exit_reason = VAR_10;
   return 0;
  } else {
   VAR_13->arch.dr6 &= ~VAR_6;
   VAR_13->arch.dr6 |= VAR_3 | VAR_4;
   FUNC_4(VAR_13, VAR_1);
   return 1;
  }
 }

 if (VAR_13->guest_debug == 0) {
  FUNC_1(FUNC_11(VAR_13), VAR_0);






  VAR_13->arch.switch_db_regs |= VAR_9;
  return 1;
 }

 VAR_17 = FUNC_0(VAR_14);
 if (VAR_14 & VAR_12) {
  unsigned long VAR_18;

  if (FUNC_2(VAR_13, VAR_15, &VAR_18))
   return 1;
  FUNC_6(VAR_13, VAR_17, VAR_18);
 } else
  if (FUNC_9(VAR_13, VAR_15, FUNC_5(VAR_13, VAR_17)))
   return 1;

 return FUNC_10(VAR_13);
}
