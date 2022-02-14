
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reset; unsigned long pc; int r0; scalar_t__ be; } ;
struct TYPE_4__ {int target; int workaround_flags; TYPE_1__ reset_state; int features; } ;
struct kvm_vcpu {int cpu; TYPE_2__ arch; } ;
struct kvm_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 struct kvm_regs VAR_7 ;
 struct kvm_regs VAR_8 ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (int ,struct kvm_regs const*,int) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_18 (struct kvm_vcpu*) ;
 unsigned long* FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_21 (struct kvm_vcpu*) ;

int FUNC_22(struct kvm_vcpu *VAR_9)
{
 const struct kvm_regs *VAR_10;
 int VAR_11 = -VAR_0;
 bool VAR_12;


 FUNC_5(VAR_9);

 FUNC_13();
 VAR_12 = (VAR_9->cpu != -1);
 if (VAR_12)
  FUNC_2(VAR_9);

 if (!FUNC_4(VAR_9)) {
  if (FUNC_16(VAR_4, VAR_9->arch.features)) {
   VAR_11 = FUNC_9(VAR_9);
   if (VAR_11)
    goto out;
  }
 } else {
  FUNC_10(VAR_9);
 }

 if (FUNC_16(VAR_2, VAR_9->arch.features) ||
     FUNC_16(VAR_3, VAR_9->arch.features)) {
  if (FUNC_8(VAR_9))
   goto out;
 }

 switch (VAR_9->arch.target) {
 default:
  if (FUNC_16(VAR_1, VAR_9->arch.features)) {
   if (!FUNC_0())
    goto out;
   VAR_10 = &VAR_8;
  } else {
   VAR_10 = &VAR_7;
  }

  break;
 }


 FUNC_12(FUNC_17(VAR_9), VAR_10, sizeof(*VAR_10));


 FUNC_6(VAR_9);





 if (VAR_9->arch.reset_state.reset) {
  unsigned long VAR_13 = VAR_9->arch.reset_state.pc;


  if (FUNC_18(VAR_9) && (VAR_13 & 1)) {
   VAR_13 &= ~1UL;
   FUNC_21(VAR_9);
  }


  if (VAR_9->arch.reset_state.be)
   FUNC_11(VAR_9);

  *FUNC_19(VAR_9) = VAR_13;
  FUNC_20(VAR_9, 0, VAR_9->arch.reset_state.r0);

  VAR_9->arch.reset_state.reset = 0;
 }


 if (FUNC_3() == VAR_5)
  VAR_9->arch.workaround_flags |= VAR_6;


 VAR_11 = FUNC_7(VAR_9);
out:
 if (VAR_12)
  FUNC_1(VAR_9, FUNC_15());
 FUNC_14();
 return VAR_11;
}
