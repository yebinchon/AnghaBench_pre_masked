
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int msr; } ;
struct TYPE_11__ {int mmio_vsx_copy_nums; int mmio_sp64_extend; int mmio_vmx_copy_nums; int mmio_vmx_offset; unsigned long vaddr_accessed; unsigned long paddr_accessed; void* mmio_copy_type; TYPE_6__ regs; TYPE_1__* shared; scalar_t__ mmio_host_swabbed; scalar_t__ mmio_sign_extend; scalar_t__ mmio_vsx_offset; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_4__* kvm; struct kvm_run* run; } ;
struct kvm_run {int dummy; } ;
struct instruction_op {int type; int reg; int vsx_flags; int element_size; int ea; int update_reg; int val; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;
struct TYPE_9__ {TYPE_2__* kvm_ops; } ;
struct TYPE_10__ {TYPE_3__ arch; } ;
struct TYPE_8__ {int (* giveup_ext ) (struct kvm_vcpu*,int ) ;} ;
struct TYPE_7__ {int msr; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;




 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;




 int VAR_23 ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_2 (struct instruction_op*,TYPE_6__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*,int ) ;
 int FUNC_10 (struct kvm_vcpu*,int ,int *) ;
 scalar_t__ FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_run*,struct kvm_vcpu*,int,int,int) ;
 int FUNC_13 (struct kvm_run*,struct kvm_vcpu*,int,int,int) ;
 int FUNC_14 (struct kvm_run*,struct kvm_vcpu*,int ,int,int) ;
 int FUNC_15 (struct kvm_run*,struct kvm_vcpu*,int,int,int) ;
 int FUNC_16 (struct kvm_run*,struct kvm_vcpu*,int,int,int) ;
 int FUNC_17 (struct kvm_run*,struct kvm_vcpu*,int,int,int,int) ;
 int FUNC_18 (struct kvm_run*,struct kvm_vcpu*,int,int,int) ;
 int FUNC_19 (struct kvm_vcpu*,int ) ;
 int FUNC_20 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_21 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_22 (struct kvm_vcpu*,int ) ;
 int FUNC_23 (struct kvm_vcpu*,int ) ;
 int FUNC_24 (struct kvm_vcpu*,int ) ;
 int FUNC_25 (int ,scalar_t__,int) ;

int FUNC_26(struct kvm_vcpu *VAR_27)
{
 struct kvm_run *VAR_28 = VAR_27->run;
 u32 VAR_29;
 int VAR_30, VAR_31, VAR_32;
 enum emulation_result VAR_33 = VAR_3;
 int VAR_34 = 1;
 struct instruction_op VAR_35;


 FUNC_19(VAR_27, VAR_1);

 VAR_33 = FUNC_10(VAR_27, VAR_6, &VAR_29);
 if (VAR_33 != VAR_2)
  return VAR_33;

 VAR_30 = FUNC_3(VAR_29);
 VAR_31 = FUNC_4(VAR_29);
 VAR_32 = FUNC_5(VAR_29);

 VAR_27->arch.mmio_vsx_copy_nums = 0;
 VAR_27->arch.mmio_vsx_offset = 0;
 VAR_27->arch.mmio_copy_type = VAR_13;
 VAR_27->arch.mmio_sp64_extend = 0;
 VAR_27->arch.mmio_sign_extend = 0;
 VAR_27->arch.mmio_vmx_copy_nums = 0;
 VAR_27->arch.mmio_vmx_offset = 0;
 VAR_27->arch.mmio_host_swabbed = 0;

 VAR_33 = VAR_3;
 VAR_27->arch.regs.msr = VAR_27->arch.shared->msr;
 if (FUNC_2(&VAR_35, &VAR_27->arch.regs, VAR_29) == 0) {
  int VAR_36 = VAR_35.type & VAR_5;
  int VAR_37 = FUNC_0(VAR_35.type);

  switch (VAR_36) {
  case 135: {
   int VAR_38 = VAR_35.type & VAR_0;

   if (VAR_35.type & VAR_22)
    VAR_33 = FUNC_13(VAR_28, VAR_27,
      VAR_35.reg, VAR_37, !VAR_38);
   else
    VAR_33 = FUNC_12(VAR_28, VAR_27,
      VAR_35.reg, VAR_37, !VAR_38);

   if ((VAR_35.type & VAR_23) && (VAR_33 != VAR_3))
    FUNC_20(VAR_27, VAR_35.update_reg, VAR_35.ea);

   break;
  }
  case 131:



   VAR_33 = FUNC_14(VAR_28, VAR_27, VAR_35.val,
     VAR_37, 1);

   if ((VAR_35.type & VAR_23) && (VAR_33 != VAR_3))
    FUNC_20(VAR_27, VAR_35.update_reg, VAR_35.ea);

   break;
  case 136:






   VAR_33 = VAR_2;
   break;
  default:
   break;
  }
 }

 if (VAR_33 == VAR_3) {
  VAR_34 = 0;
  FUNC_9(VAR_27, 0);
 }

 FUNC_25(VAR_29, FUNC_11(VAR_27), VAR_33);


 if (VAR_34)
  FUNC_21(VAR_27, FUNC_11(VAR_27) + 4);

 return VAR_33;
}
