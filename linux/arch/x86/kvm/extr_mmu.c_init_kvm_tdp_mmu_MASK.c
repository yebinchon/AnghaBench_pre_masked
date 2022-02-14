
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int word; } ;
union kvm_mmu_role {scalar_t__ as_u64; TYPE_2__ base; } ;
struct TYPE_6__ {struct kvm_mmu* mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_8__ {scalar_t__ as_u64; } ;
struct kvm_mmu {int direct_map; int nx; void* gva_to_gpa; scalar_t__ root_level; int inject_page_fault; int get_pdptr; int get_cr3; int set_cr3; int shadow_root_level; int update_pte; int invlpg; int sync_page; int page_fault; TYPE_3__ mmu_role; } ;
struct TYPE_10__ {int set_tdp_cr3; int (* get_tdp_level ) (struct kvm_vcpu*) ;} ;
struct TYPE_9__ {int word; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 void* FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 union kvm_mmu_role FUNC_5 (struct kvm_vcpu*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 TYPE_4__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_6 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_7 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int VAR_15 ;
 int FUNC_9 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_10 (struct kvm_vcpu*,struct kvm_mmu*,int) ;
 int FUNC_11 (struct kvm_vcpu*,struct kvm_mmu*,int) ;

__attribute__((used)) static void FUNC_12(struct kvm_vcpu *VAR_16)
{
 struct kvm_mmu *VAR_17 = VAR_16->arch.mmu;
 union kvm_mmu_role VAR_18 =
  FUNC_5(VAR_16, 0);

 VAR_18.base.word &= VAR_8.word;
 if (VAR_18.as_u64 == VAR_17->mmu_role.as_u64)
  return;

 VAR_17->mmu_role.as_u64 = VAR_18.as_u64;
 VAR_17->page_fault = VAR_15;
 VAR_17->sync_page = VAR_11;
 VAR_17->invlpg = VAR_10;
 VAR_17->update_pte = VAR_12;
 VAR_17->shadow_root_level = VAR_7->get_tdp_level(VAR_16);
 VAR_17->direct_map = 1;
 VAR_17->set_cr3 = VAR_7->set_tdp_cr3;
 VAR_17->get_cr3 = VAR_4;
 VAR_17->get_pdptr = VAR_6;
 VAR_17->inject_page_fault = VAR_5;

 if (!FUNC_4(VAR_16)) {
  VAR_17->nx = 0;
  VAR_17->gva_to_gpa = VAR_9;
  VAR_17->root_level = 0;
 } else if (FUNC_1(VAR_16)) {
  VAR_17->nx = FUNC_2(VAR_16);
  VAR_17->root_level = FUNC_0(VAR_16) ?
    VAR_3 : VAR_2;
  FUNC_6(VAR_16, VAR_17);
  VAR_17->gva_to_gpa = VAR_14;
 } else if (FUNC_3(VAR_16)) {
  VAR_17->nx = FUNC_2(VAR_16);
  VAR_17->root_level = VAR_0;
  FUNC_6(VAR_16, VAR_17);
  VAR_17->gva_to_gpa = VAR_14;
 } else {
  VAR_17->nx = 0;
  VAR_17->root_level = VAR_1;
  FUNC_6(VAR_16, VAR_17);
  VAR_17->gva_to_gpa = VAR_13;
 }

 FUNC_10(VAR_16, VAR_17, 0);
 FUNC_11(VAR_16, VAR_17, 0);
 FUNC_9(VAR_16, VAR_17);
 FUNC_7(VAR_16, VAR_17);
}
