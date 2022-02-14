
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
typedef void* u32 ;
struct TYPE_6__ {void* dac2; void* dac1; void* iac4; void* iac3; void* iac2; void* iac1; } ;
struct TYPE_7__ {void* vrsave; TYPE_1__ dbg_reg; } ;
struct kvm_vcpu {TYPE_5__* kvm; TYPE_2__ arch; } ;
struct TYPE_9__ {TYPE_3__* kvm_ops; } ;
struct TYPE_10__ {TYPE_4__ arch; } ;
struct TYPE_8__ {int (* set_one_reg ) (struct kvm_vcpu*,int,union kvmppc_one_reg*) ;} ;
 int FUNC_0 (struct kvm_vcpu*,void*) ;
 int FUNC_1 (struct kvm_vcpu*,void*) ;
 int FUNC_2 (struct kvm_vcpu*,void*) ;
 int FUNC_3 (struct kvm_vcpu*,void*) ;
 int FUNC_4 (struct kvm_vcpu*,void*) ;
 int FUNC_5 (struct kvm_vcpu*,void*) ;
 void* FUNC_6 (int,union kvmppc_one_reg) ;
 int FUNC_7 (struct kvm_vcpu*,int,union kvmppc_one_reg*) ;

int FUNC_8(struct kvm_vcpu *VAR_0, u64 VAR_1,
   union kvmppc_one_reg *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_1) {
 case 135:
  VAR_0->arch.dbg_reg.iac1 = FUNC_6(VAR_1, *VAR_2);
  break;
 case 134:
  VAR_0->arch.dbg_reg.iac2 = FUNC_6(VAR_1, *VAR_2);
  break;
 case 139:
  VAR_0->arch.dbg_reg.dac1 = FUNC_6(VAR_1, *VAR_2);
  break;
 case 138:
  VAR_0->arch.dbg_reg.dac2 = FUNC_6(VAR_1, *VAR_2);
  break;
 case 136: {
  u32 VAR_4 = FUNC_6(VAR_1, *VAR_2);
  FUNC_2(VAR_0, VAR_4);
  break;
 }







 case 131: {
  u32 VAR_5 = FUNC_6(VAR_1, *VAR_2);
  FUNC_5(VAR_0, VAR_5);
  break;
 }
 case 140: {
  u32 VAR_6 = FUNC_6(VAR_1, *VAR_2);
  FUNC_0(VAR_0, VAR_6);
  break;
 }
 case 129: {
  u32 VAR_7 = FUNC_6(VAR_1, *VAR_2);
  FUNC_4(VAR_0, VAR_7);
  break;
 }
 case 130: {
  u32 VAR_8 = FUNC_6(VAR_1, *VAR_2);
  FUNC_3(VAR_0, VAR_8);
  break;
 }
 case 128:
  VAR_0->arch.vrsave = FUNC_6(VAR_1, *VAR_2);
  break;
 default:
  VAR_3 = VAR_0->kvm->arch.kvm_ops->set_one_reg(VAR_0, VAR_1, VAR_2);
  break;
 }

 return VAR_3;
}
