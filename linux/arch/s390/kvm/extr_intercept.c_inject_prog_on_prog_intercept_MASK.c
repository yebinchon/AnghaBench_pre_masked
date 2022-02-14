
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_s390_pgm_info {int code; int per_access_id; int per_address; int per_atmid; int per_code; int exc_access_id; int trans_exc_code; int data_exc_code; int mon_code; int mon_class_nr; int op_access_id; int flags; } ;
struct TYPE_3__ {int iprcc; int peraid; int peraddr; int peratmid; int perc; int eai; int tecmc; int dxc; int mcn; int oai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_s390_pgm_info*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_2)
{
 struct kvm_s390_pgm_info VAR_3 = {
  .code = VAR_2->arch.sie_block->iprcc,

  .flags = VAR_0,
 };

 switch (VAR_2->arch.sie_block->iprcc & ~VAR_1) {
 case 153:
 case 146:
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 136:
 case 131:
 case 129:
  VAR_3.trans_exc_code = VAR_2->arch.sie_block->tecmc;
  break;
 case 152:
 case 151:
 case 149:
 case 148:
 case 147:
 case 144:
  VAR_3.exc_access_id = VAR_2->arch.sie_block->eai;
  break;
 case 150:
 case 137:
 case 134:
 case 133:
 case 132:
 case 130:
  VAR_3.trans_exc_code = VAR_2->arch.sie_block->tecmc;
  VAR_3.exc_access_id = VAR_2->arch.sie_block->eai;
  VAR_3.op_access_id = VAR_2->arch.sie_block->oai;
  break;
 case 138:
  VAR_3.mon_class_nr = VAR_2->arch.sie_block->mcn;
  VAR_3.mon_code = VAR_2->arch.sie_block->tecmc;
  break;
 case 128:
 case 145:
  VAR_3.data_exc_code = VAR_2->arch.sie_block->dxc;
  break;
 case 135:
  VAR_3.trans_exc_code = VAR_2->arch.sie_block->tecmc;
  VAR_3.exc_access_id = VAR_2->arch.sie_block->eai;
  break;
 default:
  break;
 }

 if (VAR_2->arch.sie_block->iprcc & VAR_1) {
  VAR_3.per_code = VAR_2->arch.sie_block->perc;
  VAR_3.per_atmid = VAR_2->arch.sie_block->peratmid;
  VAR_3.per_address = VAR_2->arch.sie_block->peraddr;
  VAR_3.per_access_id = VAR_2->arch.sie_block->peraid;
 }
 return FUNC_0(VAR_2, &VAR_3);
}
