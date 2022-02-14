
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct trans_exc_code_bits {int b61; int b56; int b60; unsigned long addr; int as; int fsi; } ;
struct kvm_s390_pgm_info {int code; int exc_access_id; int trans_exc_code; } ;
struct TYPE_5__ {TYPE_1__* sie_block; struct kvm_s390_pgm_info pgm; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef enum prot_type { ____Placeholder_prot_type } prot_type ;
typedef enum gacc_mode { ____Placeholder_gacc_mode } gacc_mode ;
struct TYPE_6__ {int as; } ;
struct TYPE_4__ {int gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct kvm_s390_pgm_info*,int ,int) ;
 TYPE_3__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_4, int VAR_5, unsigned long VAR_6,
       u8 VAR_7, enum gacc_mode VAR_8, enum prot_type VAR_9)
{
 struct kvm_s390_pgm_info *VAR_10 = &VAR_4->arch.pgm;
 struct trans_exc_code_bits *VAR_11;

 FUNC_0(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->code = VAR_5;
 VAR_11 = (struct trans_exc_code_bits *)&VAR_10->trans_exc_code;

 switch (VAR_5) {
 case 137:
  switch (VAR_9) {
  case 130:
   VAR_11->b61 = 1;

  case 128:
   VAR_11->b56 = 1;
   break;
  case 129:
   VAR_11->b60 = 1;
   break;
  case 132:
   VAR_11->b60 = 1;

  case 131:
   VAR_11->b61 = 1;
   break;
  }

 case 142:
 case 138:
 case 136:
 case 135:
 case 134:
 case 133:





  VAR_11->addr = VAR_6 >> VAR_3;
  VAR_11->fsi = VAR_8 == VAR_2 ? VAR_1 : VAR_0;
  VAR_11->as = FUNC_1(VAR_4->arch.sie_block->gpsw).as;

 case 144:
 case 143:
 case 140:
 case 141:
 case 139:





  VAR_10->exc_access_id = VAR_7;
  break;
 }
 return VAR_5;
}
