
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct debug_reg {int dbcr0; int dbcr1; int dbcr2; } ;
struct TYPE_4__ {struct debug_reg dbg_reg; } ;
struct kvm_vcpu {int guest_debug; TYPE_1__ arch; } ;
struct TYPE_6__ {TYPE_2__* bp; } ;
struct kvm_guest_debug {int control; TYPE_3__ arch; } ;
struct TYPE_5__ {int type; int addr; } ;


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
 int VAR_18 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int) ;
 scalar_t__ FUNC_1 (struct debug_reg*,int ,int ) ;
 scalar_t__ FUNC_2 (struct debug_reg*,int ,int,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_19,
      struct kvm_guest_debug *VAR_20)
{
 struct debug_reg *VAR_21;
 int VAR_22, VAR_23 = 0, VAR_24 = 0;
 int VAR_25 = 0;

 FUNC_3(VAR_19);

 if (!(VAR_20->control & VAR_15)) {
  VAR_19->arch.dbg_reg.dbcr0 = 0;
  VAR_19->guest_debug = 0;
  FUNC_0(VAR_19, VAR_18, 0);
  goto out;
 }

 FUNC_0(VAR_19, VAR_18, 1);
 VAR_19->guest_debug = VAR_20->control;
 VAR_19->arch.dbg_reg.dbcr0 = 0;

 if (VAR_19->guest_debug & VAR_16)
  VAR_19->arch.dbg_reg.dbcr0 |= VAR_1 | VAR_0;


 VAR_21 = &(VAR_19->arch.dbg_reg);
 VAR_21->dbcr1 = VAR_2 | VAR_3 | VAR_4 |
     VAR_5;
 VAR_21->dbcr2 = VAR_6 | VAR_7;


 if (!(VAR_19->guest_debug & VAR_17))
  goto out;

 VAR_25 = -VAR_8;
 for (VAR_22 = 0; VAR_22 < (VAR_10 + VAR_9); VAR_22++) {
  uint64_t VAR_26 = VAR_20->arch.bp[VAR_22].addr;
  uint32_t VAR_27 = VAR_20->arch.bp[VAR_22].type;

  if (VAR_27 == VAR_12)
   continue;

  if (VAR_27 & ~(VAR_13 |
        VAR_14 |
        VAR_11))
   goto out;

  if (VAR_27 & VAR_11) {

   if (FUNC_1(VAR_21, VAR_26, VAR_23++))
    goto out;
  } else {

   if (FUNC_2(VAR_21, VAR_26,
       VAR_27, VAR_24++))
    goto out;
  }
 }

 VAR_25 = 0;
out:
 FUNC_4(VAR_19);
 return VAR_25;
}
