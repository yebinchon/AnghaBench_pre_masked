
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vmxon; } ;
struct TYPE_4__ {scalar_t__ vm86_active; } ;
struct vcpu_vmx {TYPE_2__ nested; TYPE_1__ rmode; } ;
struct TYPE_6__ {unsigned long cr4; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 () ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct vcpu_vmx*,int ) ;
 int FUNC_10 (struct vcpu_vmx*,int ) ;
 struct vcpu_vmx* FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (int ,unsigned long) ;
 scalar_t__ FUNC_13 () ;

int FUNC_14(struct kvm_vcpu *VAR_17, unsigned long VAR_18)
{
 struct vcpu_vmx *VAR_19 = FUNC_11(VAR_17);





 unsigned long VAR_20;

 VAR_20 = (FUNC_1() & VAR_6) | (VAR_18 & ~VAR_6);
 if (VAR_16)
  VAR_20 |= VAR_4;
 else if (VAR_19->rmode.vm86_active)
  VAR_20 |= VAR_3;
 else
  VAR_20 |= VAR_2;

 if (!FUNC_0(VAR_14) && FUNC_13()) {
  if (VAR_18 & VAR_12) {
   FUNC_10(VAR_19, VAR_5);
   VAR_20 &= ~VAR_12;
  } else if (!FUNC_3(VAR_17) ||
   !FUNC_6(FUNC_2(VAR_17), VAR_5)) {
   FUNC_9(VAR_19, VAR_5);
  }
 }

 if (VAR_18 & VAR_13) {







  if (!FUNC_8(VAR_17) || FUNC_5(VAR_17))
   return 1;
 }

 if (VAR_19->nested.vmxon && !FUNC_7(VAR_17, VAR_18))
  return 1;

 VAR_17->arch.cr4 = VAR_18;

 if (!VAR_16) {
  if (VAR_15) {
   if (!FUNC_4(VAR_17)) {
    VAR_20 &= ~VAR_7;
    VAR_20 |= VAR_9;
   } else if (!(VAR_18 & VAR_7)) {
    VAR_20 &= ~VAR_7;
   }
  }
  if (!FUNC_4(VAR_17))
   VAR_20 &= ~(VAR_11 | VAR_10 | VAR_8);
 }

 FUNC_12(VAR_0, VAR_18);
 FUNC_12(VAR_1, VAR_20);
 return 0;
}
