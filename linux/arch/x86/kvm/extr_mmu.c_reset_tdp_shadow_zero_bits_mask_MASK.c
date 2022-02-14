
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsvd_bits_validate {int ** rsvd_bits_mask; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {int shadow_root_level; struct rsvd_bits_validate shadow_zero_check; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct rsvd_bits_validate*,int ,int,int,int ,int,int) ;
 int FUNC_1 (struct rsvd_bits_validate*,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct kvm_vcpu *VAR_3,
    struct kvm_mmu *VAR_4)
{
 struct rsvd_bits_validate *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_4->shadow_zero_check;

 if (FUNC_3())
  FUNC_0(VAR_3, VAR_5,
     VAR_2,
     VAR_4->shadow_root_level, 0,
     FUNC_2(VAR_0),
     1, 1);
 else
  FUNC_1(VAR_5,
         VAR_2,
         0);

 if (!VAR_1)
  return;

 for (VAR_6 = VAR_4->shadow_root_level; --VAR_6 >= 0;) {
  VAR_5->rsvd_bits_mask[0][VAR_6] &= ~VAR_1;
  VAR_5->rsvd_bits_mask[1][VAR_6] &= ~VAR_1;
 }
}
