
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union asce {int r; } ;
typedef int u8 ;
struct TYPE_5__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
typedef int psw_t ;
typedef enum prot_type { ____Placeholder_prot_type } prot_type ;
typedef enum gacc_mode { ____Placeholder_gacc_mode } gacc_mode ;
struct TYPE_6__ {scalar_t__ dat; } ;
struct TYPE_4__ {int gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,union asce*,unsigned long,int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long,unsigned long*,union asce,int,int*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ,unsigned long) ;
 unsigned long FUNC_4 (struct kvm_vcpu*,unsigned long) ;
 unsigned long FUNC_5 (struct kvm_vcpu*,unsigned long) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*,union asce) ;
 TYPE_3__ FUNC_7 (int ) ;
 int FUNC_8 (struct kvm_vcpu*,int,unsigned long,int ,int,int) ;

int FUNC_9(struct kvm_vcpu *VAR_4, unsigned long VAR_5, u8 VAR_6,
       unsigned long *VAR_7, enum gacc_mode VAR_8)
{
 psw_t *VAR_9 = &VAR_4->arch.sie_block->gpsw;
 enum prot_type VAR_10;
 union asce VAR_11;
 int VAR_12;

 VAR_5 = FUNC_4(VAR_4, VAR_5);
 VAR_12 = FUNC_0(VAR_4, &VAR_11, VAR_5, VAR_6, VAR_8);
 if (VAR_12)
  return VAR_12;
 if (FUNC_2(VAR_5) && FUNC_6(VAR_4, VAR_11)) {
  if (VAR_8 == VAR_0)
   return FUNC_8(VAR_4, VAR_2, VAR_5, 0,
      VAR_8, VAR_3);
 }

 if (FUNC_7(*VAR_9).dat && !VAR_11.r) {
  VAR_12 = FUNC_1(VAR_4, VAR_5, VAR_7, VAR_11, VAR_8, &VAR_10);
  if (VAR_12 > 0)
   return FUNC_8(VAR_4, VAR_12, VAR_5, 0, VAR_8, VAR_10);
 } else {
  *VAR_7 = FUNC_5(VAR_4, VAR_5);
  if (FUNC_3(VAR_4->kvm, *VAR_7))
   return FUNC_8(VAR_4, VAR_12, VAR_5, VAR_1, VAR_8, 0);
 }

 return VAR_12;
}
