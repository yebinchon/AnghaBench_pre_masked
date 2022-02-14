
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union kvmppc_one_reg {int dummy; } kvmppc_one_reg ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int dac2; int dac1; int iac4; int iac3; int iac2; int iac1; } ;
struct TYPE_7__ {int vrsave; int tsr; int tcr; int epcr; TYPE_1__ dbg_reg; } ;
struct kvm_vcpu {TYPE_5__* kvm; TYPE_2__ arch; } ;
struct TYPE_9__ {TYPE_3__* kvm_ops; } ;
struct TYPE_10__ {TYPE_4__ arch; } ;
struct TYPE_8__ {int (* get_one_reg ) (struct kvm_vcpu*,int,union kvmppc_one_reg*) ;} ;


 int VAR_0 ;
 union kvmppc_one_reg FUNC_0 (int,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int,union kvmppc_one_reg*) ;

int FUNC_3(struct kvm_vcpu *VAR_1, u64 VAR_2,
   union kvmppc_one_reg *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2) {
 case 134:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.dbg_reg.iac1);
  break;
 case 133:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.dbg_reg.iac2);
  break;
 case 139:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.dbg_reg.dac1);
  break;
 case 138:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.dbg_reg.dac2);
  break;
 case 135: {
  u32 VAR_5 = FUNC_1(VAR_1);
  *VAR_3 = FUNC_0(VAR_2, VAR_5);
  break;
 }





 case 130:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.tcr);
  break;
 case 129:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.tsr);
  break;
 case 137:
  *VAR_3 = FUNC_0(VAR_2, VAR_0);
  break;
 case 128:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.vrsave);
  break;
 default:
  VAR_4 = VAR_1->kvm->arch.kvm_ops->get_one_reg(VAR_1, VAR_2, VAR_3);
  break;
 }

 return VAR_4;
}
