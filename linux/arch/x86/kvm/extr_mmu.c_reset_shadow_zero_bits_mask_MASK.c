
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsvd_bits_validate {int ** rsvd_bits_mask; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {scalar_t__ smep_andnot_wp; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct kvm_mmu {int shadow_root_level; struct rsvd_bits_validate shadow_zero_check; TYPE_2__ mmu_role; scalar_t__ nx; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct rsvd_bits_validate*,int ,int,int,int ,int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(struct kvm_vcpu *VAR_3, struct kvm_mmu *VAR_4)
{
 bool VAR_5 = VAR_4->nx ||
  VAR_4->mmu_role.base.smep_andnot_wp;
 struct rsvd_bits_validate *VAR_6;
 int VAR_7;





 VAR_6 = &VAR_4->shadow_zero_check;
 FUNC_0(VAR_3, VAR_6,
    VAR_2,
    VAR_4->shadow_root_level, VAR_5,
    FUNC_1(VAR_3, VAR_0),
    FUNC_2(VAR_3), 1);

 if (!VAR_1)
  return;

 for (VAR_7 = VAR_4->shadow_root_level; --VAR_7 >= 0;) {
  VAR_6->rsvd_bits_mask[0][VAR_7] &= ~VAR_1;
  VAR_6->rsvd_bits_mask[1][VAR_7] &= ~VAR_1;
 }

}
