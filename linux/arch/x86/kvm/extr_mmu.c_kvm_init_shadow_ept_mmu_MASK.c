
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int word; } ;
union kvm_mmu_role {scalar_t__ as_u64; TYPE_4__ base; } ;
struct TYPE_5__ {struct kvm_mmu* mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_6__ {scalar_t__ as_u64; } ;
struct kvm_mmu {int nx; int ept_ad; int direct_map; TYPE_2__ mmu_role; void* root_level; int update_pte; int invlpg; int sync_page; int gva_to_gpa; int page_fault; void* shadow_root_level; } ;
typedef int gpa_t ;
struct TYPE_7__ {int word; } ;


 void* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,TYPE_4__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union kvm_mmu_role FUNC_1 (struct kvm_vcpu*,int,int) ;
 TYPE_3__ VAR_6 ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_mmu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_mmu*,int) ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_5 (struct kvm_vcpu*,struct kvm_mmu*,int) ;
 int FUNC_6 (struct kvm_vcpu*,struct kvm_mmu*,int) ;

void FUNC_7(struct kvm_vcpu *VAR_7, bool VAR_8,
        bool VAR_9, gpa_t VAR_10)
{
 struct kvm_mmu *VAR_11 = VAR_7->arch.mmu;
 union kvm_mmu_role VAR_12 =
  FUNC_1(VAR_7, VAR_9,
         VAR_8);

 FUNC_0(VAR_7, VAR_10, VAR_12.base, 0);

 VAR_12.base.word &= VAR_6.word;
 if (VAR_12.as_u64 == VAR_11->mmu_role.as_u64)
  return;

 VAR_11->shadow_root_level = VAR_0;

 VAR_11->nx = 1;
 VAR_11->ept_ad = VAR_9;
 VAR_11->page_fault = VAR_3;
 VAR_11->gva_to_gpa = VAR_1;
 VAR_11->sync_page = VAR_4;
 VAR_11->invlpg = VAR_2;
 VAR_11->update_pte = VAR_5;
 VAR_11->root_level = VAR_0;
 VAR_11->direct_map = 0;
 VAR_11->mmu_role.as_u64 = VAR_12.as_u64;

 FUNC_5(VAR_7, VAR_11, 1);
 FUNC_6(VAR_7, VAR_11, 1);
 FUNC_4(VAR_7, VAR_11);
 FUNC_3(VAR_7, VAR_11, VAR_8);
 FUNC_2(VAR_7, VAR_11, VAR_8);
}
