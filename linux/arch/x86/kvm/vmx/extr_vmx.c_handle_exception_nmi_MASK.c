
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {void* event_exit_inst_len; } ;
struct TYPE_15__ {TYPE_5__ arch; } ;
struct TYPE_12__ {scalar_t__ vm86_active; } ;
struct vcpu_vmx {int idt_vectoring_info; int exit_intr_info; TYPE_6__ vcpu; TYPE_3__ rmode; } ;
struct TYPE_11__ {int host_apf_reason; } ;
struct TYPE_13__ {unsigned long dr6; TYPE_2__ apf; } ;
struct kvm_vcpu {int guest_debug; TYPE_4__ arch; struct kvm_run* run; } ;
struct TYPE_18__ {int exception; int error_code; } ;
struct TYPE_16__ {unsigned long dr6; unsigned long dr7; unsigned long pc; int exception; } ;
struct TYPE_17__ {TYPE_7__ arch; } ;
struct TYPE_10__ {int ndata; int* data; int suberror; } ;
struct kvm_run {TYPE_9__ ex; int exit_reason; TYPE_8__ debug; TYPE_1__ internal; } ;





 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct kvm_vcpu*,int,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct kvm_vcpu*,int ) ;
 int FUNC_11 (struct kvm_vcpu*,int,unsigned long,int *,int ) ;
 int FUNC_12 (struct kvm_vcpu*,int const) ;
 int FUNC_13 (struct kvm_vcpu*,int const,int) ;
 unsigned long FUNC_14 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_15 (struct kvm_vcpu*,int) ;
 int FUNC_16 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_17 (struct kvm_vcpu*) ;
 void* FUNC_18 (int ) ;
 unsigned long FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct kvm_vcpu *VAR_22)
{
 struct vcpu_vmx *VAR_23 = FUNC_17(VAR_22);
 struct kvm_run *VAR_24 = VAR_22->run;
 u32 VAR_25, VAR_26, VAR_27;
 unsigned long VAR_28, VAR_29, VAR_30;
 u32 VAR_31;

 VAR_31 = VAR_23->idt_vectoring_info;
 VAR_25 = VAR_23->exit_intr_info;

 if (FUNC_7(VAR_25) || FUNC_8(VAR_25))
  return 1;

 if (FUNC_6(VAR_25))
  return FUNC_3(VAR_22);

 VAR_27 = 0;
 if (VAR_25 & VAR_8)
  VAR_27 = FUNC_18(VAR_19);

 if (!VAR_23->rmode.vm86_active && FUNC_4(VAR_25)) {
  FUNC_1(!VAR_21);






  if (VAR_27) {
   FUNC_13(VAR_22, VAR_5, VAR_27);
   return 1;
  }
  return FUNC_10(VAR_22, VAR_3);
 }






 if ((VAR_31 & VAR_17) &&
     !(FUNC_9(VAR_25) && !(VAR_27 & VAR_16))) {
  VAR_22->run->exit_reason = VAR_12;
  VAR_22->run->internal.suberror = VAR_15;
  VAR_22->run->internal.ndata = 3;
  VAR_22->run->internal.data[0] = VAR_31;
  VAR_22->run->internal.data[1] = VAR_25;
  VAR_22->run->internal.data[2] = VAR_27;
  return 0;
 }

 if (FUNC_9(VAR_25)) {
  VAR_28 = FUNC_19(VAR_4);

  FUNC_1(!VAR_22->arch.apf.host_apf_reason && VAR_20);
  return FUNC_11(VAR_22, VAR_27, VAR_28, ((void*)0), 0);
 }

 VAR_26 = VAR_25 & VAR_9;

 if (VAR_23->rmode.vm86_active && FUNC_15(VAR_22, VAR_26))
  return FUNC_2(VAR_22, VAR_26, VAR_27);

 switch (VAR_26) {
 case 130:
  FUNC_13(VAR_22, 130, VAR_27);
  return 1;
 case 128:
  VAR_30 = FUNC_19(VAR_4);
  if (!(VAR_22->guest_debug &
        (VAR_13 | VAR_14))) {
   VAR_22->arch.dr6 &= ~VAR_2;
   VAR_22->arch.dr6 |= VAR_30 | VAR_1;
   if (FUNC_5(VAR_25))
    FUNC_0(!FUNC_16(VAR_22));

   FUNC_12(VAR_22, 128);
   return 1;
  }
  VAR_24->debug.arch.dr6 = VAR_30 | VAR_0;
  VAR_24->debug.arch.dr7 = FUNC_19(VAR_7);

 case 129:





  VAR_23->vcpu.arch.event_exit_inst_len =
   FUNC_18(VAR_18);
  VAR_24->exit_reason = VAR_10;
  VAR_29 = FUNC_14(VAR_22);
  VAR_24->debug.arch.pc = FUNC_19(VAR_6) + VAR_29;
  VAR_24->debug.arch.exception = VAR_26;
  break;
 default:
  VAR_24->exit_reason = VAR_11;
  VAR_24->ex.exception = VAR_26;
  VAR_24->ex.error_code = VAR_27;
  break;
 }
 return 0;
}
