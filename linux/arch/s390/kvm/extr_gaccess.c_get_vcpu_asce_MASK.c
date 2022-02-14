
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union asce {int r; scalar_t__ val; } ;
typedef int u8 ;
struct psw_bits {int as; int dat; } ;
struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef enum gacc_mode { ____Placeholder_gacc_mode } gacc_mode ;
struct TYPE_3__ {scalar_t__* gcr; int gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct kvm_vcpu*,union asce*,int ,int) ;
 struct psw_bits FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*,int,unsigned long,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2, union asce *VAR_3,
    unsigned long VAR_4, u8 VAR_5, enum gacc_mode VAR_6)
{
 int VAR_7;
 struct psw_bits VAR_8 = FUNC_1(VAR_2->arch.sie_block->gpsw);

 if (!VAR_8.dat) {
  VAR_3->val = 0;
  VAR_3->r = 1;
  return 0;
 }

 if ((VAR_6 == VAR_0) && (VAR_8.as != 130))
  VAR_8.as = 129;

 switch (VAR_8.as) {
 case 129:
  VAR_3->val = VAR_2->arch.sie_block->gcr[1];
  return 0;
 case 128:
  VAR_3->val = VAR_2->arch.sie_block->gcr[7];
  return 0;
 case 130:
  VAR_3->val = VAR_2->arch.sie_block->gcr[13];
  return 0;
 case 131:
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_5, VAR_6);
  if (VAR_7 > 0)
   return FUNC_2(VAR_2, VAR_7, VAR_4, VAR_5, VAR_6, VAR_1);
  return VAR_7;
 }
 return 0;
}
