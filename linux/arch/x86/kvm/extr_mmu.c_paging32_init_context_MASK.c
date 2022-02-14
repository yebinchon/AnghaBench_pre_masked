
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {int nx; int direct_map; int shadow_root_level; int update_pte; int invlpg; int sync_page; int gva_to_gpa; int page_fault; int root_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_mmu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_mmu*,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_7,
      struct kvm_mmu *VAR_8)
{
 VAR_8->nx = 0;
 VAR_8->root_level = VAR_1;

 FUNC_0(VAR_7, VAR_8);
 FUNC_2(VAR_7, VAR_8, 0);
 FUNC_3(VAR_7, VAR_8, 0);
 FUNC_1(VAR_7, VAR_8);

 VAR_8->page_fault = VAR_4;
 VAR_8->gva_to_gpa = VAR_2;
 VAR_8->sync_page = VAR_5;
 VAR_8->invlpg = VAR_3;
 VAR_8->update_pte = VAR_6;
 VAR_8->shadow_root_level = VAR_0;
 VAR_8->direct_map = 0;
}
