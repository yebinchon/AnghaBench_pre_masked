
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int nip; } ;
struct debug_reg {int dbcr0; int dac2; int dac1; } ;
struct TYPE_8__ {int dbsr; TYPE_2__ regs; TYPE_1__* shared; struct debug_reg dbg_reg; } ;
struct kvm_vcpu {scalar_t__ guest_debug; TYPE_3__ arch; } ;
struct TYPE_9__ {int address; int status; } ;
struct TYPE_10__ {TYPE_4__ arch; } ;
struct kvm_run {TYPE_5__ debug; } ;
struct TYPE_6__ {int msr; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_run *VAR_18, struct kvm_vcpu *VAR_19)
{
 struct debug_reg *VAR_20 = &(VAR_19->arch.dbg_reg);
 u32 VAR_21 = VAR_19->arch.dbsr;

 if (VAR_19->guest_debug == 0) {




  if (VAR_21 & VAR_9) {
   VAR_21 &= ~VAR_9;
   if (!VAR_21)
    return VAR_16;
  }

  if (VAR_21 && (VAR_19->arch.shared->msr & VAR_15) &&
       (VAR_19->arch.dbg_reg.dbcr0 & VAR_0))
   FUNC_0(VAR_19);


  if ((VAR_21 & VAR_10) && !(VAR_19->arch.shared->msr & VAR_15))
   FUNC_1(VAR_19, VAR_11);

  return VAR_16;
 }





 VAR_19->arch.dbsr = 0;
 VAR_18->debug.arch.status = 0;
 VAR_18->debug.arch.address = VAR_19->arch.regs.nip;

 if (VAR_21 & (VAR_5 | VAR_6 | VAR_7 | VAR_8)) {
  VAR_18->debug.arch.status |= VAR_12;
 } else {
  if (VAR_21 & (VAR_2 | VAR_4))
   VAR_18->debug.arch.status |= VAR_14;
  else if (VAR_21 & (VAR_1 | VAR_3))
   VAR_18->debug.arch.status |= VAR_13;
  if (VAR_21 & (VAR_1 | VAR_2))
   VAR_18->debug.arch.address = VAR_20->dac1;
  else if (VAR_21 & (VAR_3 | VAR_4))
   VAR_18->debug.arch.address = VAR_20->dac2;
 }

 return VAR_17;
}
